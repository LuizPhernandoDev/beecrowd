/*
Leia 3 valores reais (A, B e C) e verifique se eles formam ou não um triângulo. Em caso positivo, calcule o perímetro do triângulo e apresente a mensagem:


Perimetro = XX.X


Em caso negativo, calcule a área do trapézio que tem A e B como base e C como altura, mostrando a mensagem


Area = XX.X

Entrada
A entrada contém três valores reais.

Saída
O resultado deve ser apresentado com uma casa decimal.
*/
#include <stdio.h>
 
int main() {
 
    float A, B, C;
    scanf("%f %f %f",&A,&B,&C);
    if(A+B>C&&A+C>B&&B+C>A){
        printf("Perimetro = %.1f\n",A+B+C);
    }else{
        printf("Area = %.1f\n",(A+B)*C/2);
    }
 
    return 0;
}