#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if(!(a % b) || !(b % a))
        printf("Sao Multiplos\n");
    else
        printf("Nao sao Multiplos\n");

    return 0;
}
