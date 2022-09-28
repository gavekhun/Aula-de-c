#include <stdio.h>
#include <math.h>

int perimetro(int c1, int c2){
    int h = sqrt(pow(c1,2)+pow(c2,2));
    return h + c1 +c2;
}
 int main (){
    int c1;
    printf("Qual o valor de um cateto?\n");
    scanf("%d",&c1);
    int c2;
    printf("Qual o valor do outro cateto?\n");
    scanf("%d",&c2);

    printf("O valor do perímetro é: %d\n", perimetro(c1,c2));

    return 0;
 }