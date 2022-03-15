// 
// https://atcoder.jp/contests/typical90/tasks/typical90_p

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    int t,ta,l,x,y,q;
    int e[1001];
    int i;
    float rad,veca,vecb;

    scanf("%d %d %d %d %d",&t,&l,&x,&y,&q);

    for(i=0;i<q;i++){
        scanf("%d",&e[i]);
    }


    for(i=0;i<q;i++){
        ta = e[i]%t;
        rad = 2*3.14159265*ta/t;
        veca = x*x - 0.5*l*y*y*sin(rad);
        vecb = sqrt( x*x + y*y -l*y*sin(rad) + l*l*0.5*(1-cos(rad)) ) * sqrt( x*x + y*y);
        printf("%f\n",vecb);
        printf("%f\n",360*acos(veca/vecb)/(3.14159*2));
    }


    


    return 0;
}