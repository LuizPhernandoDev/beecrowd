/*
Leia 5 valores Inteiros. A seguir mostre quantos valores digitados foram pares, quantos valores digitados foram ímpares, quantos valores digitados foram positivos e quantos valores digitados foram negativos.

Entrada
O arquivo de entrada contém 5 valores inteiros quaisquer.

Saída
Imprima a mensagem conforme o exemplo fornecido, uma mensagem por linha, não esquecendo o final de linha após cada uma.
*/
#include <stdio.h>
 
int main() {
 
    int Num, n, Par=0, Impar=0, Pos=0, Neg=0;
    
    for(n=1;n<6;n++){
        scanf("%d",&Num);
        if(Num%2==0){
            Par++;
        }else{
            Impar++;
        }
        if(Num>0){
            Pos++;
        }else if(Num<0){
            Neg++;
        }
    }
    
    printf("%d valor(es) par(es)\n",Par);
    printf("%d valor(es) impar(es)\n",Impar);
    printf("%d valor(es) positivo(s)\n",Pos);
    printf("%d valor(es) negativo(s)\n",Neg);
 
    return 0;
}