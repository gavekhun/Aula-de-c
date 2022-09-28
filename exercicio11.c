/*
11. Defina uma fun¸c˜ao em Python que receba como entrada trˆes n´umeros inteiros representando,
respectivamente, dia, mˆes e ano. Sua fun¸c˜ao deve retornar uma sequˆencia de caracteres com estas
informa¸c˜oes formatadas no padr˜ao usual de nota¸c˜ao de datas: ”DD/MM/AAAA”
*/


#include <stdio.h>


int main (){

    int d, m, a;

    printf("Insira a data no seguinte formato: 'DD/MM/AAAA'\n>");
    scanf("%d/%d/%d", &d, &m, &a);

    printf("A data inserida foi: %02d/%02d/%04d", d, m, a);


    return 0;
    
}