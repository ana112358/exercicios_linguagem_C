#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
    int numero, cont_1, cont_2,cont_3,cont_4,b;
    char letra;
    scanf("%d", &numero);
    scanf(" %c", &letra);
    if (numero%2!=0)//Se for um numero ímpar ele vai diminuir um do seu valor
    {
        numero=numero-1;
    }


    for(cont_1=numero/2;cont_1>=1 ;--cont_1){
        for(b=1; b<=(numero/2) - cont_1;++b){ //loop para por a primeira letra
            
                printf(" ");
            
            
            
        }
        printf("%c", letra);
        for (cont_3=2*cont_1;cont_3>=1 ;--cont_3)
        {
            printf(" ");
        }
        
         printf("%c\n", letra);    
    }
       
    
    for(cont_2=1;cont_2<=numero/2 ; ++cont_2){
        for (cont_4=(numero/2) - cont_2;cont_4>=1 ;--cont_4)
        {
            printf(" ");
        }
        
        printf("%c", letra);
        for(b=1; b<=2*cont_2;++b){
            printf(" ");
        }
        printf("%c\n", letra);
    }
    
    return 0;
}
