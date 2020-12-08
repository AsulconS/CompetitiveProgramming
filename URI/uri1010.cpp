#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int _1, _2;
    int n1, n2;
    float a, b;
    cin >> _1 >> n1 >> a;
    cin >> _2 >> n2 >> b;
    printf("VALOR A PAGAR: R$ %.2f\n", (float)n1 * a + (float)n2 * b);

    return 0;
}
