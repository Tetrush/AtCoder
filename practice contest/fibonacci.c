#include <stdio.h>

int fibonacci(int n){
    int f,fdash,i;
    f=1;fdash=0;
    for(i=1;i<n;i++){
        f += fdash;
        fdash = f-fdash;
    }
    return f;
}

int main(void){
    int n,f;
    scanf("%d",&n);
    f = fibonacci(n);
    printf("f(%d) = %d\n",n,f);
    return 0;
}
