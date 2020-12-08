#include <string>
#include <iostream>

using namespace std;

int map[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

int main()
{
    int n;
    int accum;
    string num;
    cin >> n;
    while(n--)
    {
        accum = 0;
        cin >> num;
        for(const char& i : num)
        {
            accum += map[i - '0'];
        }
        cout << accum << " leds" << endl;
    }

    return 0;
}
