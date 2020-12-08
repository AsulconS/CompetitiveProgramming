#include <cstdio>
#include <iostream>

using namespace std;

const char* buffer[12] =
{
    "January", "February", "March", "April", "May", "June",
    "July", "August", "September", "October", "November", "December"
};

int main()
{
    int m;
    cin >> m;
    printf("%s\n", buffer[m - 1]);

    return 0;
}
