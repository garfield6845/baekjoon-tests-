#include <stdio.h>

int main(){
    long long int n;
    int fn;
    scanf("%lld",&n);
    int n4=n%4;
    int n42=(n/4)%2;
    if (n4==3)
        fn=3;
    else if(n4==1)
        if(n42==1)
            fn=5;
        else
            fn=1;
    else if((n4+n42)%2==0)
        fn=2;
    else
        fn=4;

    printf("%d",fn);
}