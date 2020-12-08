#include <cmath>
#include <cstdio>
#include <iostream>

using namespace std;

using ull = unsigned long long;

int main()
{
    int n;
    ull val;
    ull amount;

    cin >> n;
    while(n--)
    {
        cin >> val;
        if(val == 64)
        {
            amount = 1537228672809129ull;
        }
        else
        {
            amount = ((0x1ull << val) - 1ull) / 12000ull;
        }
        printf("%llu kg\n", amount);
    }

    return 0;
}
