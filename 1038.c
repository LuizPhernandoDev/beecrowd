/*
Timelimit: 1
Com base na tabela abaixo, escreva um programa que leia o código de um item e a quantidade deste item. A seguir, calcule e mostre o valor da conta a pagar.



Entrada
O arquivo de entrada contém dois valores inteiros correspondentes ao código e à quantidade de um item conforme tabela acima.

Saída
O arquivo de saída deve conter a mensagem "Total: R$ " seguido pelo valor a ser pago, com 2 casas após o ponto decimal.
*/
#include <stdio.h>
 
int main() {
 
    int Escolha, QTD;
    float Valor;
    scanf ("%d", &Escolha);
    scanf ("%d", &QTD);
    switch (Escolha){
        case 1:
            Valor=4.0*QTD;
            break;
        case 2:
            Valor=4.5*QTD;
            break;
        case 3:
            Valor=5.0*QTD;
            break;
        case 4:
            Valor=2.0*QTD;
            break;
        case 5:
            Valor=1.5*QTD;
            break;
    }
    printf("Total: R$ %.2f\n",Valor);
    
    return 0;
}