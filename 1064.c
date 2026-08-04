/*
Leia 6 valores. Em seguida, mostre quantos destes valores digitados foram positivos. Na próxima linha, deve-se mostrar a média de todos os valores positivos digitados, com um dígito após o ponto decimal.

Entrada
A entrada contém 6 números que podem ser valores inteiros ou de ponto flutuante. Pelo menos um destes números será positivo.

Saída
O primeiro valor de saída é a quantidade de valores positivos. A próxima linha deve mostrar a média dos valores positivos digitados.
*/
#include <stdio.h>
 
int main() {
 
    int  Pos=0, n;
    float Num, Media=0;
    
    for(n=1;n<7;n++){
        scanf("%f",&Num);
        if(Num>0){
            Pos++;
            Media+=Num;
        }
    }
    Media/=Pos;
    printf("%d valores positivos\n",Pos);
    printf("%.1f\n",Media);
    
    return 0;
}