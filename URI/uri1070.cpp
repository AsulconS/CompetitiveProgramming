#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int x, c;
    c = 5;

    cin >> x;
    x |= 0x1;
    printf("%d\n", x);
    while(c--)
        printf("%d\n", x += 2);

    return 0;
}
