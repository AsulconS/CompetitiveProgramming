#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int b, t, res;
    cin >> b >> t;

    res  = 35 * (b + t);
    res -= 11200 - res;
    if(res < 0)
        printf("2\n");
    else if(res > 0)
        printf("1\n");
    else
        printf("0\n");

    return 0;
}
