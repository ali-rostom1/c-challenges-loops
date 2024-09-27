#include <stdio.h>

int main(){
    int n;
    printf("veuillez saisir votre nombre:");
    while(scanf("%d",&n) != 1 || n<0){
        printf("veuillez saisir un nombre entier positive !! : ");
        while(getchar()!='\n');
    }
    int f0=0,f1=1;
    int f2;

    if(n==0) f2=f0;
    else if(n==1) f2=f1;

    for(int i=2;i<=n;i++){
        f2=f0+f1;
        f0=f1;
        f1=f2;
        
    }
    
    printf("resultat est : %d",f2);


}