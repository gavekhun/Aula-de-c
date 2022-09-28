#include <stdio.h>

int gorjeta2 (int a, int b){
    
    int g= a*b/100;
    return g;
}

int main(){

    int a;
    printf("Digite o valor:");
    scanf("%d",&a);
    int b;
    printf("Digite a porcentagem da gorjeta:");
    scanf("%d",&b);

    printf("A gorjeta é:%d", gorjeta2(a,b));

    return 0;
}