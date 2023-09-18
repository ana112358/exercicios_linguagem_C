/*Faça um programa que calcule a expressão matemática a seguir e que exiba na tela o seu valor.
A = B + C - 5D
Onde B, C e D são vetores de três elementos que devem ser lidos da entrada padrão, nesta ordem.*/

//Adcionando biblioteca
#include <stdio.h>


// Função principal
int main(){
    //Declarando os vetores que vamos utilizar
    int vetor_a[3], vetor_b[3],vetor_c[3], vetor_d[3];

    //Entrada de dados do Vetor B:
  printf("Elementos do vetor B: ");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &vetor_b[i]);
    }
    //Entrada de dados do Vetor C:
    printf("\nElementos do vetor c: ");
        for (int j = 0; j < 3; j++)
    {
        scanf("%d", &vetor_c[j]);
    }
    //Entrada de dados do Vetor D:
    printf("\nElementos do vetor D: ");
            for (int k = 0; k < 3; k++)
    {
        scanf("%d", &vetor_d[k]);
    }

   // Calculo da Expressão vetorial A = B + C - 5D
     for (int m = 0; m < 3; m++)
    {
        vetor_a[m] = vetor_b[m]+vetor_c[m]-5*vetor_d[m];

    }
    
 // Saída de dados: o resultado da matriz A
  printf("A = [%d,%d,%d]",vetor_a[0],vetor_a[1],vetor_a[2]);
    

    return 0;
}
