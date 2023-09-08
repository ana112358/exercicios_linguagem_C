#include <stdio.h>
#include <stdbool.h>

// função que calcura média aritmética ou geométrica
float calcularMedia(char tipo, float n1, float n2, float n3){
    float media;
    if (tipo =='A')
    {
        media = (n1+n2+n3)/3;   //média aritmética
    }else if (tipo == 'P')
    {
        media = ((4*n1)+(5*n2)+(6*n3))/15;  //média ponderada
    }

    return media;  //retorna o valor da média
}
//Função principal
int main(){
    char opcao;
    float nota_1, nota_2, nota_3, valor_media;
    printf("Calcule a sua media\n");
    printf("A(aritmetica) ou P (ponderada): ");

  // Entrada de dados
    scanf("%c",&opcao); // A para aritmética e P para ponderada
    printf("Nota 1: ");
    scanf("%f",&nota_1); 
    printf("\n Nota 2: ");
    scanf("%f",&nota_2);   
    printf("\n Nota 3: ");   
    scanf("%f",&nota_3);  
  
  //chamando a função calcularMedia
    valor_media = calcularMedia(opcao,nota_1,nota_2,nota_3); 
    printf("A sua media e: %.2f",valor_media);
    

    return 0;
}
