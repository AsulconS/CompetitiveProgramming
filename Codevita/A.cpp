#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int s, t, m;
    int i, l, r;
    while(cin >> s >> t >> m)
    {
        if(!(t % s))
        {
            l = (m + 1) % s;
            r = m - 1;
            if(r < 0)  l += s;
            else if(!r) r = s;
        }
        else if(s & 0x1)
        {
            i = t % s;
            if(m & 0x1);
            else
            {
                if(i > m - 1)
                {
                    if(i == m)
                    {
                        r = s - m;
                        l = (m + 2) % s;
                        if(l < m)
                            l = s - l + 1;
                    }
                    else
                    {
                        l = (2 * i - (m - 2));
                        if(l > s)
                        {
                            l %= s;
                            l = s - l + 1;
                            if(l == s) r = l - 1;
                            else r = l + 2;
                        }
                        else r = l - 2;
                    }
                }
                else if(i == m - 1)
                {
                    l = m - 2;
                    r = s - m + 2;
                }
                else
                {
                    l = (m - 1 - 2 * (i - 1));
                    r = l - 2;
                    if(l < 0)
                        l = 1 - l;
                    if(r < 0)
                        r = 1 - r;
                }
            }
        }
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
        }
        if((t / s) & 0x1)
            printf("%d %d\n", r, l);
        else
            printf("%d %d\n", l, r);
    }

    return 0;
}
