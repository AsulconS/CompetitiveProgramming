#include <cstdio>
#include <iostream>

#include <string>
#include <cstring>

using namespace std;

char dig[10];

bool checkDig()
{
    for(int i = 0; i < 10; ++i)
    {
        if(!dig[i])
            return false;
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    memset(dig, 0, sizeof(dig));

    int n;
    string number;
    for(int i = 0; i < t; ++i)
    {
        cin >> n;
        if(!n)
        {
            printf("Case #%d: NUNCA\n", i + 1);
            continue;
        }
        memset(dig, 0, sizeof(dig));

        int k {2};
        int current {n};
        while(!checkDig())
        {
            number = to_string(current);
            for(int j = 0; j < number.size(); ++j)
                dig[number[j] - '0'] = 1;
            current = n * k++;
        }
        printf("Case #%d: %d\n", i + 1, current - n);
    }

    return 0;
}
