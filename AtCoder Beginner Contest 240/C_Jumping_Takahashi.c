//TLEになるので不正解

#include <stdio.h>

int binary_minus(int *s,int i){
    s[i]-=1;
    if(s[i]==-1){
        s[i] = 1;
        binary_minus(s,i-1);
    }
    return 0;
}

int binary_plus(int *s,int i){
    s[i]+=1;
    if(s[i]==2){
        s[i] = 0;
        binary_plus(s,i+1);
    }
    return 0;
}

 
int main(void){
    int n,a[105],b[105],x;
    int i;
    int c[105],d[105],bin=1;
    scanf("%d %d",&n,&x);
 
    for (i=0;i<n;i++){
        scanf("%d %d", &a[i],&b[i]);
        c[i] = 1;
        d[i] = 0;
        bin *= 2;
    }
 
    int j=0;int sum;int sumb;

    while(j<bin){
        i=0;sum=0;sumb=0;
        while(i<n){
            if(c[i]==0){
                sum += a[i];
                sumb += b[i];
            }else{
                sum += b[i];
                sumb += a[i];
            }
            i++;
        }
        if(sum == x || sumb == x){
            printf("Yes\n");
            return 0;
        }
        binary_minus(c,n-1);
        binary_plus(d,0);
        j++;
    }
 
    printf("No\n");
 
 
    return 0;
}