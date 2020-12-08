#include <cstdio>
#include <iostream>

#include <cstring>
#include <vector>

using namespace std;

#define INF 10000

bool primes[INF + 1];

void sieve()
{
    memset(primes, true, sizeof(primes));
    primes[0] = primes[1] = false;
    for(int p = 2; p * p <= INF; ++p)
        if(primes[p])
            for(int i = p * p; i <= INF; i += p)
                primes[i] = false;
}

int main()
{
    int m, v, n, sum;
    vector<int> coins;
    sieve();

    while(cin >> m)
    {
        coins.clear();
        for(int i = 0; i < m; ++ i)
        {
            cin >> v;
            coins.push_back(v);
        }
        sum = 0;
        cin >> n;
        for(int i = m - 1; i >= 0; i -= n)
            sum += coins[i];

        if(primes[sum])
            printf("You’re a coastal aircraft, Robbie, a large silver aircraft.\n");
        else
            printf("Bad boy! I’ll hit you.\n");
    }

    return 0;
}
