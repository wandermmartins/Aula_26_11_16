//Calcular área e perímetro de dois retângulos de forma individual, utilizando funções simples para cada cálculo.


#include <stdio.h>

float calcular_area(float base, float altura) {
    return base * altura;
}

float calcular_perimetro(float base, float altura) {
    return 2 * (base + altura);
}

int main(void) {
    float base1;
    float altura1;
    float base2;
    float altura2;

    float area1;
    float area2;
    float perimetro1;
    float perimetro2;

    // Retângulo 1
    //Pergunta a base e a altura do retângulo 1
    printf("Digite a base do retângulo 1: ");
    scanf("%f", &base1);
    printf("Digite a altura do retângulo 1: ");
    scanf("%f", &altura1);

    area1 = calcular_area(base1, altura1);
    perimetro1 = calcular_perimetro(base1, altura1);

    printf("Área do retângulo 1: %.2f\n", area1);
    printf("Perímetro do retângulo 1: %.2f\n", perimetro1);

    // Retângulo 2
    // Pergunta a base e a altura do retângulo 2
    printf("Digite a base do retângulo 2: ");
    scanf("%f", &base2);
    printf("Digite a altura do retângulo 2: ");
    scanf("%f", &altura2);

    area2 = calcular_area(base2, altura2);
    perimetro2 = calcular_perimetro(base2, altura2);

    printf("Área do retângulo 2: %.2f\n", area2);
    printf("Perímetro do retângulo 2: %.2f\n", perimetro2);

    return 0;
}

