#include<stdio.h>

void mensagem(int n, char texto[101]){
    for(int i=0; i<n; i++){
        printf("%s", texto);
    }
}

int main(){
    int n;
    char texto[101];

    printf("Digite o texto:");
    fgets(texto, 101, stdin);

    printf("Digite o número de repetições:");
    scanf("%d", &n);

    mensagem(n, texto);

    return 0;  

}