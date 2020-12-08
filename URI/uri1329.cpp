#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int n, m, j, val;
    cin >> n;
    while(n)
    {
        m = j = 0;
        while(n--)
        {
            cin >> val;
            if(val) ++j;
            else ++m;
        }
        printf("Mary won %d times and John won %d times\n", m, j);
        cin >> n;
    }

    return 0;
}
