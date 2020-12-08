#include <cstdio>
#include <iostream>

#include <string>

using namespace std;

int main()
{
    int offset;
    string line;

    int n;
    cin >> n;
    while(n--)
    {
        cin >> line >> offset;
        for(int i = 0; i < line.size(); ++i)
        {
            line[i] -= offset;
            if(line[i] < 'A') line[i] += 26;
        }
        cout << line << endl;
    }

    return 0;
}
