// AC
// 

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n;
    int list[2005] = {0};
    int i,temp=5000;

    scanf("%d",&n);
    printf("1\n");
    fflush(stdout);
    list[1] = 1;

    while(temp!=0){
        scanf("%d",&temp);
        list[temp]=1;
        for(i=1;i<=2*n+1;i++){
            if(list[i]==0){
                printf("%d\n",i);
                fflush(stdout);
                list[i]=1;
                break;
            }
        }

    }


    return 0;
}