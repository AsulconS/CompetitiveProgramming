#include <cstdio>
#include <iostream>

using namespace std;

void computeLPS(const string& pat, int* lps)
{
    int len {0};
    int i {1};
    lps[0] = 0;
    while(i < pat.size())
        if(pat[i] == pat[len])
            lps[i++] = ++len;
        else
            if(len > 0)
                len = lps[len - 1];
            else
                lps[i++] = 0;
}

int kmp(const string& txt, const string& pat)
{
    int* lps = new int[pat.size()];
    computeLPS(pat, lps);
    int i {0};
    int j {0};
    while(i < txt.size())
    {
        if(txt[i] == pat[j])
        {
            ++i;
            ++j;
        }
        else
            if(j > 0)
                j = lps[j - 1];
            else
                ++i;
        if(j == pat.size())
            break;
    }

    delete[] lps;
    return i - j;
}

int main()
{
    string txt {"onionionspl"};
    string pat {"onions"};
    printf("First ocurrence of\n\t%s\nin\n\t%s\nis at index %d\n", pat.c_str(), txt.c_str(), kmp(txt, pat));

    return 0;
}
