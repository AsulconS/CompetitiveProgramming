#include <cstdio>
#include <iostream>

#include <cmath>

using namespace std;

using ull = unsigned long long;

int main()
{
    ull n, m;
    cin >> n >> m;

    ull factor;
    ull cofactor;
    ull sqrt_limit;
    ull n_sum, m_sum;
    bool n_loves_m, m_loves_n;
    while(n)
    {
        n_sum = m_sum = 1;

        factor = 2;
        sqrt_limit = (ull)sqrt(n);
        while(factor <= sqrt_limit)
        {
            if(!(n % factor))
            {
                n_sum += factor;
                cofactor = n / factor;
                if(factor != cofactor)
                    n_sum += cofactor;
            }
            ++factor;
        }

        factor = 2;
        sqrt_limit = (ull)sqrt(m);
        while(factor <= sqrt_limit)
        {
            if(!(m % factor))
            {
                m_sum += factor;
                cofactor = m / factor;
                if(factor != cofactor)
                    m_sum += cofactor;
            }
            ++factor;
        }

        n_loves_m = !(m % n_sum);
        m_loves_n = !(n % m_sum);
        if(n_loves_m && m_loves_n)
            printf("Friends and lovers <3\n");
        else if(n_sum == m_sum)
            printf("Almost lovers!\n");
        else if(n_loves_m && !m_loves_n)
            printf("%llu friendzoned %llu!\n", m, n);
        else if(!n_loves_m && m_loves_n)
            printf("%llu friendzoned %llu!\n", n, m);
        else
            printf("No connection.\n");

        cin >> n >> m;
    }

    return 0;
}
