#include <stdio.h>


int main(void){
    int n,a,b, sum=0;
    int current,i;
    scanf("%d %d %d", &n,&a,&b);

    for(i=1;i<=n;i++){
        current = i/10000+(i/1000%10)+(i/100%10)+(i/10%10)+(i%10);
        if(current >=a && current <=b){
            sum+=i;
        }
    }
    printf("%d",sum);
    return 0;

}


