#include <stdio.h>

int main(){
    int nb;
    printf("veuillez saisir votre nombre:");
    while(scanf("%d",&nb) != 1 || nb<0){
        printf("veuillez saisir un nombre entier positive !! : ");
        while(getchar()!='\n');
    }
    while(nb!=0){
        int ld = nb % 10;
        printf("%d",ld);
        nb /= 10;
    }

}