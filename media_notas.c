// incluindo a bibliotera de entrada e saída
#include <stdio.h> 
//Incluindo a biblioteca com operações matemáticas
#include <stdlib.h>

// Criando a função principal do programa (main)
// O void é uma função que não possui retorno
// Usado para procedimentos estáticos
void main(){
    //Criando as variáveis
    float media, nota_1, nota_2;
    
    // Incerindo dados 
    printf("Primeira nota: ");
    //O scanf vai receber um dado do tipo float = "%f"
    // no endereço da variável nota_1 = (&nota_1)
    scanf("%f", &nota_1);
    printf("Segunda nota: ");
    scanf("%f", &nota_2);
    
    // Calculando a média das duas notas
    media = (nota_2 +nota_1) / 2;
    printf("A média é : %f\n", media);
}
