#include <cstdio>
#include <iostream>

#include <string>

using namespace std;

int main()
{
    string ph;
    cin >> ph;

    double a, b;
    cin >> a >> b;
    printf("TOTAL = R$ %.2lf\n", a + b * 0.15);

    return 0;
}
