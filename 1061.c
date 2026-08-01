/*
Pedrinho está organizando um evento em sua Universidade. O evento deverá ser no mês de Abril, iniciando e terminando dentro do mês. O problema é que Pedrinho quer calcular o tempo que o evento vai durar, uma vez que ele sabe quando inicia e quando termina o evento.

Sabendo que o evento pode durar de poucos segundos a vários dias, você deverá ajudar Pedrinho a calcular a duração deste evento.

Entrada
Como entrada, na primeira linha vai haver a descrição “Dia”, seguido de um espaço e o dia do mês no qual o evento vai começar. Na linha seguinte, será informado o momento no qual o evento vai iniciar, no formato hh : mm : ss. Na terceira e quarta linha de entrada haverá outra informação no mesmo formato das duas primeiras linhas, indicando o término do evento.

Saída
Na saída, deve ser apresentada a duração do evento, no seguinte formato:

W dia(s)
X hora(s)
Y minuto(s)
Z segundo(s)

Obs: Considere que o evento do caso de teste para o problema tem duração mínima de 1 minuto.
*/
#include <stdio.h>

int main() {
    int dia_inicio, hora_inicio, min_inicio, seg_inicio;
    int dia_fim, hora_fim, min_fim, seg_fim;

    scanf("Dia %d", &dia_inicio);
    scanf("%d : %d : %d", &hora_inicio, &min_inicio, &seg_inicio);
    scanf(" Dia %d", &dia_fim);
    scanf("%d : %d : %d", &hora_fim, &min_fim, &seg_fim);
    
    long long inicio_em_segundos = (long long)dia_inicio * 86400 + hora_inicio * 3600 + min_inicio * 60 + seg_inicio;
    long long fim_em_segundos = (long long)dia_fim * 86400 + hora_fim * 3600 + min_fim * 60 + seg_fim;
    long long diferenca = fim_em_segundos - inicio_em_segundos;
    int dias = diferenca / 86400;
    diferenca %= 86400; 
    int horas = diferenca / 3600;
    diferenca %= 3600;
    int minutos = diferenca / 60;
    int segundos = diferenca % 60;

    printf("%d dia(s)\n", dias);
    printf("%d hora(s)\n", horas);
    printf("%d minuto(s)\n", minutos);
    printf("%d segundo(s)\n", segundos);

    return 0;
}