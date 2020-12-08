#include <cstdio>
#include <iostream>

#include <string>

using namespace std;

int main()
{
    int a;
    float b;
    char c;
    string d;

    cin >> a >> b >> c;
    getchar();
    getline(cin, d);

    printf("%d%.6f%c%s\n", a, b, c, d.c_str());
    printf("%d\t%.6f\t%c\t%s\n", a, b, c, d.c_str());
    printf("%10d%10.6f%10c%10s\n", a, b, c, d.c_str());

    return 0;
}
