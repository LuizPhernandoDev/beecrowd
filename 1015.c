/*
Timelimit: 1
Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano, p1(x1,y1) e p2(x2,y2) e calcule a distância entre eles, mostrando 4 casas decimais, segundo a fórmula:

Distancia =

Entrada
O arquivo de entrada contém duas linhas de dados. A primeira linha contém dois valores de ponto flutuante: x1 y1 e a segunda linha contém dois valores de ponto flutuante x2 y2.

Saída
Calcule e imprima o valor da distância segundo a fórmula fornecida, considerando 4 casas decimais.
*/
#include <stdio.h>
#include <math.h>
 
int main() {
 
    float X1, X2, Y1 ,Y2;
    scanf("%f %f",&X1,&Y1);
    scanf("%f %f",&X2,&Y2);
    
    printf("%.4f\n",sqrt(pow(X2-X1,2)+ pow(Y2-Y1,2)));
 
    return 0;
}