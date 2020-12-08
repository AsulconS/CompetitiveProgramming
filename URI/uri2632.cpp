#include <cstdio>
#include <iostream>

#include <cmath>
#include <string>

using namespace std;

int table[4][4] =
{
    {200, 20, 30, 50},
    {300, 10, 25, 40},
    {400, 25, 55, 70},
    {100, 18, 38, 60}
};

int clamp(int val, int lb, int rb)
{
    return max(lb, min(rb, val));
}

int main()
{
    int w, h, x0, y0, n, cx, cy;
    int row, xx, yy, dx, dy, sdistance, sradius;
    string id;

    int t;
    cin >> t;
    while(t--)
    {
        cin >> w >> h >> x0 >> y0 >> id >> n >> cx >> cy;
        if(id == "fire") row = 0;
        if(id == "water") row = 1;
        if(id == "earth") row = 2;
        if(id == "air") row = 3;

        xx = clamp(cx, x0, x0 + w);
        yy = clamp(cy, y0, y0 + h);

        dx = cx - xx;
        dy = cy - yy;

        sdistance = (dx * dx) + (dy * dy);
        sradius = table[row][n] * table[row][n];
        if(sdistance <= sradius)
            printf("%d\n", table[row][0]);
        else
            printf("0\n");
    }

    return 0;
}
