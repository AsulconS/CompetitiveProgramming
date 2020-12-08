#include <cstdio>
#include <iostream>

using namespace std;

using ull = unsigned long long;

ull facsum(ull mi, ull ni)
{
    ull m {mi};
    ull n {ni};
    if(!m) m = 1;
    if(!n) n = 1;
    for(ull i = 2; i < mi; ++i)
        m *= i;
    for(ull i = 2; i < ni; ++i)
        n *= i;
    return m + n;
}

int main()
{
    ull m, n;
    while(cin >> m >> n)
        printf("%llu\n", facsum(m, n));

    return 0;
}
