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
    
    // Cauculando a matriz transversa de k

    int matriz_transversa[2][2];
    printf("Matriz Transversa de K: \n");
    for(int a=0;a<2;++a){
        for(int b=0; b<2;++b){
            //Note que apenas inverti os Indices
            //o que era linha virou Coluna e o 
            //que era coluna virou linha
            matriz_transversa[a][b]=matriz[b][a];
             printf("%d  ",matriz_transversa[a][b]);
        }
        printf("\n");
    }

    return 0;
}
