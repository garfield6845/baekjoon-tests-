#include <stdio.h>
#include <string.h>
int main(){
    char a[32];
    int ex,count=0;
    scanf("%s",a);
    for(int i=6;i<32;i++){
        if (a[i]=='_')
            count++;
    }
    
    ex=strlen(a)+2+count*5;
    printf("%d",ex);
}
