// 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char str[1002][1002];
    int sum[4]={0};
    int n,i,j,k,allow=0;
    int ul,ur,dl,dr;

    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",str[i]);
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){

            ul=0;ur=0;dl=0;dr=0;
            printf("%c",str[i][j]);
            if(strncmp("#",str[i],j)==0){
                printf("%d,%d ",i,j);
                if(i>4 && j>4){
                    ul=1;
                    printf("p");
                }else if(i>5 && j<n-5){
                    ur=1;
                }else if(i<n-5 && j>5){
                    dl=1;
                }else if(i<n-5 && j<n-5){
                    dr=1;
                }

                for(k=1;k<=6;k++){
                    if(ul){
                        if(strncmp("#",str[i-k],j-k)==0){
                            sum[0]++;
                            printf("plus\n");
                        }
                    }/*else if(ur){
                        sum[1] += checkblack(&str[i-k][0],i-k,j+k);
                    }else if(dl){
                        sum[1] += checkblack(&str[i+k][0],i+k,j-k);
                    }else if(dr){
                        sum[1] += checkblack(&str[i+j][0],i-k,j+k);
                    }*/
                }

                for(k=0;k<4;k++){
                    //printf("sum[%d]:%d\n",k,sum[k]);
                    if(sum[k] >=4){
                        printf("Yes\n");
                        return 0;
                    }
                }
            }
        }
    }

    printf("No\n");


    
    return 0;
}