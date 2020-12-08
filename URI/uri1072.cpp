#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int n, x, ci, ct;
    cin >> n;
    ci = 0;
    ct = n;
    while(n--)
    {
        cin >> x;
        if(x > 9 && x < 21) ++ci;
    }
    printf("%d in\n", ci);
    printf("%d out\n", ct - ci);

    return 0;
}
