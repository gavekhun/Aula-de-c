#include<stdio.h>

int barco(int C,int b,int l){

    int dist = (l*1.0/b)*C;
    return dist;

}

int main(){
    int C;
    printf("Digite a velocidade da correnteza:");
    scanf("%d", &C);
    int l;
    printf("Digite a largura do rio:");
    scanf("%d", &l);
    int b;
    printf("Digite a velocidade do barco:");
    scanf("%d", &b);

    printf("A distância é de %d", barco(C,b,l));
    return 0;
}