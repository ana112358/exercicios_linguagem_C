
#include <stdio.h>
#include <stdbool.h>

int main()
{
    // Declarando variáveis que vamos utilizar
    int lado_1, lado_2, lado_3;
    
    // Entrada de dados
    printf("lado 1: ");
    scanf("%i", &lado_1);
    printf("\nlado 2: ");
    scanf(" %i", &lado_2);
    printf("\nlado 3: ");
    scanf(" %i", &lado_3);
   
   
   //Verificando de o triângulo é possível
   if ((lado_1>lado_2+lado_3)||(lado_2>lado_1+lado_3)||(lado_3>lado_2+lado_1)||lado_1==0 || lado_2== 0 || lado_3==0){
       
       printf("Esses lados não formam um triângulo.");
   }  
   // Verificando o tipo do triângulo
    else if((lado_1==lado_2)&&(lado_2==lado_3)){ 
            printf("O triângulo é equilátero");
        }
        else if((lado_1!=lado_2) || (lado_2!=lado_3) ||(lado_3 != lado_1)){
            if((lado_1==lado_3) || (lado_3==lado_2)||(lado_1==lado_2)){
             printf("O triângulo é isóceles.");
            } else{
                printf("\nO triângulo é escaleno.");
            }
        }
        return 0;
   }
