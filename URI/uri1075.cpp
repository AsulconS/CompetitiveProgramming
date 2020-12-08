#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 2; i < 10000; i += n)
        printf("%d\n", i);

    return 0;
}
