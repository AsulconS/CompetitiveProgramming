#include <cstdio>
#include <iostream>
#include <utility>
#include <algorithm>

#include <vector>
#include <cstring>
#include <string>

using namespace std;

int cc[5];

vector<vector<pair<char, char>>> bestCC;

bool comparator(pair<char, char> a, pair<char, char> b)
{
    return a.second > b.second;
}

int main()
{
    int n;
    cin >> n;

    bestCC.resize(5, vector<pair<char, char>>{});
    vector<string> names;

    string name;
    int index {0};
    while(n--)
    {
        cin >> name;
        names.push_back(name);

        for(int i = 0; i < 5; ++i)
        {
            cin >> cc[i];
            if(bestCC[i].size() < 3)
            {
                bestCC[i].push_back({index, cc[i]});
                sort(bestCC[i].begin(), bestCC[i].end(), comparator);
            }
            else
            {
                if(cc[i] < bestCC[i][0].second) continue;
                int newIndex {0};
                for(int j = 0; j < 2; ++j)
                {
                    if(cc[i] > bestCC[i][j + 1].second)
                    {
                        bestCC[i][j] = bestCC[i][j + 1];
                        ++newIndex;
                    }
                }
                bestCC[i][newIndex].first  = index;
                bestCC[i][newIndex].second = cc[i];
            }
        }
        ++index;
    }

    char best {0};
    char bestSum {0};
    for(int i = 0; i < bestCC.size(); ++i)
    {
        char currSum {0};
        for(int j = 0; j < 3; ++j)
            currSum += bestCC[i][j].second;
        if(currSum > bestSum)
        {
            bestSum = currSum;
            best = i;
        }
    }

    for(int i = 0; i < 3; ++i)
    {
        printf("%s\n", names[bestCC[best][i].first].c_str());
    }

    return 0;
}
