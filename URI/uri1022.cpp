#include <cstdio>
#include <iostream>

#include <cmath>
#include <string>

using namespace std;

int gcd(int a, int b)
{
    int temp;
    while(b)
    {
        temp = a;
        a = b;
        b = temp % b;
    }
    return a;
}

int main()
{
    int n, gcdi;
    int n1, d1, n2, d2, rn, rd;
    char op, s;

    cin >> n;
    while(n--)
    {
        cin >> n1 >> s >> d1 >> op >> n2 >> s >> d2;
        switch (op)
        {
            case '+':
                rn = n1 * d2 + n2 * d1;
                rd = d1 * d2;
                break;
            case '-':
                rn = n1 * d2 - n2 * d1;
                rd = d1 * d2;
                break;
            case '*':
                rn = n1 * n2;
                rd = d1 * d2;
                break;
            case '/':
                rn = n1 * d2;
                rd = n2 * d1;
                break;
            default:
                break;
        }
        gcdi = gcd(abs(rn), abs(rd));
        printf("%d/%d = %d/%d\n", rn, rd, rn / gcdi, rd / gcdi);
    }

    return 0;
}
