#include <stdio.h>
//Biblioteca utilizada para a geração
//de números aleatórios, alocação de 
//memória e converção de dados.(srand, rand)
#include <stdlib.h>
//Biblioteca relacionada a manipulção de tempo e data
//(time)
#include <time.h> 

//Ele coloca na variável aleatorio rand que é
//uma função da biblioteca padrão de C que gera
//números pseudo aleatórios definidos por um 
//algoritmo que é definido pela"Semente" com a
//função srand()
int main(){
    //obtém o tempo atual em segundos e o usa 
    //como semente para inicializar o gerador
    //de números pseudoaleatórios.
    srand((unsigned) time(NULL));
    //Essa parte do código gera um número aleatório
    //entre 0 e 49 (inclusive) e o armazena na 
    //variável aleatorio.
    int aleatorio=rand()%50; 
    printf("Numero aleatorio gerado: %d",aleatorio);  
                            
    return 0;
}