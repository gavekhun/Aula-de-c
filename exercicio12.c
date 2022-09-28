// 12. Sabe-se que pelas regras trabalhistas, percentuais de desconto de INSS (Previdˆencia Social) e
// IR (Imposto de Renda) variam de acordo com a faixa salarial de um funcion´ario. O c´alculo do sal´ario
// l´ıquido a partir do sal´ario bruto ´e dado pela express˜ao:
// sal´ario l´ıquido = sal´ario bruto − descontos
// Dado como parˆametro de entrada o valor do sal´ario bruto, construa as fun¸c˜oes a seguir, tendo o cuidado
// de informar nas descri¸c˜oes qualquer informa¸c˜ao que vocˆe considere importante para o usu´ario da fun¸c˜ao.
// (a) uma fun¸c˜ao que calcule e retorne o valor do desconto de imposto de INSS de acordo com a
// tabela do INSS, ou seja:
// • 6% para sal´ario bruto at´e R$2.000,00 (inclusive);
// 2
// • 8% para sal´ario bruto at´e R$3.000,00 (inclusive);
// • 10% para sal´ario bruto acima de R$3.000,00.
// (b) uma fun¸c˜ao que calcule e retorne o valor do desconto de IR de acordo com a tabela do IR, ou seja:
// • 11% para sal´ario bruto at´e R$2.500,00 (inclusive).
// • 15% para sal´ario bruto at´e R$5.000,00 (inclusive).
// • 22% para sal´ario bruto acima de R$5.000,00.
// (c) uma fun¸c˜ao que calcule e retorne o sal´ario l´ıquido, usando as fun¸c˜oes criadas nos itens a e b.


#include <stdio.h>


float descontoINSS(float SalBru){
    if (SalBru<=2000){
        SalBru *= 0.06;
    }
    else if ( SalBru<= 3000){
        SalBru *= 0.08;
    }
    else{
        SalBru *= 0.10;
    }

    return SalBru;
}

float descontoIR(float SalBru){
    if (SalBru<= 2500){
        SalBru *= 0.11;
    }
    else if(SalBru <= 5000){
        SalBru *= 0.15;
    }
    else{
        SalBru *= 0.22;
    }
    return SalBru;
}


int main(void) {

    float SalLiqui, SalBru, descontos;

    printf("Insira o seu salário bruto:\n>");
    scanf("%f", &SalBru);

    descontos = descontoINSS(SalBru) + descontoIR(SalBru);
    
    SalLiqui = SalBru - descontos;

    printf("O seu salário líquido é: %.2f", SalLiqui);

    return 1;
    
}