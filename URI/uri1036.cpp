#include <cstdio>
#include <iostream>

#include <cmath>

using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;

    if(!a)
    {
        printf("Impossivel calcular\n");
        return 0;
    }

    double d {b * b - 4.0 * a * c};
    if(d < 0)
        printf("Impossivel calcular\n");
    else
    {
        d = sqrt(d);
        a *= 2.0;
        printf("R1 = %.5lf\nR2 = %.5lf\n", (-b + d) / a, (-b - d) / a);
    }

    return 0;
}
