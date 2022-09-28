#include <stdio.h>
#include <math.h>

int erro(int q, int n){
    int sinf=1/(1-q);
    int sterm=((pow(q,n))-1)/(q-1);
    return sinf - sterm;
}

int main(){
    int q;
    printf("Digite o valor da razão:\n");
    scanf("%d", &q);
    int n;
    printf("Digite a quantidade de termos:\n");
    scanf("%d", &n);


    printf("o valor do erro é:%d\n",erro(q,n));


    return 0;

}