#include <stdio.h>
#include <stdlib.h>
int main(){
    long long n;
    int counter=0;
    printf("veuillez saisir votre nombre:");
    while(scanf("%lld",&n) != 1 || n<0){
        printf("veuillez saisir un nombre entier positive !! : ");
        while(getchar()!='\n');
    }
    if(n==0){ 
        printf("%d a 1 digits",n);
        exit(0);
    }
    long long test=n;
    while(test!=0){
        counter++;
        test/=10;
    }
    printf("%lld a %d digits",n,counter);

}