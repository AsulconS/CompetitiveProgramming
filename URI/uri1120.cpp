#include <cstdio>
#include <iostream>

#include <string>

using namespace std;

int main()
{
    int d;
    string n;

    bool valuable;
    cin >> d >> n;
    while(d)
    {
        valuable = false;
        for(int i = 0; i < n.size(); ++i)
            if(n[i] - '0' == d)
                n[i] = '$';
            else if(n[i] - '0')
                valuable = true;
            else if(!valuable)
                n[i] = '$';
        if(!valuable)
            n[n.size() - 1] = '0';

        for(char c : n)
            if(c != '$')
                cout << c;
        cout << endl;
        cin >> d >> n;
    }

    return 0;
}
