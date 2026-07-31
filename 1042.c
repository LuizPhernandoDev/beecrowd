/*
Leia 3 valores inteiros e ordene-os em ordem crescente. No final, mostre os valores em ordem crescente, uma linha em branco e em seguida, os valores na sequência como foram lidos.

Entrada
A entrada contem três números inteiros.

Saída
Imprima a saída conforme foi especificado.
*/
#include <stdio.h>
 
int main() {
 
    int X,Y,Z;
    scanf("%d %d %d",&X,&Y,&Z);
    if(X<Y&&Y<Z){
        printf("%d\n%d\n%d\n",X,Y,Z);
    }else if(X<Z&&Z<Y){
        printf("%d\n%d\n%d\n",X,Z,Y);
    }else if(Y<X&&X<Z){
        printf("%d\n%d\n%d\n",Y,X,Z);
    }else if(Y<Z&&Z<X){
        printf("%d\n%d\n%d\n",Y,Z,X);
    }else if(Z<X&&X<Y){
        printf("%d\n%d\n%d\n",Z,X,Y);
    }else if(Z<Y&&Y<X){
        printf("%d\n%d\n%d\n",Z,Y,X);
    }
    printf("\n%d\n%d\n%d\n",X,Y,Z);
 
    return 0;
}