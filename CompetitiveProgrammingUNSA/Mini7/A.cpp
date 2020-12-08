#include <cstdio>
#include <iostream>

#include <cmath>

using namespace std;

int main()
{
    double a, b, c;
    double A, s;
    while(cin >> a >> b >> c)
    {
        if((a >= b + c) || (b >= a + c) || (c >= a + b))
        {
            printf("-1.000\n");
            continue;
        }
        s = (a + b + c) / 2.0;
        A = sqrt(s * (s - a) * (s - b) * (s - c));
        printf("%.3lf\n", A * 4.0 / 3.0);
    }

    return 0;
}
