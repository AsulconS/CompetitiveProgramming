#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int n, X;
    cin >> n;

    int num_calls {0};
    while(n--)
    {
        cin >> X;
        if(X == 1)
        {
            printf("fib(1) = 0 calls = 1\n");
            continue;
        }

        int x {0};
        int y {1};
        int nx {1};
        int ny {1};
        int z, nz;
        for(int i = 2; i <= X; ++i)
        {
            z = x + y;
            x = y;
            y = z;
            nz = nx + ny + 1;
            nx = ny;
            ny = nz;
        }
        printf("fib(%d) = %d calls = %d\n", X, nz - 1, z);
    }

    return 0;
}
