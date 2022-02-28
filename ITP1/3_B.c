// AC

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,x[10001];
    for(i=0;i<10000;i++){
        scanf("%d",&x[i]);
        if(x[i] == 0){
            break;
        }
        printf("Case %d: %d\n",i+1,x[i]);
    }

    return 0;
}