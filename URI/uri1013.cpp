#include <cstdio>
#include <iostream>

#include <cmath>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int m;
    m = (a + b + abs(a - b)) / 2;
    m = (m + c + abs(m - c)) / 2;
    printf("%d eh o maior\n", m);

    return 0;
}
