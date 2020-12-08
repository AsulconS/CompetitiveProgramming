#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int h {n / 3600}; n %= 3600;
    int m {n / 60}; n %= 60;
    int s {n};
    printf("%d:%d:%d\n", h, m, s);

    return 0;
}
