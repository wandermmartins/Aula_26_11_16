//Criar duas funções, uma para calcular a área e outra para calcular o perímetro
#include <stdio.h>

double calcularArea (double a, double b) {
    //double Area = a * b;
    return a * b;
}

double calcularPerimetro (double a, double b) {
    double Soma = a + b;
    return Soma = Soma * 2;
}

int main (){

    double AreaR1= calcularArea (10.0, 30.0);
    double PerimetroR1= calcularPerimetro (10.0, 30.0);

    printf ("Area do retangulo 1: %.2lf\n", AreaR1);
    printf ("Perimetro do retangulo 1: %.2lf\n", PerimetroR1);

    double AreaR2= calcularArea (20.0, 40.0);
    double PerimetroR2= calcularPerimetro (20.0, 40.0);

    printf ("Area do retangulo 2: %.2lf\n", AreaR2);
    printf ("Perimetro do retangulo 2: %.2lf\n", PerimetroR2);
     
    return 0;
}

