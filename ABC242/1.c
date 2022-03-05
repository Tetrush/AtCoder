// AC
// 

#include <stdio.h>
#include <stdlib.h>

int main(void){
    double a,b,c,x;
    double ans;

    scanf("%lf %lf %lf %lf",&a,&b,&c,&x);

    if(x<=a){
        printf("1.000000000000\n");
    }else if(x<=b){
        ans = c/(b-a);
        printf("%1.12lf\n",ans);
    }else{
        printf("0.000000000000\n");
    }



    return 0;
}