// AC 2022.02.16
// https://atcoder.jp/contests/typical90/tasks/typical90_b

#include <stdio.h>
#include <stdlib.h>
 
int binary_minus(int *s,int i){
    s[i]+=1;
    //printf("s[%d]=%d\n",i,s[i]);
    if(s[i]==2){
        s[i] = 0;
        binary_minus(s,i+1);
    }
    return 0;
}

int main(void){
    int n, bin=1;
    int s[21];
    int i,j;
    int checksum,flag;

    scanf("%d",&n);
    for(i=0;i<n;i++){
        bin =bin*2;
        s[i]=1;
    }
    
    s[i+1]=1;

    for(i=0;i<bin;i++){
        j=0;
        checksum=0;
        flag = 1;
        while(j<n){
            if(s[j]==1){
                checksum++;
            }else{
                checksum--;
            }
            if(checksum < 0){
                flag = 0;
            }
            j++;
        }

        if(checksum > 0){
            flag = 0;
        }
        
        j=n-1;

        //printf("%2d:",i);
        if(flag==1){
            while(j>=0){
                if(s[j] ==1){
                    printf(")");
                    //printf("1");
                }else{
                    printf("(");
                    //printf("0");
                }
                j--;
            }
        printf("\n");
        }



        binary_minus(s,0);

    }
    return 0;
}

