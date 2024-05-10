#include <stdio.h>
#include <string.h>
#define MAX 1000000

int main(){
    char a[MAX];
    int b,count=1;
    scanf("%[^\n]s",a);
    b=strlen(a);
    for(int i=0;i<b;i++){
        if (a[i]==' ')
            count++;
    }
    if (a[0]==' ')
        count--;
    if (a[b-1]==' ')
        count--;
    
    printf("%d",count);
}