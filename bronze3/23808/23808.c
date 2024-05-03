#include <stdio.h>

int main(){
    double n;
    scanf("%lf",&n);
    //가로 n*5 세로 n*5
    for(int i=1;i<=n*5;i++){
        if(i/n<=2||(i/n>3&&i/n<=4)){
            for(int j=0;j<n;j++)
                printf("@");
            for(int j=0;j<n*3;j++)
                printf(" ");
            for(int j=0;j<n;j++)
                printf("@");
        }
        else{
            for(int j=0;j<n*5;j++)
                printf("@");
            }
        
        printf("\n");
    }
}