#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int s, t, m;
    int i, l, r;
    while(cin >> s >> t >> m)
    {
        if(s & 0x1)
            i = t % s;
        else
        {
            i = t % (s / 2);
            if(m & 0x1)
            {
                r = (2 * i + m - 1) % s;
                if(r <= 0) r += s;
                l = (r + 2) % s;
                if(!l) l = s;
            }
            else
            {
                r = (s - (2 * (i - 1) + 1 - (m - 2))) % s;
                if(r <= 0) r += s;
                l = (r + 2) % s;
                if(!l) l = s;
            }
            printf("%d %d\n", l, r);
        }
    }

    return 0;
}
