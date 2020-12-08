#include <cstdio>
#include <iostream>

#include <cmath>
#include <vector>
#include <utility>

using namespace std;

struct Vec
{
    double x;
    double y;
};

void rotate(Vec& v, const Vec& center, double angle)
{
    v.x = cos(angle) * (v.x - center.x) - sin(angle) * (v.y - center.y);
    v.y = sin(angle) * (v.x - center.x) + cos(angle) * (v.y - center.y);
}

int main()
{
    int N, T, limit;
    double n, t;
    double theta_i, na;
    const double pi2 = 2.0 * acos(-1);

    vector<double> times;
    vector<Vec> positions;
    while(cin >> N >> T)
    {
        times.clear();
        times.reserve(N);
        positions.clear();
        positions.reserve(N);
        na = 0.0;
        for(int i = 0; i < N; ++i)
        {
            cin >> n >> t;
            na += n;
            times.push_back(t);
            positions.push_back(Vec{na, 0.0});
        }
        for(int i = 0; i < N; --i)
        {
            theta_i = pi2 / times[i];
            for(int j = i; j < N; ++j)
                if(j)
                    rotate(positions[j], positions[j - 1], theta_i * (double)T);
                else
                    rotate(positions[j], Vec{0, 0}, theta_i * (double)T);
            if(i)
                printf("%.4lf " , sqrt((positions[i].x * positions[i].x) + (positions[i].y * positions[i].y)));
            else
                printf("%.4lf\n", sqrt((positions[i].x * positions[i].x) + (positions[i].y * positions[i].y)));
        }
    }

    return 0;
}
