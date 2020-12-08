#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int time1, time2;
    int h1, m1, h2, m2;
    cin >> h1 >> m1 >> h2 >> m2;
    while(h1 || m1 || h2 || m2)
    {
        time1 = h1 * 60 + m1;
        time2 = h2 * 60 + m2;
        if(time1 > time2) time2 += 1440;
        printf("%d\n", time2 - time1);
        cin >> h1 >> m1 >> h2 >> m2;
    }

    return 0;
}
