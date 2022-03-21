// AC
// 

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n;
    char t[100001];
    int i;
    int x=0,y=0;
    char direction;
    direction = 'E';

    scanf("%d",&n);
    scanf("%s",t);

    for(i=0;i<n;i++){
        if(t[i]=='S'){
            if(direction == 'E'){
                x++;
            }else if(direction =='S'){
                y--;
            }else if(direction =='W'){
                x--;
            }else{
                y++;
            }
        }else{
            if(direction == 'E'){
                direction = 'S';
            }else if(direction =='S'){
                direction = 'W';
            }else if(direction =='W'){
                direction = 'N';
            }else{
                direction = 'E';
            }
        }

    }

    printf("%d %d\n",x,y);

    return 0;
}
