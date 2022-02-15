#include <stdio.h>
 
int main(void){
    int a, b ,c;
    scanf("%d %d", &a,&b);
    c = (a*b)%2;
    if(c==0){
        printf("Even\n");
    }else{
        printf("Odd\n");
    }
 
 
    return 0;
}