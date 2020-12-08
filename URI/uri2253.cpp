#include <cstdio>
#include <iostream>

#include <cctype>
#include <string>

using namespace std;

int main()
{
    string s;
    bool is_valid;
    bool constraints[3];
    while(getline(cin, s))
    {
        if(s.size() < 6 || s.size() > 32)
        {
            printf("Senha invalida.\n");
            continue;
        }

        is_valid = true;
        constraints[0] = constraints[1] = constraints[2] = false;
        for(char c : s)
            if(!isalnum(c))
            {
                is_valid = false;
                break;
            }
            else
            {
                if(c >= 'a')
                    constraints[0] = true;
                else if(c >= 'A')
                    constraints[1] = true;
                else
                    constraints[2] = true;
            }
        if(is_valid && constraints[0] && constraints[1] && constraints[2])
            printf("Senha valida.\n");
        else
            printf("Senha invalida.\n");
    }

    return 0;
}
