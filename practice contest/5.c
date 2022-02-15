#include <stdio.h>

int getcurrent(int i,int j,int k){
    return i*500 + j*100 + k*50;
}

int main(void){
    int a,b,c,x,ans=0;
    int i,j,k,current;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &x);

    for(i=0;i<=a;i++){
        for(j=0;j<=b;j++){
            for(k=0;k<=c;k++){
                current = getcurrent(i,j,k);
                //printf("i=%d,j=%d,k=%d:%d\n",i,j,k,current);
                if(current == x){
                    ans++;
                }else if(current > x){
                    break;
                }
            }
        }
    }
    printf("%d",ans);
    return 0;

}


