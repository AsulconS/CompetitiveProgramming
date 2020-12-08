#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int c, g, days;
    cin >> c >> g;

    days = c / g;
    bool is_still_september {true};
    if(days > 9)
    {
        is_still_september = false;
        days -= 9;
    }
    if(is_still_september)
        printf("A UFSC fecha dia %d de setembro.\n", days + 21);
    else
        printf("A UFSC fecha dia %d de outubro.\n", days);

    return 0;
}
