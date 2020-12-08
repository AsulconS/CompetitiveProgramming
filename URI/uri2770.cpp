#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int x, y, m, xi, yi;
    while(cin >> x >> y >> m)
    {
        while(m--)
        {
            cin >> xi >> yi;
            if((xi <= x && yi <= y) || (yi <= x && xi <= y))
                printf("Sim\n");
            else
                printf("Nao\n");
        }
    }

    return 0;
}
