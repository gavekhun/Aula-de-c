// 9. Escreva uma fun¸c˜ao que calcule a ´area de um setor circular, dados o raio e o ˆangulo. Use um
// argumento default para o ˆangulo, de modo que se nenhum ˆangulo for informado, a fun¸c˜ao retorne a
// ´area do c´ırculo inteiro.

#include <stdio.h>

int main(void) {

    float raio, angulo=0, Ac, As;
    float pi = 3.141516;

    printf("Insira o raio da circunferência:\n>");
    scanf("%f", &raio);

    Ac = pi*(raio*raio);
    printf("%f\n", Ac);

    printf("Insira o angulo do setor:\n>");
    if((scanf("%f", &angulo))==0 || angulo==360) {
        printf("A área da circunferência é: %f", Ac);
    }
    else {
        As = (Ac*angulo)/360;
        printf("A área do setor é: %f", As);
    }


    return 0;
}