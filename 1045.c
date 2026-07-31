/*
Leia 3 valores de ponto flutuante A, B e C e ordene-os em ordem decrescente, de modo que o lado A representa o maior dos 3 lados. A seguir, determine o tipo de triângulo que estes três lados formam, com base nos seguintes casos, sempre escrevendo uma mensagem adequada:

se A ≥ B+C, apresente a mensagem: NAO FORMA TRIANGULO
se A2 = B2 + C2, apresente a mensagem: TRIANGULO RETANGULO
se A2 > B2 + C2, apresente a mensagem: TRIANGULO OBTUSANGULO
se A2 < B2 + C2, apresente a mensagem: TRIANGULO ACUTANGULO
se os três lados forem iguais, apresente a mensagem: TRIANGULO EQUILATERO
se apenas dois dos lados forem iguais, apresente a mensagem: TRIANGULO ISOSCELES
Entrada
A entrada contem três valores de ponto flutuante de dupla precisão A (0 < A) , B (0 < B) e C (0 < C).

Saída
Imprima todas as classificações do triângulo especificado na entrada.
*/
#include <stdio.h>
 
int main() {
 
    float A, B, C;
    scanf("%f %f %f",&A,&B,&C);
    if(A+B>C&&A+C>B&&B+C>A){
        if(A*A==B*B+C*C||B*B==A*A+C*C||C*C==A*A+B*B){
            printf("TRIANGULO RETANGULO\n");
        }else if(A*A>B*B+C*C||B*B>A*A+C*C||C*C>A*A+B*B){
            printf("TRIANGULO OBTUSANGULO\n");
        }else if(A*A<B*B+C*C||B*B<A*A+C*C||C*C<A*A+B*B){
            printf("TRIANGULO ACUTANGULO\n");
        }
        if(A==B&&B==C){
            printf("TRIANGULO EQUILATERO\n");
        }else if(A==B||A==C||B==C){
            printf("TRIANGULO ISOSCELES\n");
        }
    }else{
        printf("NAO FORMA TRIANGULO\n");
    }
 
    return 0;
}