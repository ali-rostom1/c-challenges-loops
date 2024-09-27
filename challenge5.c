#include <stdio.h>

int main(){
    int b,e;
    printf("veuillez saisir votre base et votre exposant de cette format (base^exposant):");
    while(scanf("%d^%d",&b,&e) != 2 || b < 0 || (b == 0 && e == 0)){
        printf("veuillez saisir un nombre entier positive de cette format (base^exposant):!!");
        while(getchar()!='\n');
    }
    int res=1;
    for(int i=1;i<=e;i++){
        res *= b;
    }
    printf("%d^%d=%d",b,e,res);

}