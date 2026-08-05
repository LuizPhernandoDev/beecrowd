/*
Faça um programa que leia 5 valores inteiros. Conte quantos destes valores digitados são pares e mostre esta informação.

Entrada
O arquivo de entrada contém 5 valores inteiros quaisquer.

Saída
Imprima a mensagem conforme o exemplo fornecido, indicando a quantidade de valores pares lidos.
*/
#include <stdio.h>
 
int main() {
 
    int Par=0, n, Num;
    
    for(n=1;n<6;n++){
        scanf("%d",&Num);
        if(Num%2==0){
            Par++;
        }
    }
    printf("%d valores pares\n",Par);
 
    return 0;
}