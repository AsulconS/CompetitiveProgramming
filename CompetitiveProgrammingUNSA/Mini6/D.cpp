#include <cstdio>
#include <iostream>

#include <string>
#include <utility>

#include <map>

using namespace std;

int main()
{
    string country;
    string line;
    map<string, int> countries;

    int n;
    cin >> n;
    getline(cin, line);
    while(n--)
    {
        country = "";
        getline(cin, line);
        for(const char& c : line)
        {
            if(c == ' ')
                break;
            country += c;
        }
        ++countries[country];
    }

    for(const auto& i : countries)
    {
        printf("%s %d\n", i.first.c_str(), i.second);
    }

    return 0;
}
