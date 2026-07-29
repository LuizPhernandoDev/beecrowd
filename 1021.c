/*
Timelimit: 1
Leia um valor de ponto flutuante com duas casas decimais. Este valor representa um valor monetário. A seguir, calcule o menor número de notas e moedas possíveis no qual o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2. As moedas possíveis são de 1, 0.50, 0.25, 0.10, 0.05 e 0.01. A seguir mostre a relação de notas necessárias.

Entrada
O arquivo de entrada contém um valor de ponto flutuante N (0 ≤ N ≤ 1000000.00).

Saída
Imprima a quantidade mínima de notas e moedas necessárias para trocar o valor inicial, conforme exemplo fornecido.

Obs: Utilize ponto (.) para separar a parte decimal.
*/
#include <stdio.h>
 
int main() {
 
    float Valor;
    int Moedas,Notas;
    
    scanf("%f",&Valor);
    
    Notas = (int)Valor;
    
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",Notas/100);
    printf("%d nota(s) de R$ 50.00\n",Notas%100/50);
    printf("%d nota(s) de R$ 20.00\n",Notas%100%50/20);
    printf("%d nota(s) de R$ 10.00\n",Notas%100%50%20/10);
    printf("%d nota(s) de R$ 5.00\n",Notas%100%50%20%10/5);
    printf("%d nota(s) de R$ 2.00\n",Notas%100%50%20%10%5/2);
    
    Moedas = round((Valor-Notas)*100+(Notas%100%50%20%10%5%2)*100);
    
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",Moedas/100);
    printf("%d moeda(s) de R$ 0.50\n",Moedas%100/50);
    printf("%d moeda(s) de R$ 0.25\n",Moedas%100%50/25);
    printf("%d moeda(s) de R$ 0.10\n",Moedas%100%50%25/10);
    printf("%d moeda(s) de R$ 0.05\n",Moedas%100%50%25%10/5);
    printf("%d moeda(s) de R$ 0.01\n",Moedas%100%50%25%10%5);
 
    return 0;
}