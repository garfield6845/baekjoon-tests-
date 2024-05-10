#include <stdio.h>
#define max 2147483647

int main(){
    int n,m;
    long long int sum=1;
    long long int a[100],b[20];
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++){
        scanf("%lld",&a[i]);
        a[i]=a[i]%m;
        sum*=a[i];
    }
    for(int i=0;i<n;i++)
        printf("%lld ",a[i]);
    printf("\n%lld",sum%m);
}
//만약 sum*a[i]가 max보다 크면 b에 sum을 저장하고
// sum을 1로 바꾸고
// 다시 a[i]%m들을 sum에 곱하고
//b[i]를 곱해서 나눈다 