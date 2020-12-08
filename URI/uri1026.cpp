#include <cstdio>
#include <iostream>

#include <cstdint>

using namespace std;

int main()
{
    uint32_t a, b;
    while(cin >> a >> b)
    {
        printf("%u\n", a ^ b);
    }

    return 0;
}
