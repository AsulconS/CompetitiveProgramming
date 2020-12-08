#include <cstdio>
#include <iostream>

#include <string>

using namespace std;

void computeLPS(const string& pat, int* lps)
{
    int len {0};
    int i {1};
    lps[0] = 0;
    while(i < pat.size())
        if(pat[i] == pat[len])
            lps[i++] = ++len;
        else
            if(len > 0)
                len = lps[len - 1];
            else
                lps[i++] = 0;
}

int main()
{
    int n;
    cin >> n;

    int best;
    string line;
    while(n--)
    {
        cin >> line;
        int* lps = new int[line.size()];
        computeLPS(line, lps);
        for(int i = 0; i < line.size(); ++i)
            cout << lps[i] << ' ';
        cout << endl;

        delete[] lps;
    }

    return 0;
}
