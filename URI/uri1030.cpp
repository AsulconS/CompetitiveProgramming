#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int nc;
    cin >> nc;

    int res;
    int n, k;
    for(int c = 0; c < nc; ++c)
    {
        cin >> n >> k;

        res = 0;
        for(int i = 2; i <= n; ++i)
        {
            res = (res + k) % i;
        }
        ++res;

        printf("Case %d: %d\n", c + 1, res);
    }

    return 0;
}
