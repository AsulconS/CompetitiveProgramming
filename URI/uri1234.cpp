#include <cstdio>
#include <iostream>

#include <cctype>
#include <string>

using namespace std;

int main()
{
    bool lcase;
    string line;
    while(getline(cin, line))
    {
        lcase = true;
        for(int i = 0; i < line.size(); ++i)
        {
            if(line[i] == ' ') continue;
            else if(lcase)
                line[i] = toupper(line[i]);
            else
                line[i] = tolower(line[i]);
            lcase = !lcase;
        }
        cout << line << endl;
    }

    return 0;
}
