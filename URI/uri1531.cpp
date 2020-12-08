#include <cstdio>
#include <iostream>

using namespace std;

using ull = unsigned long long;

// Find k (Pisano's Lenght)
ull findPisano(ull m)
{
    ull px {1};
    ull py {1};
    ull pz;
    ull k = 2;
    while(!(px == 0 && py == 1))
    {
        pz = (px + py) % m;
        px = py;
        py = pz;
        ++k;
    };

    return k - 1; // k exceeds 1 only due to the last comparission
}

ull fibonacciRemainder(ull n, ull m, ull k = 0)
{
    if(!k) k = findPisano(m);
    n %= k;

    if(n == 0) return 0;
    if(n == 1 || n == 2) return 1;

    ull rx {1};
    ull ry {1};
    ull rz;
    for(ull i = 3; i <= n; ++i)
    {
        rz = (rx + ry) % m;
        rx = ry;
        ry = rz;
    }
    return rz;
}

int main()
{
    ull k;
    ull n, m;
    while(cin >> n >> m)
    {
        if(n == 1 || n == 2 || n == 3)
        {
            printf("1\n");
            continue;
        }

        ull k {findPisano(m)};
        printf("%llu\n", fibonacciRemainder(fibonacciRemainder(n, k), m, k));
    }

    return 0;
}
