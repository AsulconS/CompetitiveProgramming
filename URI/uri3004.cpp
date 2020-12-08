#include <cstdio>
#include <iostream>

#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int ax, ay, bx, by;
    while(n--)
    {
        cin >> ax >> ay >> bx >> by;
        if((ax < bx && ay < by) || (ay < bx && ax < by))
            printf("S\n");
        else
            printf("N\n");
    }

    return 0;
}
