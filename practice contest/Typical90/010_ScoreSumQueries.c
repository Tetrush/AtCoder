// 
// https://atcoder.jp/contests/typical90/tasks/typical90_j

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n,q,c[100001],l[100001]={0},r[100001]={0},p[100001]={0};
    int i,li=0,ri=0;
    printf("ok");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d, %d",c[i],p[i]);
        if(c[i]==1){
            l[li]=p[i];
            li++;
        }else{
            r[ri]=p[i];
            ri++;
        }
    }
    scanf("%d",&q);
    for(i=0;i<q;i+=2){
        scanf("%d, %d",l[i],r[i]);
    }


    return 0;
}