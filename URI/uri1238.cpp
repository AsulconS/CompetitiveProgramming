#include <cstdio>
#include <iostream>

#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int limit;
    string a, b;
    bool ended_string;

    int n;
    cin >> n;
    while(n--)
    {
        cin >> a >> b;
        limit = min(a.size(), b.size());
        ended_string = false;
        for(int i = 0; i < limit; ++i)
            cout << a[i] << b[i];
        if(a.size() < b.size())
            for(int i = limit; i < b.size(); ++i)
                cout << b[i];
        else
            for(int i = limit; i < a.size(); ++i)
                cout << a[i];
        cout << endl;
    }

    return 0;
}
