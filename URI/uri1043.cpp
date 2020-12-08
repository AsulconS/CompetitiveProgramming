#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    float a, b, c;
    cin >> a >> b >> c;

    if(a < b + c && b < a + c && c < a + b)
        printf("Perimetro = %.1f\n", a + b + c);
    else
        printf("Area = %.1f\n", ((a + b) * c) / 2.0f);

    return 0;
}
