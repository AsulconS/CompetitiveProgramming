#include <cstdio>
#include <iostream>

#include <string>

using namespace std;

int main()
{
    bool fit;
    string a, b;

    int n;
    cin >> n;
    while(n--)
    {
        cin >> a >> b;
        if(a.size() < b.size())
        {
            printf("nao encaixa\n");
            continue;
        }
        fit = true;
        for(int i = 0; i < b.size(); ++i)
        {
            if(a[a.size() - i - 1] != b[b.size() - i - 1])
            {
                fit = false;
                break;
            }
        }
        if(fit) printf("encaixa\n");
        else printf("nao encaixa\n");
    }

    return 0;
}
