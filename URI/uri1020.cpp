#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int a {n / 365}; n %= 365;
    int m {n / 30}; n %= 30;
    int d {n};
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", a, m, d);

    return 0;
}
