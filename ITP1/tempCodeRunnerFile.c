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
    }

    i=0;
    while(x[i]!='\0'){
        printf("Case %d: %d\n",i,x[i]);
        i++;
    }


    return 0;
}5