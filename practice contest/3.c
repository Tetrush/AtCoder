#include <stdio.h>

int main(void){
    int i, a = 0;
    char s[5];
    scanf("%s", s);

    for(i=0;i<3;i++){
        a += (s[i] - '0');
    }
    printf("%d\n",a);
    
    return 0;
}