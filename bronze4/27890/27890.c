#include <stdio.h>

int main(){
    int x,n;
    scanf("%d %d",&x,&n);
    for (int i=0;i<n;i++){
        if (x%2)
            x=(2*x)^6;
        else
            x=(x/2)^6;
    }
    printf("%d",x);
}