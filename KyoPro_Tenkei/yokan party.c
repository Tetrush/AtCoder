#include <stdio.h>
#include <string.h>
 
int piecedist(int *a,int x, int y){
    return a[x]-a[y];
}

int main(void){
    int k,a[1000000001],l,n;
    int min=0,lastpoint=0,max=0;
    int i,j;

    scanf("%d %d",&n,&l);
    scanf("%d",&k);
    for (int i = 0; i < n; i++)
        if (scanf("%d", &a[i]) != 1) return 1;
    
    for(i=lastpoint;i<k,i++){
        for(j){
            
        }
    }

    return 0;
}