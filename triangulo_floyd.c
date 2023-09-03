#include <stdio.h>

int main(){
    int qtd_linhas, soma_linha=0;
    scanf("%d",&qtd_linhas);
     for (int i = 1; i <= qtd_linhas; i++)
     {
        for (int k = 1; k <= i; k++)
        {
           ++soma_linha;
           printf("%d ",soma_linha);   
        }
        printf("\n");

     }
     
}
