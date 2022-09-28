#include<stdio.h>

int gorjeta(int a){
    int g=a*(0.15);
    return g;


}

int main(){

    int a;
    printf("Digite o valor total da conta:");
    scanf("%d",&a);
   
    printf("O valor da gorjeta é: %d", gorjeta(a));

    return 0;
}

