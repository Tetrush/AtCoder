#include <stdio.h>
#include <string.h>


int main(void){
    int h,w;
    int num = 200;
    int a[num][num];
    int ans[200][200]={};
    int i,j;
    int x,y;

    scanf("%d %d",&h,&w);

    for(i=0;i<h;i++){

        for (j=0;j<w;j++)
            if (scanf("%d", &a[i][j]) != 1) return 1;

    }

    for(i=0;i<h;i++){
        for(j=0;j<w;j++){
            x=0;y=0;
            while(y<h){
                ans[i][j] += a[i][y];
                y++;
            }
            while(x<w){
                ans[i][j] += a[x][j];
                x++;
            }
            ans[i][j] -= a[i][j];        
        }
    }

    for(i=0;i<h;i++){
        for(j=0;j<w;j++){
            printf("%d ",ans[i][j]);
        }
        printf("\n");
    }

    return 0;
}