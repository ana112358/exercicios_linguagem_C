#include <stdio.h>

int main(){
    //declarando variável inteira
    int contador=0;


    //Diferente o while sozinho
    //o do primeiro executa os comandos
    //e depois verifica a condição
    printf("Sequencia progressiva: ");
    do
    {
        //Imprimindo cada número
        printf("%d ",contador);

        //incrementado contador
        ++contador;
    } while(contador<=10);//verificando se contador>=10
    
}