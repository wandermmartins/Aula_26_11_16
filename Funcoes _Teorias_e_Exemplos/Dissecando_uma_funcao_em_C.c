#include <stdio.h>

void funcaoF(void) {
    int x = 10; // 'x' só existe aqui dentro
    printf("Dentro da funcaoF, x = %d\n", x);
}

void funcaoG(void) {
    int x = 99; // Este é outro 'x', totalmente diferente do anterior
    printf("Dentro da funcaoG, x = %d\n", x);
    // printf("%d", x); // O 'x' de funcaoF não existe aqui — são variáveis independentes
}

int main(void) {
    funcaoF();
    funcaoG();
    return 0;
}

//Temos três variáveis com o mesmo nome 'x', mas cada uma delas existe em um escopo diferente. 
//A variável 'x' dentro de funcaoF é independente da variável 'x' dentro de funcaoG.
//Ambas são independentes de qualquer outra variável 'x' que possa existir em outros escopos.