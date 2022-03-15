// AC 2022.03.01
// https://atcoder.jp/contests/typical90/tasks/typical90_p

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int a,b,c,n;
    int i,j,k,num=9999;

    scanf("%d %d %d %d",&n,&a,&b,&c);

    for(i=0;i<=num;i++){
        for(j=0;j<=num-i;j++){
            if((n - a*i-b*j)%c==0){
                k= (n -a*i -b*j)/c;
                if(k>=0 && i+j+k<num){
                    num = i+j+k;
                    //printf("%d %d %d \n",i,j,k);
                }
            }
            if(a*i+b*j>n){
                break;
            }
        }
        if(a*i>n){
            break;
        }
    }

    printf("%d\n",num);

    return 0;
}