#include <cstdio>
#include <iostream>

#include <tuple>
#include <queue>
#include <string>
#include <functional>

using namespace std;

int main()
{
    vector<tuple<int, int, int>> expressions;
    priority_queue<string, vector<string>, greater<string>> npass;

    int t, ps;
    int x, y, z, e, ep;
    char r;
    string n, se, sy, sz;
    while(cin >> t)
    {
        expressions.clear();
        for(int i = 0; i < t; ++i)
        {
            cin >> x;
            cin >> se;
            ep = se.find('=');
            sy = se.substr(0, ep);
            sz = se.substr(ep + 1);
            y = stoi(sy);
            z = stoi(sz);
            expressions.push_back(make_tuple(x, y, z));
        }
        for(int i = 0; i < t; ++i)
        {
            cin >> n >> e >> r;
            tuple<int, int, int>& tup {expressions[e - 1]};
                 if(r == '+' && (get<0>(tup) + get<1>(tup) != get<2>(tup)))
                    npass.push(n);
            else if(r == '-' && (get<0>(tup) - get<1>(tup) != get<2>(tup)))
                    npass.push(n);
            else if(r == '*' && (get<0>(tup) * get<1>(tup) != get<2>(tup)))
                    npass.push(n);
            else if(r == 'I' && ((get<0>(tup) + get<1>(tup) == get<2>(tup)) ||
                                 (get<0>(tup) - get<1>(tup) == get<2>(tup)) ||
                                 (get<0>(tup) * get<1>(tup) == get<2>(tup)) ) )
                    npass.push(n);
        }
        if(npass.empty())
        {
            printf("You Shall All Pass!\n");
            continue;
        }
        else if(npass.size() == t)
        {
            printf("None Shall Pass!\n");
            npass = priority_queue<string, vector<string>, greater<string>> {};
            continue;
        }

        ps = npass.size() - 1;
        for(int i = 0; i < ps; ++i)
        {
            printf("%s ", npass.top().c_str());
            npass.pop();
        }
        printf("%s\n", npass.top().c_str());
        npass.pop();
    }

    return 0;
}
