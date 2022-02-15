#include <stdio.h>
#include <string.h>
 
int main(void){
    char s[100005],temp[100005];
    char prot[10][50]={"dreameraser","dreamerase","dreamer","eraser","erase","dream"};
    int size = 0;
    int i,j,k;
    scanf("%s", s);
    
    while(s[size]!='\x0'){
        size++;
    }
 
    while(s[0]!='\x0'){
        for(i=0;i<6;i++){
            strcpy(temp,s);
            j=0;
            while(prot[i][j]!='\x0'){
                j++;
            }
 
            temp[j] ='\x0';

            //matched
            if(strcmp(temp,prot[i])==0){
                for(k=0;k<size;k++){
                    s[k]= s[k+j];
                }
                size -= j;
                s[k-j] = '\x0';
                
                if(s[0]=='\x0'){
                    printf("YES\n");
                    return 0;
                }
                break;
            //not matched
            }else if(i==5){
                printf("NO\n");
                return 0;       
            }
        }     
    }
    return 0;
}