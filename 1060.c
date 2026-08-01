/*
Faça um programa que leia 6 valores. Estes valores serão somente negativos ou positivos (desconsidere os valores nulos). A seguir, mostre a quantidade de valores positivos digitados.

Entrada
Seis valores, negativos e/ou positivos.

Saída
Imprima uma mensagem dizendo quantos valores positivos foram lidos.
*/
#include <stdio.h>
 
int main() {
 
    float Num;
    int i, Qtd=0;
    for(i=0;i<6;i++){
        scanf("%f",&Num);
        if(Num>0.0){
            Qtd++;
        }
    }
    printf("%d valores positivos\n",Qtd);
 
    return 0;
}