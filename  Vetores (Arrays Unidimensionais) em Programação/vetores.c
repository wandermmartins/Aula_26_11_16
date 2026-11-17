#include <stdio.h>

int main() {
    //criando vetor
    double vetor[5];
    //intesrir valor no indice 0
    vetor[0] = 10.5;

    printf("%.1f", vetor[0]);
    printf("%.1f", vetor[1]);
    
    int numint[5];
    numint[0] = 01;
    numint[1] = 11;


    printf("%.1d", numint[0]);
    printf("%.1d", numint[1]);

    char letra[5];
    letra[0] = '1';
    letra[1] = '2';

    printf("%c", letra[0]);
    printf("%c", letra[1]);

    return 0;

}