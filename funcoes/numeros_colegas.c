/* Neste programa que desenvolvi, resolvi o problema de identificar
números colegas. Para isso, criei duas funções: uma para somar os
divisores próprios de um número e outra para verificar se dois números
são colegas ou não.

A ideia principal é determinar se dois números inteiros A e B são colegas.

Eles são considerados colegas se a soma dos divisores próprios de um número
difere em até 2 unidades da soma dos divisores próprios do outro número.
Ao receber dois números inteiros diferentes como entrada, o programa verifica 
se eles são colegas e, em seguida, imprime "S" se forem colegas ou "N" se não forem.

Essa implementação permite identificar números colegas de forma eficiente e 
pode ser útil em vários contextos matemáticos e computacionais. */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//função que calcula a soma dos divisores
int calcularDivisores(int numero){
    int contador=0;
   //variável que armazena cada divisor
   int divisores[100];
   int soma_div=0;

   //caminhando número por número 1,2,3,..., o número de entrada
   for (int k = 1; k < numero; k++)
   {
    //se o número k for divisor do número ele é colocado no vetor
    if (numero%k==0)
    {
        //colocando no vetor
        divisores[contador]=k;
        ++contador;
    }

   }
//O contador representa a quantidade de divisores do número de entrada
for (int m = 0; m< contador; m++)
{
    //somando cada divisor do número 
    soma_div= soma_div+divisores[m];
}

//retorna a soma de todos os divisores do número
return soma_div;
}


// Verificar coleguisse
int verificaColega(int soma_div1,int numero1,int soma_div2,int numero2){
    if (((abs(soma_div1-numero2))<=2)&& (abs(soma_div2-numero1)<=2))
    {
        return true;
    }else{
        return false;
    }
    
}

int main(){

    // Declarandos as variável dos dois números que iremos avaliar
    int num_1, num_2,soma_divisores_1,soma_divisores_2;

    // Entrada de dados das duas variáveis
    scanf("%d",&num_1);
    scanf("%d", &num_2);
   
   // Calculando divisores do número 1
   soma_divisores_1 = calcularDivisores(num_1);
   soma_divisores_2 = calcularDivisores(num_2);

    bool colega;

colega=verificaColega(soma_divisores_1,num_1, soma_divisores_2, num_2);

if (colega==true)
{
    printf("S");
}else if(colega==false){
    printf("N");

}
 

   return 0;
}
