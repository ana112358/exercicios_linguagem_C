#include <stdio.h>


//Programa principal
int main()
{
    int matriz[2][2], cont=0;
    
    printf("Indices da matriz:\n");
    //Linha da matriz "i"
    for(int i=0; i<2; ++i){
        // Coluna da matriz "j"
        for(int j=0;j<2;++j){
            matriz[i][j]= cont;
            ++cont;
            //Impressão dos índices da matriz 
            printf("i=%d | j=%d   ", i,j);
        }
        printf("\n");
    }
    //Impreção da matriz que foi gerada
    printf("Matriz: \n");
    for (int k=0;k<2;++k){
        for (int l=0; l<2;++l){
            printf("%d  ",matriz[k][l]);
        }
          printf("\n");
    }

    return 0;
}
