#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int l, r;
    scanf("%d.%d", &l, &r);
    int ri {l * 100 + r};

    int a {36000};
    int b {ri};
    int temp;
    while(b)
    {
        temp = a;
        a = b;
        b = temp % b;
    }
    printf("%d\n", 36000 / a);

    return 0;
}
