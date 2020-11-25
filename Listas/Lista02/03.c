#include <stdio.h>
#define PI 3.141592

int main(){
    double R;

    printf("Digite o raio do circulo: ");
    scanf("%lf", &R);

    double area = PI * R*R;

    printf("A area do circulo corresponde a %.2lf unidades de area.\n", area);

    return 0;
}