/*
Neste problema, você deverá ler 3 palavras que definem o tipo de animal possível segundo o esquema abaixo, da esquerda para a direita.  Em seguida conclua qual dos animais seguintes foi escolhido, através das três palavras fornecidas.



Entrada
A entrada contém 3 palavras, uma em cada linha, necessárias para identificar o animal segundo a figura acima, com todas as letras minúsculas.

Saída
Imprima o nome do animal correspondente à entrada fornecida.
*/
#include <stdio.h>
 
int main() {
 
    char Tipo1[20], Tipo2[20],Tipo3[20];
	scanf("%19s[^\n]",&Tipo1);
	scanf("%19s[^\n]",&Tipo2);
	scanf("%19s[^\n]",&Tipo3);
    if(strcmp(Tipo1,"vertebrado")==0){
        if(strcmp(Tipo2,"ave")==0){
            if(strcmp(Tipo3,"carnivoro")==0){
                printf("aguia\n");
            }else{
                printf("pomba\n");
            }
        }else{
            if(strcmp(Tipo3,"onivoro")==0){
                printf("homem\n");
            }else{
                printf("vaca\n");
            }
        }
    }else{
        if(strcmp(Tipo2,"inseto")==0){
            if(strcmp(Tipo3,"hematofago")==0){
                printf("pulga\n");
            }else{
                printf("lagarta\n");
            }
        }else{
            if(strcmp(Tipo3,"hematofago")==0){
                printf("sanguessuga\n");
            }else{
                printf("minhoca\n");
            }
        }
    }
 
    return 0;
}