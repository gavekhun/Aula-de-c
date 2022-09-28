// 13. Crie uma fun¸c˜ao recursiva que retorne o M´aximo Divisor em Comum (MDC) de dois n´umeros.

/*
Ddendo   Div  Rest  Quoc
    42|   16|   10|   2|

    16|   10|    6|   1|

    10|   6|     4|   1|

    6|   4|     2|   1|

    4|   2|     0|   2|
*/


#include <stdio.h>

int MDC(int ddendo, int div) {
    int resto, quoc;

    quoc = ddendo/div;
    resto = ddendo%div;
    
    if(resto==0) {
        return div;
    }
    else {
        ddendo = div;
        div = resto;
        MDC(ddendo, div);
    }
}


int main(void) {
	int ddendo, div;
	while(1) {
        printf("Insira o dividendo:\n>");
        scanf("%d", &ddendo);

        printf("Insira o divisor:\n>");
        scanf("%d", &div);

        printf("O MDC de %d e %d é: %d\n", ddendo, div, MDC(ddendo, div));
    }

	return 0;
}