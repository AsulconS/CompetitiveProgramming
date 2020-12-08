#include <cstdio>
#include <iostream>

#include <string>
#include <cstring>

using namespace std;

int main()
{
    char alpha[26];
    string line;
    char max_count;

    int n;
    cin >> n;
    getline(cin, line);
    while(n--)
    {
        getline(cin, line);
        memset(alpha, 0, sizeof(alpha));
        for(const char& c : line)
        {
            if(c >= 'A' && c <= 'Z')
                ++alpha[c - 'A'];
            else if(c >= 'a' && c <= 'z')
                ++alpha[c - 'a'];
        }
        max_count = 0;
        for(int i = 0; i < 26; ++i)
        {
            if(alpha[i] > max_count)
                max_count = alpha[i];
        }
        for(int i = 0; i < 26; ++i)
        {
            if(alpha[i] == max_count)
                printf("%c", i + 'a');
        }
        printf("\n");
    }

    return 0;
}
