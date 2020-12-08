#include <cstdio>
#include <iostream>

#include <cstring>

#include <map>
#include <stack>
#include <queue>
#include <vector>
#include <functional>

using namespace std;

int dfs(int** graph, int n, int source)
{
    map<int, bool> visited;
    stack<int> s;
    int v, vcount;

    vcount = 0;
    s.push(source);
    while(!s.empty())
    {
        v = s.top();
        s.pop();
        if(!visited[v])
        {
            ++vcount;
            visited[v] = true;
            for(int w = 0; w < n; ++w)
                if(graph[v][w] == 1)
                    s.push(w);
        }
    }
    return vcount;
}

int main()
{
    int v, c, head, val;
    priority_queue<int, vector<int>, greater<int>> res;
    cin >> v >> c;
    while(v)
    {
        int** graph = new int*[v];
        for(int i = 0; i < v; ++i)
        {
            graph[i] = new int[v];
            memset(graph[i], 0, v * sizeof(int));
        }
        for(int i = 0; i < c; ++i)
        {
            cin >> head;
            cin >> val;
            while(val != 0)
            {
                graph[head - 1][val - 1] = 1;
                graph[val - 1][head - 1] = 1;
                cin >> val;
            }
        }

        for(int i = 0; i < v; ++i)
        {
            for(int j = 0; j < v; ++j)
            {
                if(j == i) continue;
                for(int k = 0; k < v; ++k)
                    if(graph[k][i])
                        graph[k][i] = 2;
                if(dfs(graph, v, j) < (v - 1))
                {
                    res.push(i + 1);
                    for(int k = 0; k < v; ++k)
                        if(graph[k][i])
                            graph[k][i] = 1;
                    break;
                }
                for(int k = 0; k < v; ++k)
                    if(graph[k][i])
                        graph[k][i] = 1;
            }
        }
        if(res.empty())
        {
            printf("Barrio seguro\n");
        }
        else
        {
            int limit = res.size();
            for(int i = 0; i < limit; ++i)
            {
                if(i == limit - 1)
                    printf("%d\n", res.top());
                else
                    printf("%d ", res.top());
                res.pop();
            }
        }

        for(int i = 0; i < v; ++i)
            delete[] graph[i];
        delete[] graph;
        cin >> v >> c;
    }

    return 0;
}
