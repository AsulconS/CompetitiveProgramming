#include <cstdio>
#include <iostream>

#include <string>

using namespace std;

int getRemainder(const string& number, int divisor)
{
    int idx {0};
    int temp {number[idx] - '0'};
    while(temp < divisor)
        temp = temp * 10 + (number[++idx] - '0');

    while(idx < number.size())
        temp = (temp % divisor) * 10 + (number[++idx] - '0');

    return (temp + '0') / 10;
}

void sumTinyToBig(string& num, int tiny)
{
    int carry {0};
    int idx {(int)num.size() - 1};
    while(tiny > 0 || carry)
    {
        num[idx] += carry + (tiny % 10);
        if(num[idx] > '9')
        {
            num[idx] -= 10;
            carry = 1;
        }
        else
            carry = 0;
        tiny /= 10;
        --idx;
    }
}

int main()
{
    int n, r;
    string s, ss;
    cin >> s >> n;

    ss = s;
    if(ss[0] == '?') ss[0] = '1';
    for(char& c : ss)
        if(c == '?') c = '0';

    r = getRemainder(ss, n);
    if(!r)
        cout << ss << endl;
    else
    {
        sumTinyToBig(ss, n - r);
        bool is_valid {true};
        for(int i = s.size() - 1; i >= 0; --i)
            if(s[i] != '?' && s[i] != ss[i])
            {
                is_valid = false;
                break;
            }
        if(is_valid)
            cout << ss << endl;
        else
            cout << '*' << endl;
    }

    return 0;
}
