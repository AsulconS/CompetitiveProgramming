#include <cstdio>
#include <iostream>

#define PI 3.14159

using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;

    double tri, cir, tra, cua, rec;
    printf("TRIANGULO: %.3lf\n", a * c * 0.5);
    printf("CIRCULO: %.3lf\n", PI * c * c);
    printf("TRAPEZIO: %.3lf\n", (a + b) * c * 0.5);
    printf("QUADRADO: %.3lf\n", b * b);
    printf("RETANGULO: %.3lf\n", a * b);

    return 0;
}
