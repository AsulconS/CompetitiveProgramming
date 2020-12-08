#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int k {n};
    printf("%d\n", k);
    printf("%d nota(s) de R$ 100,00\n", k / 100); k %= 100;
    printf("%d nota(s) de R$ 50,00\n", k / 50); k %= 50;
    printf("%d nota(s) de R$ 20,00\n", k / 20); k %= 20;
    printf("%d nota(s) de R$ 10,00\n", k / 10); k %= 10;
    printf("%d nota(s) de R$ 5,00\n", k / 5); k %= 5;
    printf("%d nota(s) de R$ 2,00\n", k / 2); k %= 2;
    printf("%d nota(s) de R$ 1,00\n", k);

    return 0;
}
