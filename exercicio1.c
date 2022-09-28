#include<stdio.h>
#include<math.h>

int a, b, c, x; //Variaveis globais 
//Função calcula a ordenada com os parametros globais atribuidos
int ordenada (int a, int b, int c, int x){  
    int y= a*pow(x,2)+b*x+c;
    return y;
}

int main(){
    
    printf("Digite as variaveis: \n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &x);
    printf("%d\n", ordenada(a,b,c,x));

   
    return 0;
} 