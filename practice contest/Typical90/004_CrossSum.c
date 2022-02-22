// AC at 2022.02.22
// https://atcoder.jp/contests/typical90/tasks/typical90_d

#include <stdio.h>
 
int main(void){
    int h,w;
    int a[2001][2001]={0};
    int x[2001]={0},y[2001]={0};
    int i,j;
 
    scanf("%d %d",&h,&w);
 
    for(i=0;i<h;i++){
        for (j=0;j<w;j++){
            scanf("%d", &a[i][j]);
            x[i] += a[i][j];
            y[j] += a[i][j];
        }
    }
 
    for(i=0;i<h;i++){
        for(j=0;j<w;j++){
            printf("%d ",x[i]+y[j]-a[i][j]);
        }
        printf("\n");
 
    }
 
    return 0;
}