//Fiz uma calculadora utilizando a função switch. Ela realiza soma,subtração, multiplicação e divisão real.
#include <stdio.h>
int main(){    
    int opcao;
    float div_num, num_1, num_2, multiplicar_num;
    printf("Número 1: ");
    scanf("%f", &num_1);
    printf("\nNúmero 2: ");
    scanf("%f",&num_2);
    printf(" \n1-Somar | 2-Subtrair | 3-Dividir | 4-Multiplicar : ");
    scanf("%d", &opcao);
    switch (opcao){
        case 1:
            printf("%.2f + %.2f = %.2f ", num_1, num_2, num_1+num_2);
            break;
        case 2:
           printf("%.2f - %.2f = %.2f ", num_1, num_2, num_1-num_2);
           break;
        case 3:
           div_num= num_1/num_2;
           printf("%.2f / %.2f = %.2f ", num_1,num_2,div_num);
           break;
        case 4:
           multiplicar_num = num_1*num_2;
           printf("%.2f * %.2f = %.2f ",num_1,num_2, multiplicar_num);
           
           break;
        default:
         printf("Nenhum comando foi dado ");
        
    }
