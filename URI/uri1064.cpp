#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int count {0};
    float accum {0.0f};

    float val;
    for(int i = 0; i < 6; ++i)
    {
        cin >> val;
        if(val > 0.0f)
        {
            ++count;
            accum += val;
        }
    }
    printf("%d valores positivos\n%.1f\n", count, accum / count);

    return 0;
}
