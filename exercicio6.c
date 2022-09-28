#include <stdio.h>

int juros(int Si, int m, int j){
    int Sl= Si*(1+((m*j)/100));
    return Sl;

}

int main(){
    int Si;
    printf("Digite o saldo inicial:");
    scanf("%d",&Si);
    int m;
    printf("Digite o número de meses:");
    scanf("%d", &m);
    int j;
    printf("Digite o juros:");
    scanf("%d", &j);

    printf("O saldo final é: %d", juros(Si,m,j));
    return 0;
}