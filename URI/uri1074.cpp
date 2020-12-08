#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int n, x;
    cin >> n;
    while(n--)
    {
        cin >> x;
        if(x < 0)
            if(x & 0x1)
                printf("ODD NEGATIVE\n");
            else
                printf("EVEN NEGATIVE\n");
        else if(x > 0)
            if(x & 0x1)
                printf("ODD POSITIVE\n");
            else
                printf("EVEN POSITIVE\n");
        else
            printf("NULL\n");
    }

    return 0;
}
