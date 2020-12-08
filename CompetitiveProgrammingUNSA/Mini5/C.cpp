#include <cstdio>
#include <iostream>

#include <stack>
#include <vector>

#include <utility>

#define INF 100000

using namespace std;

int main()
{
    int l, c;
    int a, b, m;

    int totalCost {0};

    // GRAPH INITIALIZATION
    // ---------------------------------
    vector<vector<int>> graph;

    cin >> l >> c;
    graph.resize(l, 0);
    for(int i = 0; i < l; ++i)
    {
        graph[i].resize(l, 0);
    }

    for(int i = 0; i < c; ++i)
    {
        cin >> a >> b >> m;
        graph[a - 1][b - 1] = m;
        graph[b - 1][a - 1] = m;
    }
    // ---------------------------------

    stack<int> st;
    stack<int> promising;
    int currentNode = 0;
    st.push(currentNode);
    while(!st.empty())
    {
        int next {INF};
        int lessWeight;
        for(int j = 0; j < c; ++j)
        {
            if(graph[currentNode][j])
            {
                if(graph[currentNode][j] < less)
                {
                    oless = less;
                    less = j;
                    lessWeight = graph[currentNode][j];
                }
            }
        }
        st.push(less);
        currentNode = less;
        totalCost += lessWeight;
    }

    return 0;
}
