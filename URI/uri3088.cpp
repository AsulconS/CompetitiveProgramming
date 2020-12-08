#include <cstdio>
#include <iostream>

#include <string>

using namespace std;

int main()
{
    string line;
    while(getline(cin, line))
    {
        for(int i = 1, previ = 0; i < line.size(); ++i, ++previ)
        {
            if((line[i] == ',' || line[i] == '.') && line[previ] == ' ')
                line[previ] = '$';
        }
        for(char c : line)
            if(c != '$')
                cout << c;
        cout << endl;
    }

    return 0;
}
