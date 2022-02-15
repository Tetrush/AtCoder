#include <stdio.h>

int getcurrent(int i,int j,int k){
    return i*10000 + j*5000 + k*1000;
}

int main(void){
    int n,y;
    int a,b,c,current;
    scanf("%d %d", &n,&y);
    a=0;b=0;
    while(a<n){
        for(c=(n-a-b);c>=0;c--){
            current = getcurrent(a,b,c);
            //printf("current:%d,%d,%d=%d\n",a,b,c,current);
            if(current == y){
                printf("%d %d %d\n",a,b,c);
                return 0;
            }
            b++;
        }
        b=0;
        a++;
    }

    printf("-1 -1 -1\n");
    return 0;
}


