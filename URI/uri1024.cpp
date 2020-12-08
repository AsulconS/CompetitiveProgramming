#include <cstdio>
#include <iostream>

#include <cctype>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    string line;

    cin >> n;
    getline(cin, line);
    while(n--)
    {
        getline(cin, line);
        for(int i = 0; i < line.size(); ++i)
            if(isalpha(line[i]))
                line[i] += 3;
        reverse(line.begin(), line.end());
        for(int i = line.size() / 2; i < line.size(); ++i)
            --line[i];
        cout << line << endl;
    }

    return 0;
}
