#include <cstdio>
#include <iostream>

#include <map>

using namespace std;

int main()
{
    map<int, int> ap;

    int n, x;
    cin >> n;
    while(n--)
    {
        cin >> x;
        ++ap[x];
    }
    for(const auto& it : ap)
        printf("%d aparece %d vez(es)\n", it.first, it.second);

    return 0;
}
