#include <cstdio>
#include <iostream>

#include <map>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    map<char, bool> text;
    vector<char> textv;

    int i, limit;
    char i1, i2, i3, i4, i5;

    string l1, l2, l3, l4, l5;
    string ph;
    while(getline(cin, l1))
    {
        text.clear();
        textv.clear();
        getline(cin, l2);
        getline(cin, l3);
        getline(cin, l4);
        getline(cin, l5);
        getline(cin, ph);

        i = 0;
        i1 = l1[i];
        i2 = l2[i];
        i3 = l3[i];
        i4 = l4[i];
        i5 = l5[i];
        limit = min({l1.size(), l2.size(), l3.size(), l4.size(), l5.size()});
        while(i < limit)
        {
            if(i1 == ' ' && i2 == ' ' && i3 == ' ' && i4 == ' ' && i5 == ' ')
                text[textv[textv.size() - 1]] = false;

            if(i1 != ' ' && !text[i1])
            {
                text[i1] = true;
                textv.push_back(i1);
            }
            if(i2 != ' ' && !text[i2])
            {
                text[i2] = true;
                textv.push_back(i2);
            }
            if(i3 != ' ' && !text[i3])
            {
                text[i3] = true;
                textv.push_back(i3);
            }
            if(i4 != ' ' && !text[i4])
            {
                text[i4] = true;
                textv.push_back(i4);
            }
            if(i5 != ' ' && !text[i5])
            {
                text[i5] = true;
                textv.push_back(i5);
            }
            ++i;
            i1 = l1[i];
            i2 = l2[i];
            i3 = l3[i];
            i4 = l4[i];
            i5 = l5[i];
        }

        for(char c : textv)
            cout << c;
        cout << endl;
    }

    return 0;
}
