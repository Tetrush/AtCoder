// AC

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int a,b,c,temp;
    scanf("%d %d %d",&a,&b,&c);

    if(a>b){
        temp = b;
        b=a;
        a=temp;
    }

    if(a>c){
        temp = c;
        c=a;
        a=temp;
    }
    
    if(c<b){
        temp = c;
        c=b;
        b=temp;
    }

    printf("%d %d %d\n",a,b,c);
    return 0;
}
