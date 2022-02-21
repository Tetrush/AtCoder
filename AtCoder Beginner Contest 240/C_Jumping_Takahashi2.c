//TLEになるので不正解

#include <stdio.h>
 
//配列受け取り　これは配列に入れた2進数を1ビット加算するもの
int binary_plus(int *s,int i){
    s[i]+=1;
    //printf("s[%d]=%d\n",i,s[i]);
    if(s[i]==2){
        s[i] = 0;
        binary_plus(s,i+1);
    }
    return 0;
}
 
int main(void){
    int n,a[105],b[105],x;
    int i;
    int c[105],bin=1;
    scanf("%d %d",&n,&x);
 
    //n個のスペース区切りの入力
    for (i=0;i<n;i++){
        scanf("%d %d", &a[i],&b[i]);
    }
 
    for(i=0;i<n;i++){
        c[i] = 0;
        bin *= 2;
    }
 
    int j=0;int sum;
    while(j<=bin){
        i=0;sum = 0;
        //printf("c:");
        while(i<n){
            //printf("%d",c[i]);
            if(c[i]==0){
                //printf("a[%d]:%d\n",i,a[i]);
                sum += a[i];
            }else{
                //printf("b[%d]:%d\n",i,b[i]);
                sum += b[i];
            }
            i++;
        }
        //printf("\n");
        //printf("%s:%d\n",c,sum);
        if(sum == x){
            printf("Yes\n");
            return 0;
        }
        binary_plus(c,0);
        j++;
    }
 
    printf("No\n");
 
 
    return 0;
}