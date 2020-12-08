#include <cstdio>
#include <iostream>

#define PI 3.14159

using namespace std;

int main()
{
    int r;
    cin >> r;
    printf("VOLUME = %.3lf\n", (4.0 / 3.0) * PI * r * r * r);

    return 0;
}
