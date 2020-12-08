#include <cstdio>
#include <iostream>

#include <cmath>

using namespace std;

int main()
{
    double n;
    cin >> n;

    int k {(int)floor(n)};
    int d {(int)((n - (double)k) * 100.0)};
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", k / 100); k %= 100;
    printf("%d nota(s) de R$ 50.00\n", k / 50); k %= 50;
    printf("%d nota(s) de R$ 20.00\n", k / 20); k %= 20;
    printf("%d nota(s) de R$ 10.00\n", k / 10); k %= 10;
    printf("%d nota(s) de R$ 5.00\n", k / 5); k %= 5;
    printf("%d nota(s) de R$ 2.00\n", k / 2); k %= 2;
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", k);
    printf("%d moeda(s) de R$ 0.50\n", d / 50); d %= 50;
    printf("%d moeda(s) de R$ 0.25\n", d / 25); d %= 25;
    printf("%d moeda(s) de R$ 0.10\n", d / 10); d %= 10;
    printf("%d moeda(s) de R$ 0.05\n", d / 5); d %= 5;
    printf("%d moeda(s) de R$ 0.01\n", d);

    return 0;
}
