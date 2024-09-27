#include <stdio.h>


int main(){
    int nb;
    printf("veuillez saisir votre nombre:");
    while(scanf("%d",&nb) != 1 || nb < 0 ){
        printf("veuillez saisir un nombre entier positive!!");
        while(getchar()!='\n');
    }
    for(int i=1;i<=10;i++){
        printf("%d * %d = %d\n",nb,i,nb*i);
    }

}