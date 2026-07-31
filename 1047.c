/*
Leia a hora inicial, minuto inicial, hora final e minuto final de um jogo. A seguir calcule a duração do jogo.

Obs: O jogo tem duração mínima de um (1) minuto e duração máxima de 24 horas.

Entrada
Quatro números inteiros representando a hora de início e fim do jogo.

Saída
Mostre a seguinte mensagem: “O JOGO DUROU XXX HORA(S) E YYY MINUTO(S)” .
*/
#include <stdio.h>
 
int main() {
 
    int HoraInicio, HoraFim, MinInicio, MinFim,Hora,Min;
    scanf("%d %d %d %d",&HoraInicio, &MinInicio, &HoraFim, &MinFim);
    Hora=HoraFim-HoraInicio;
    Min=MinFim-MinInicio;
    if(Min<0){
        Min=60+Min;
        Hora--;
    }
    if(Hora<0||Hora==0&&Min==0){
        Hora=24+Hora;
    }
    
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",Hora,Min);
 
    return 0;
}