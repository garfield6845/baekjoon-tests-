#include <stdio.h>

int main(){
    char c1[100];
    int n,count=0;
    scanf("%d",&n);
    scanf("%s",c1);
    for(int i=0;i<n/2;i++){
        if (c1[i]!=c1[n-i-1]){
            c1[i]=c1[n-i-1];
            count++;
        }
    }
    printf("%d",count);
}