#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int count {0};

    float val;
    for(int i = 0; i < 6; ++i)
    {
        cin >> val;
        if(val > 0.0f) ++count;
    }
    printf("%d valores positivos\n", count);

    return 0;
}
