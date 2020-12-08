#include <cstdio>
#include <iostream>

#include <cctype>

#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void tokenize(const string& rawLine, vector<string>& line)
{
    string word {""};
    bool isWord = false;
    for(int i = 0; i < rawLine.size() + 1; ++i)
    {
        if(isalnum(rawLine[i]))
        {
            isWord = true;
            word += rawLine[i];
        }
        else if(isWord)
        {
            line.push_back(word);
            word = "";
            isWord = false;
        }
    }
}

int main()
{
    string rawLine1;
    string rawLine2;
    vector<string> line1;
    vector<string> line2;

    vector<vector<int>> lcs;
    while(getline(cin, rawLine1))
    {
        getline(cin, rawLine2);
        line1.clear();
        line2.clear();

        if(!rawLine1.size() || !rawLine2.size())
        {
            printf("Blank\n");
            continue;
        }

        tokenize(rawLine1, line1);
        tokenize(rawLine2, line2);

        if(!line1.size() || !line2.size())
        {
            printf("Blank\n");
            continue;
        }

        // Init DP-Table to zeros
        lcs.clear();
        lcs.resize(line2.size() + 1);
        for(int i = 0; i <= line2.size(); ++i)
            lcs[i].resize(line1.size() + 1, 0);

        // Perform LCS comparing strings as characters
        for(int i = 1; i <= line2.size(); ++i)
            for(int j = 1; j <= line1.size(); ++j)
                if(line2[i - 1] == line1[j - 1])
                    lcs[i][j] = 1 + lcs[i - 1][j - 1];
                else
                    lcs[i][j] = max(lcs[i][j - 1], lcs[i - 1][j]);

        printf("%d/%d\n", lcs[line2.size()][line1.size()], max(line1.size(), line2.size()));
    }

    return 0;
}
