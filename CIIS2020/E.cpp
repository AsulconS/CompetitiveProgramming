#include <cstdio>
#include <iostream>

using namespace std;

using ull = unsigned long long;

int main()
{
    ull n, m;

    cin >> n >> m;
    while(n && m)
    {
        if(m == 1 || m == 2)
        {
            printf("%d\n", n);
            cin >> n >> m;
            continue;
        }

        ull x = n;
        ull y = n;
        ull z;
        for(ull i = 3; i <= m; ++i)
        {
            z = x + y;
            x = y;
            y = z;
        }
        printf("%llu\n", z);
        cin >> n >> m;
    }

    return 0;
}
