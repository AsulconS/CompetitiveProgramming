#include <cstdio>
#include <iostream>

#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void unlock(string& pass, int i, int j, int& steps)
{
    if(i == j)
    {
        steps += min(pass[i] - 'a', 26 - (pass[j] - 'a'));
        int offset = min(pass[i] - 'a', 26 - (pass[j] - 'a'));
        if(offset == pass[i] - 'a')
            offset = -offset;
        pass[i] += offset;
        if(pass[i] < 'a') pass[j] += 26;
        if(pass[i] > 'z') pass[j] -= 26;
        cout << pass << ' ';
        return;
    }
    if(i < j)
    {
        int best_move = 26;
        for(int ii = i; ii <= j; ++ii)
            if(min(pass[ii] - 'a', 26 - (pass[ii] - 'a')) < abs(best_move))
            {
                best_move = min(pass[ii] - 'a', 26 - (pass[ii] - 'a'));
                if(best_move == pass[ii] - 'a')
                    best_move = -best_move;
            }
        steps += abs(best_move);
        for(int ii = i; ii <= j; ++ii)
        {
            pass[ii] += best_move;
            if(pass[ii] < 'a') pass[ii] += 26;
            if(pass[ii] > 'z') pass[ii] -= 26;
        }
        cout << pass << ' ';

        int k = i;
        bool find_a {false};
        for(int ii = k; ii <= j; ++ii)
        {
            if(pass[ii] == 'a')
            {
                find_a = true;
                unlock(pass, k, ii - 1, steps);
                k = ii + 1;
            }
        }
        if(find_a)
            unlock(pass, k, j, steps);
        else
            unlock(pass, i, j, steps);
    }
}

void unlockS(string& pass, int i, int j, int& steps)
{
    int k = i;
    bool find_a {false};
    for(int ii = k; ii <= j; ++ii)
    {
        if(pass[ii] == 'a')
        {
            find_a = true;
            unlock(pass, k, ii - 1, steps);
            k = ii + 1;
        }
    }
    if(find_a)
        unlock(pass, k, j, steps);
    else
        unlock(pass, i, j, steps);
}

int main()
{
    string pass;
    int steps;
    cin >> pass;
    while(pass != "*")
    {
        steps = 0;
        cout << pass << ' ';
        unlock(pass, 0, pass.size() - 1, steps);
        cout << steps << endl;
        cin >> pass;
    }

    return 0;
}
