#include <stdio.h>
#include <stdlib.h>

int main(){
    int nb;
    printf("veuillez saisir votre nombre:");
    while(scanf("%d",&nb) != 1 || nb < 0 ){
        printf("veuillez saisir un nombre entier positive!!");
        while(getchar()!='\n');
    }
    int res=0;
    for(int i=1;i<=nb;i++){
        res += i;
    }
    printf("la somme est = %d",res);

}