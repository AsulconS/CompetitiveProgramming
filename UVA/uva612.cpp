#include <cstdio>
#include <iostream>

#include <queue>
#include <vector>
#include <string>
#include <utility>

using namespace std;

struct cmp
{
    bool operator() (const pair<string, pair<int, int>>& l, const pair<string, pair<int, int>>& r)
    {
        if(l.second.first == r.second.first)
            return l.second.second > r.second.second;
        return l.second.first > r.second.first;
    }
};

int main()
{
    int M, n, m, measure;
    string line;
    priority_queue<pair<string, pair<int, int>>, vector<pair<string, pair<int, int>>>, cmp> dataset;

    cin >> M;
    for(int c = 0; c < M; ++c)
    {
        cin >> n >> m;
        for(int i = 0; i < m; ++i)
        {
            cin >> line;

            measure = 0;
            for(int j = 0; j < line.size(); ++j)
                for(int k = j + 1; k < line.size(); ++k)
                    if(line[j] > line[k]) ++measure;
            dataset.push(make_pair(line, make_pair(measure, i)));
        }
        for(int i = 0; i < m; ++i)
        {
            cout << dataset.top().first << endl;
            dataset.pop();
        }
        if(c < M - 1)
            cout << endl;
    }

    return 0;
}
