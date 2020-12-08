#include <cstdio>
#include <iostream>

#include <stack>
#include <cstring>

using namespace std;

using ull = unsigned long long;

int main()
{
    int t;
    cin >> t;

    int dig[10];
    int d, v, group;
    ull n, proy, fproy;
    stack<int> st;
    while(t--)
    {
        // Create basis array
        cin >> d;
        memset(dig, 0, sizeof(dig));
        for(int i = 0; i < d; ++i)
        {
            cin >> v;
            dig[v] = 1;
        }
        for(int i = 1, j = 0; i < 10; ++i)
            if(dig[i]) dig[j++] = i;

        cin >> n;
        group = 0;
        fproy = 0;
        while(n > fproy)
        {
            proy = fproy;
            fproy = d * (fproy + 1);
            ++group;
        }

        n -= proy + 1;
        for(int i = 0; i < group; ++i)
        {
            st.push(dig[n % d]);
            n /= d;
        }
        for(int i = 0; i < group; ++i)
        {
            printf("%d", st.top());
            st.pop();
        }
        printf("\n");
    }

    return 0;
}
