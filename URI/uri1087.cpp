#include <cmath>
#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    int dx, dy;
    while(x1)
    {
        dx = abs(x1 - x2);
        dy = abs(y1 - y2);
        if(dx == 0 && dy == 0)
        {
            printf("%d\n", 0);
        }
        else if(dx == dy || dx == 0 || dy == 0)
        {
            printf("%d\n", 1);
        }
        else
        {
            printf("%d\n", 2);
        }

        cin >> x1 >> y1 >> x2 >> y2;
    }

    return 0;
}
