#include <stdio.h>


//Programa principal

// Função sem retorno que modifica diretamente na memória o valor da variável
// Esse programa é simples, mas para programas maiores ele é bem mai eficiente
void aumenta_dez(int *numero){ // * O asterisco significa "Valor apontado por"
    *numero=*numero +10;
    return;
}

//Função principal
int main()
{
    //declarando a variável
    int a ;
    
    //Entrada do valor da variável
    printf("Numero: ");
    scanf("%d",&a);
    //Chamando a função que aumenta o número em 10
    aumenta_dez(&a);
    //Saída com o número aumentado
    printf("Número aumentado: %d",a);
}
