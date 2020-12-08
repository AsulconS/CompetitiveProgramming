#include <cstdio>
#include <iostream>

#define _USE_MATH_DEFINES
#include <cmath>

using namespace std;

int main()
{
    int ni;
    cin >> ni;

    double n {(double)ni};
    double stirling_log {floor(((n + 0.5) * log(n) - n + 0.5 * log(2.0 * M_PI)) / log(10.0))};
    printf("%d\n", (int)stirling_log + 1);

    return 0;
}
