#include <stdio.h>
#define max 2147483647

int main(){
    int n,m,count=0;
    long long int sum=1;
    long long int a[100],b[20];
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++){
        scanf("%lld",&a[i]);
        a[i]=a[i]%m;
        if(sum*a[i]>max){
            b[count]=sum%m;
            sum=1;
            count++;
        }
        sum*=a[i];
        b[count]=sum%m;
    }
    for(int i=0;i<n;i++)
        printf("%lld ",a[i]);
    printf("\n%lld",sum%m);
}
//만약 sum*a[i]가 max보다 크면 b에 sum을 저장하고
//안 커도 b에 저장하고 하면..아 복잡하네 
//저장 안하고 나머지를 구해버리고?
//sum을 1로 바꾸고
//다시 a[i]%m들을 sum에 곱하고
//b[i]를 곱해서 나눈다 ?
//걍 답 봤음 
// https://developer-bbyakk.tistory.com/96