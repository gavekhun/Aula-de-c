#include <stdio.h>
#include <math.h>

int relaçãof(int alfa){
    int x =pow(sin(alfa),2)+ pow(cos(alfa),2);
    return x;
}
 int main (){
    int a;
    printf("Qual o valor do ângulo:\n");
    scanf("%d",&a);

    printf("O resposta é: %d\n", relaçãof(a));

    return 0;
 }