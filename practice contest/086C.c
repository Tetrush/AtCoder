#include <stdio.h>
#include <string.h>
 
int main(void){
    int n,x[100001],y[100001],t[100001];
    int i,point=0,k,now=0,pos[2]={0,0};

    //input
    scanf("%d", &n);
    for (i=0;i<n;i++){
        scanf("%d %d %d",&t[i],&x[i],&y[i]);
    }

    point = 0;
    for(now=0;now<t[n-1];now++){

        //point check
        if(now==t[point]){
            if(pos[0]==x[point] && pos[1]==y[point]){
            point++;
            }else{
                printf("No\n");
                return 0;
            }
        }

        //move
        if((pos[0]-x[point])<0){
            pos[0]++;
        }else if((pos[0]-x[point])==0){
            if((pos[1]-y[point])<0){
                pos[1]++;
            }else{
                pos[1]--;
            }
        }else{
            pos[0]--;
        }
    }

    if(pos[0]==x[point] && pos[1]==y[point]){
        point++;
    }else{
        printf("No\n");
        return 0;
    }   

    printf("Yes\n"); 
    return 0;
}