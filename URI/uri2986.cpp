#include <cstdio>
#include <iostream>

using namespace std;

using ull = unsigned long long;

int main()
{
    int n;
    cin >> n;

    ull a {1};
    ull b {2};
    ull c {4};
    ull current {0};
    if(n < 4)
    {
        switch(n)
        {
            case 1:
                current = a;
                break;
            case 2:
                current = b;
                break;
            case 3:
                current = c;
                break;
            default:
                break;
        }
    }
    for(int i = 4; i <= n; ++i)
    {
        current = (a + b + c) % 1000000007ull;
        a = b;
        b = c;
        c = current;
    }
    printf("%llu\n", current);

    return 0;
}
