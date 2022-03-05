// WA
// 

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n;
    int x[7];
    int p,i,j,temp1,temp2,sum;

    scanf("%d",&n);

    p=1;
    for(j=0;j<n;j++){
        p *= 10;
    }
    printf("%d\n",p);

    sum = 0;
    for(i=p/10;i<p;i++){
        temp1 = i;
        for(j=0;j<n;j++){
            x[n-j-1] = temp1 %10;
            temp1 = temp1/10;
            if(x[n-j-1] == 0){
                break;
            }else if(j>0){
                temp2 = x[n-j-1]-x[n-j];
                if(abs(temp2)<2){
                    sum++;
                }
            }
        }
    }
    printf("end\n");
    printf("%d\n",sum);

    return 0;
}