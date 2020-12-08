#include <cmath>
#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int hi, mi, hf, mf;
    cin >> hi >> mi >> hf >> mf;

    int mti = hi * 60 + mi;
    int mtf = hf * 60 + mf;
    int dur = abs(mtf - mti);

    if(mti >= mtf)
    {
        dur = 24 * 60 - dur;
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", dur / 60, dur % 60);

    return 0;
}
