#include <stdio.h>

int main(void){
    int n,d[102],i,j,sum=0,cur;
    scanf("%d",&n);
    for(i=0;i<n+1;i++){d[i] = 0;}
    for (int i = 0; i < n; i++){
        scanf("%d", &d[i]);
    }


    //sorting
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(d[j]<d[j+1]){
                cur = d[j];
                d[j] = d[j+1];
                d[j+1] = cur;
            }
        }
    }
    
    cur = d[0];
    j = 1;
    for(i=0;i<n;i++){
        if(cur>d[i]){
            cur = d[i];
            j++;
        }
    }

    printf("\n%d",j);
    return 0;

}
