#include <cstdio>
#include <iostream>

using namespace std;

using ull = unsigned long long;

int main()
{
    int t;
    ull a, b, k;

    cin >> t;
    for(int c = 0; c < t; ++c)
    {
        cin >> a >> b >> k;
        ull cases {0};
        for(ull i = 0; i < a; ++i)
        {
            for(ull j = 0; j < b; ++j)
            {
                if((i & j) < k) ++cases;
            }
        }
        printf("Case #%d: %llu\n", c + 1, cases);
    }

    return 0;
}
