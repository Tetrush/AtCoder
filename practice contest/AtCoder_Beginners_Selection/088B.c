#include <stdio.h>

int main(void){
    int n,a[102],i,j,sum=0,cur;
    scanf("%d",&n);

    for(i=0;i<102;i++){a[i] = 0;}
    for (int i = 0; i < n; i++)
        if (scanf("%d", &a[i]) != 1) return 1;

    //sorting
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[j]<a[j+1]){
                cur = a[j];
                a[j] = a[j+1];
                a[j+1] = cur;
            }
        }
    }
    
    for(i=0;i<n;i+=2){
        //printf("%d,%d,",a[i],a[i+1]);
        sum+=a[i]-a[i+1];
    }

    printf("\n%d",sum);
    return 0;

}
