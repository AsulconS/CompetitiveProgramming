#include <cstdio>
#include <iostream>

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string a {"AGGTAB"};
    string b {"GXTXAYB"};

    vector<vector<int>> lcs;
    lcs.resize(b.size() + 1);
    for(int i = 0; i <= b.size(); ++i)
        lcs[i].resize(a.size() + 1, 0);

    for(int i = 1; i <= b.size(); ++i)
    {
        for(int j = 1; j <= a.size(); ++j)
        {
            if(b[i - 1] == a[j - 1])
                lcs[i][j] = 1 + lcs[i - 1][j - 1];
            else
                lcs[i][j] = max(lcs[i][j - 1], lcs[i - 1][j]);
        }
    }

    for(int i = 0; i <= b.size(); ++i)
    {
        for(int j = 0; j <= a.size(); ++j)
            printf("%d ", lcs[i][j]);
        printf("\n");
    }
    printf("LCS length: %d\n", lcs[b.size()][a.size()]);
    return 0;
}
