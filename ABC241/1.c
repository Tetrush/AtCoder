// AC

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,a[10],ans;
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }

    ans = a[0];
    ans = a[ans];
    ans = a[ans];

    printf("%d\n",ans);


    return 0;
}