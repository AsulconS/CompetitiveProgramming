#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    float n;
    cin >> n;

    if(n >= 0.0f && n <= 25.0f)
        printf("Intervalo [0,25]\n");
    else if(n > 25.0f && n <= 50.0f)
        printf("Intervalo (25,50]\n");
    else if(n > 50.0f && n <= 75.0f)
        printf("Intervalo (50,75]\n");
    else if(n > 75.0f && n <= 100.0f)
        printf("Intervalo (75,100]\n");
    else
        printf("Fora de intervalo\n");

    return 0;
}
