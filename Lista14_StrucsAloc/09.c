#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct {
    double real;
    double imaginaria;
} Componentes;

typedef struct {
    Componentes r1;
    Componentes r2;
} Raizes;


Raizes calcular_raizes(double a, double b, double c){
    Raizes r;
    double delta = b*b - 4*a*c;

    if(delta >= 0){
        r.r1.real = (-b + sqrt(delta))/(2*a);
        r.r2.real = (-b - sqrt(delta))/(2*a);

        if(r.r1.real != 0){
            printf("x1 = %.2lf\n", r.r1.real);
        }
        else{
            printf("x1 = %.2lf\n", 0.00);
        }

        if(r.r2.real != 0){
            printf("x2 = %.2lf\n", r.r2.real);
        }
        else{
            printf("x2 = %.2lf\n", 0.00);
        }
    }
    else{
        r.r1.real = (-b)/(2*a);
        r.r2.real = r.r1.real;

        r.r1.imaginaria = sqrt(-delta) / (2*a);
        r.r2.imaginaria = - sqrt(-delta) / (2*a);

        if(r.r1.real != 0){
            if(r.r1.imaginaria == 1 &&  r.r2.imaginaria == -1){
                printf("x1 = %.2lf+i\n", r.r1.real);
                printf("x2 = %.2lf-i\n", r.r2.real);
            }
            else if(r.r1.imaginaria == -1 &&  r.r2.imaginaria == 1){
                printf("x1 = %.2lf-i\n", r.r1.real);
                printf("x2 = %.2lf+i\n", r.r2.real);
            }
            else if(r.r1.imaginaria > 0){
                printf("x1 = %.2lf+%.2lfi\n", r.r1.real, r.r1.imaginaria);
                printf("x2 = %.2lf%.2lfi\n", r.r2.real, r.r2.imaginaria);
            }
            else{
                printf("x1 = %.2lf%.2lfi\n", r.r1.real, r.r1.imaginaria);
                printf("x2 = %.2lf+%.2lfi\n", r.r2.real, r.r2.imaginaria);
            }
        }
        else{
            if(r.r1.imaginaria == 1 &&  r.r2.imaginaria == -1){
                printf("x1 = i\n");
                printf("x2 = -i\n");
            }
            else if(r.r1.imaginaria == -1 &&  r.r2.imaginaria == 1){
                printf("x1 = -i\n");
                printf("x2 = +i\n");
            }
            else if(r.r1.imaginaria > 0){
                printf("x1 = %.2lfi\n", r.r1.imaginaria);
                printf("x2 = %.2lfi\n", r.r2.imaginaria);
            }
            else{
                printf("x1 = %.2lfi\n", r.r1.imaginaria);
                printf("x2 = %.2lfi\n", r.r2.imaginaria);
            }
        }
    }
}


int main(){
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    Raizes raizes_equacao = calcular_raizes(a, b, c);

    return 0;
}