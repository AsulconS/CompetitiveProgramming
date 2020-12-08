#include <cstdio>
#include <iostream>

#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;

    int d, n;
    int M;
    vector<int> times;

    for(int c = 0; c < t; ++c)
    {
        cin >> d >> n;
        times.clear();
        for(int i = 0; i < d; ++i)
        {
            cin >> M;
            times.push_back(M);
        }
        int minTime;
        int minIndex;
        for(int i = 0; i < n;)
        {
            minTime = *min_element(times.begin(), times.end());
            for(int j = 0; j < d; ++j)
            {
                if(times[j] > minTime)
                    times[i] -= minTime;
                else if(times[j] == minTime)
                {
                    if(i < n)
                    {
                        minIndex = j + 1;
                        ++i;
                    }
                }
            }
        }
        printf("Case #%d: %d\n", c + 1, minIndex);
    }

    return 0;
}
