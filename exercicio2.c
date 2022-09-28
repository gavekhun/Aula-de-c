#include <stdio.h>


int ponderada(int x1, int p1, int x2, int p2){
    int m= (x1*p1+x2*p2)/(p1+p2);
    return m;
}

int main(){
    int x1;
    printf("Digite o primeiro valor:\n");
    scanf("%d", &x1);
    int p1;
    printf("Digite o seu peso:\n");
    scanf("%d", &p1);
    int x2;
    printf("Digite o segundo valor:\n");
    scanf("%d", &x2);
    int p2;
    printf("Digite o seu peso:\n");
    scanf("%d", &p2);

    printf("A média ponderada é:\n%d", ponderada(x1,p1,x2,p2));


    return 0;

}