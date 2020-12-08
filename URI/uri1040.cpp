#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    bool exame {false};
    float n1, n2, n3, n4, ne;
    cin >> n1 >> n2 >> n3 >> n4;

    float media {(2.0f * n1 + 3.0f * n2 + 4.0f * n3 + n4) / 10.0f};
    printf("Media: %.1f\n", media);
    if(media >= 5.0f && media <= 6.9f)
    {
        cin >> ne;
        exame = true;
        media = (media + ne) / 2.0f;
        printf("Aluno em exame.\nNota do exame: %.1f\n", ne);
    }
    if(media >= 5.0f)
        printf("Aluno aprovado.\n");
    else
        printf("Aluno reprovado.\n");

    if(exame)
        printf("Media final: %.1f\n", media);

    return 0;
}
