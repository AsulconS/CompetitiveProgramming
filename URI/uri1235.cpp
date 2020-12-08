#include <cstdio>
#include <iostream>

#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string line;

    int n;
    cin >> n;
    getline(cin, line);
    while(n--)
    {
        getline(cin, line);
        reverse(line.begin(), line.begin() + line.size() / 2);
        reverse(line.begin() + line.size() / 2, line.end());
        cout << line << endl;
    }

    return 0;
}
