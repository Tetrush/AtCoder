// AC

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int w,h,x,y,r;
    scanf("%d %d %d %d %d",&w,&h,&x,&y,&r);
    if(0<=(x-r) && w>=(x+r)){
        if(0<=(y-r) && h>=(y+r)){
            printf("Yes\n");
            return 0;
        }
    }
    printf("No\n");
    return 0;
}