// AC
// https://atcoder.jp/contests/abc239/tasks/abc239_a


#include <stdio.h>
#include <math.h>

int main(void){
    int h;
    double a;

    scanf("%d",&h);
    a = h+12800000;
    a *= h;
    printf("%f\n",sqrt(a));

    return 0;
}