#include <cstdio>
#include <iostream>

#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> A {{-2, 1, -3, 4, -1, 2, 1, -5, 4}};

    // KADANE
    int lef_bound_global, right_bound_global;
    int left_bound_current, right_bound_current;
    int max_current, max_global;

    lef_bound_global = right_bound_global = 0;
    left_bound_current = right_bound_current = 0;
    max_current = max_global = A[0];
    for(int i = 1; i < A.size(); ++i)
    {
        if(A[i] > max_current + A[i])
        {
            max_current = A[i];
            left_bound_current = right_bound_current = i;
        }
        else
        {
            max_current += A[i];
            right_bound_current = i;
        }
        if(max_current > max_global)
        {
            max_global = max_current;
            lef_bound_global = left_bound_current;
            right_bound_global = right_bound_current;
        }
    }
    printf("Max sum: %d [%d, %d]\n", max_global, lef_bound_global, right_bound_global);

    return 0;
}
