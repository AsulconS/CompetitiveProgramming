#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string line;

    bool cof;
    int sym;
    int lxTimes, rxTimes, lintTimes, rintTimes, idig;
    int lSum, rSum;
    int* xTimes;
    int* intTimes;
    while(n--)
    {
        cin >> line;
        sym = 1;
        lxTimes = 0;
        rxTimes = 0;
        lintTimes = 0;
        rintTimes = 0;
        idig = 0;
        xTimes = &lxTimes;
        intTimes = &lintTimes;
        line += '$';
        cof = false;
        for(const char& c : line)
        {
            if(c == '+')
            {
                if(idig) *intTimes += sym * idig;
                idig = 0;
                sym = 1;
                cof = false;
            }
            else if(c == '-')
            {
                if(idig) *intTimes += sym * idig;
                idig = 0;
                sym = -1;
                cof = false;
            }

            else if(c == 'x')
            {
                if(idig)
                {
                    *xTimes += sym * idig;
                    idig = 0;
                }
                else if(!cof)
                    *xTimes += sym;
                cof = false;
            }
            else if(c == '=')
            {
                if(idig) *intTimes += sym * idig;
                idig = 0;
                sym = 1;
                xTimes = &rxTimes;
                intTimes = &rintTimes;
                cof = false;
            }

            else if(c >= '0' && c <= '9')
            {
                idig *= 10;
                idig += c - '0';
                cof = true;
            }

            else if(c == '$')
                if(idig) *intTimes += sym * idig;
        }
        lSum = lxTimes - rxTimes;
        rSum = rintTimes - lintTimes;
        if(!lSum && !rSum)
        {
            printf("IDENTITY\n");
            continue;
        }
        if(!lSum && rSum)
        {
            printf("IMPOSSIBLE\n");
            continue;
        }
        printf("%d\n", rSum / lSum);
    }

    return 0;
}
