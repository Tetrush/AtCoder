#include <stdio.h>

int main(void){
    int a,b,c;
    scanf("%d %d",&a,&b);
    c = a-b;

    if(c==1 || c==(-1) || c==9 || c==(-9)){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    return 0;
}