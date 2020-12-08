#include <cstdio>
#include <iostream>

#include <cmath>
#include <vector>

using namespace std;

int t, s;
vector<vector<char>> fillGrid;

int floodFill(vector<vector<char>>& grid, int longest, int i, int j)
{
    if(i < 0 || i >= t || j < 0 || j >= s || fillGrid[i][j]) return 0;

    grid[i][j] = 1;
    int a = floodFill(grid, longest + 1, i, j - 1);
    int b = floodFill(grid, longest + 1, i, j + 1);
    int c = floodFill(grid, longest + 1, i - 1, j);
    int d = floodFill(grid, longest + 1, i + 1, j);
    int best = longest;
    if(a > best)
        best = a;
    if(b > best)
        best = b;
    if(c > best)
        best = c;
    if(d > best)
        best = d;

    grid[i][j] = 0;
    return max(best, longest);
}

int main()
{
    cin >> t >> s;
    while(t && s)
    {
        fillGrid.resize(t);
        for(int i = 0; i < t; ++i)
        {
            fillGrid[i].resize(s);
        }

        string row;
        for(int i = 0; i < t; ++i)
        {
            cin >> row;
            for(int j = 0; j < s; ++j)
            {
                if(row[j] == '.')
                    fillGrid[i][j] = 0;
                if(row[j] == '#')
                    fillGrid[i][j] = 2;
            }
        }
        int best {0};
        int current {0};
        best = floodFill(fillGrid, 0, 0, 0);
        /*
        for(int i = 0; i < t; ++i)
        {
            for(int j = 0; j < s; ++j)
            {
                current = floodFill(fillGrid, 0, i, j);
                if(current > best)
                    best = current;
            }
        }
        */
        printf("%d\n", best);
        cin >> t >> s;
    }

    return 0;
}
