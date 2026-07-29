/*
Timelimit: 1
Leia um valor inteiro, que é o tempo de duração em segundos de um determinado evento em uma fábrica, e informe-o expresso no formato horas:minutos:segundos.

Entrada
O arquivo de entrada contém um valor inteiro N.

Saída
Imprima o tempo lido no arquivo de entrada (segundos), convertido para horas:minutos:segundos, conforme exemplo fornecido.
*/
#include <stdio.h>
 
int main() {
 
    int Tempo;
    scanf("%d",&Tempo);
    printf("%d:%d:%d\n",Tempo/3600,Tempo%3600/60,Tempo%3600%60);
 
    return 0;
}