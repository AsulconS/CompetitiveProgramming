#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int even {0};
    int odd {0};
    int pos {0};
    int neg {0};

    int val;
    for(size_t i = 0; i < 5; i++)
    {
        cin >> val;
        if(val > 0)
            ++pos;
        else if(val < 0)
        {
            val = -val;
            ++neg;
        }

        if(val & 0x1)
            ++odd;
        else
            ++even;
    }
    printf("%d valor(es) par(es)\n", even);
    printf("%d valor(es) impar(es)\n", odd);
    printf("%d valor(es) positivo(s)\n", pos);
    printf("%d valor(es) negativo(s)\n", neg);

    return 0;
}
