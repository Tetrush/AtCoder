// 
// 

#include <stdio.h>
#include <stdlib.h>

int main(void){
    char s[10001];
    int q,t[10001],k[10001];
    int i,j,temp;

    scanf("%s",s);
    scanf("%d",&q);

    for(i=0;i<q;i++){
        scanf("%d %d",&t[i],&k[i]);
    }

    for(i=0;i<q;i++){
        temp = 1;
        for(j=0;j<t[i];i++){
            temp *= 2;
        }
        for(j=0;j<60;i++){
            if(k[i]<=temp*j){
                break;
            }
        }
    }

    return 0;
}