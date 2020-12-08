#include <cstdio>
#include <iostream>

#include <string>

using namespace std;

int main()
{
    int n, count;
    int bracketStack {0};

    string line;

    cin >> n;
    getline(cin, line);
    while(n--)
    {
        count = 0;
        bracketStack = 0;

        getline(cin, line);
        for(const char& c : line)
        {
            if(c == '<') ++bracketStack;
            else if(c == '>' && bracketStack)
            {
                --bracketStack;
                ++count;
            }
        }
        printf("%d\n", count);
    }

    return 0;
}
