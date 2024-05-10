#include <stdio.h>
#include <string.h>

int main(){
    char a[100],b[50];
    int count=0;
    scanf("%s",a);
    for(int i=0;i<strlen(a);i++){
        if (a[i]>='A'&&a[i]<='Z'){
            b[count]=a[i];
            count++;
        }
    }
    printf("%s",b);
}