#include <cstdio>
#include <iostream>

#include <tuple>
#include <vector>

using namespace std;

using ll = long long;

ll gcdExtended(ll a, ll b, ll& old_x, ll& old_y)
{
    ll x, y;
    ll q, r, old_r;
    x = 0; old_x = 1;
    y = 1; old_y = 0;
    r = b; old_r = a;
    while(r)
    {
        q = old_r / r;
        tie(old_r, r) = make_tuple(r, old_r - r * q);
        tie(old_x, x) = make_tuple(x, old_x - x * q);
        tie(old_y, y) = make_tuple(y, old_y - y * q);
    }
    return old_r;
}

int main()
{
    int n;
    cin >> n;
    vector<ll> msg;
    msg.reserve(n);

    ll val;
    for(int i = 0; i < n; ++i)
    {
        cin >> val;
        msg.push_back(val);
    }

    ll t, a, b;
    cin >> t >> a >> b;

    ll ai, ti, gcd;
    gcd = gcdExtended(a, t, ai, ti);
    if(gcd != 1)
    {
        printf("DECIFRAGEM AMBIGUA\n");
        return 0;
    }
    else
        ai = (ai % t + t) % t;

    for(int i = 0; i < n - 1; ++i)
        printf ("%d ", ((ai * (msg[i] - b)) % t + t) % t);
    printf("%d\n", ((ai * (msg[n - 1] - b)) % t + t) % t);

    return 0;
}
