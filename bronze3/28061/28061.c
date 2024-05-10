#include <stdio.h>

int main(){
    int n,a,count=0;
    
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        scanf(" %d",&a);
        if (count<(a-(n+1-i))){
            count=a-(n+1-i);
            }
    }
    printf("%d",count);
}
//집에 갔을떄의 레몬의 개수: a[i]-(n+1-i)?
//n이 1이면 집은 n+1(=2)에 있음 
//1 위치에 레몬이 a개(3개)면 집에 갔을떄 
//레몬은 두개 남아있음
//3-(2-1)
//n:2 집:3 레몬: 1,2
//1에서 채집: 레몬 