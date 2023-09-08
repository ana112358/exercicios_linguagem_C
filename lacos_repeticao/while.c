#include <stdio.h>

/* main é a função principal do programa 
Ela necessita retornar um inteiro para
se comunicar bem com o sistema. */
int main(){

    /*declarando a variável inteira 
    que sera utilizada*/
    int contador=0;

    printf("Progressivo: ");

    //contando de 0 a 10
    while (contador <=10)
    {
        //saída de dados
        printf("%d ",contador); 

        ++contador; // contador = contador+1
         
    }
    printf("\n");

    // corrigindo o contador, 
    // pois na última repetição contador==11
    contador = contador-1;

    printf("Regressivo: ");
    //contando de 11 a 0    
    while (contador>=0)
    {
        printf("%d ",contador);
        --contador; //contador = contador -1
    }
    
    //Retorno da função main    
    return 0;
    
}
