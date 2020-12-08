#include <cstdio>
#include <iostream>

using namespace std;

float buffer[] = {4.0f, 4.5f, 5.0f, 2.0f, 1.5f};

int main()
{
    int x, y;
    cin >> x >> y;
    printf("Total: R$ %.2f\n", buffer[x - 1] * (float)y);

    return 0;
}
