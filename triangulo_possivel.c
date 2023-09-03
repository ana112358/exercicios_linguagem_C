#include <stdio.h>
#include <stdbool.h>
int main(){
    int lado_1, lado_2, lado_3;
    bool possivel;
    printf("lado 1:");
    scanf("%i", &lado_1);
    printf("lado 2:");
    scanf("%i", &lado_2);
    printf("lado 3:");
    scanf("%i", &lado_3);
    possivel= true;

    if (lado_1 >= lado_2 + lado_3 || lado_2 >= lado_1 + lado_3 || lado_3 >= lado_1 + lado_2){
        possivel=false;
