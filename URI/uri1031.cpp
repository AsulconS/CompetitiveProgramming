#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int res;
    int n, k;

    cin >> n;
    while(n)
    {
        --n;
        k = 1;
        while(true)
        {
            res = 0;
            for(int i = 2; i <= n; ++i)
            {
                res = (res + k) % i;
            }
            if(res == 11) break;
            ++k;
        }

        printf("%d\n", k);
        cin >> n;
    }

    return 0;
}
