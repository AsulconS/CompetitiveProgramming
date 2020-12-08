#include <cstdio>
#include <iostream>

#include <cmath>

using namespace std;

int main()
{
    float val;

    int n;
    cin >> n;
    while(n--)
    {
        cin >> val;
        printf("%d dias\n", (int)ceil(log2(val)));
    }

    return 0;
}
