#include <stdio.h>

int main(){
    int nb;
    printf("veuillez saisir votre nombre:");
    while(scanf("%d",&nb) != 1 || nb<0){
        printf("veuillez saisir un nombre entier positive !! : ");
        while(getchar()!='\n');
    }
    for(int i=2;nb>0;i+=2){
        printf("%d ",i);
        nb--;
    }

}