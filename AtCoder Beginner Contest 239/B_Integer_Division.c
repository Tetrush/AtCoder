// AC
// https://atcoder.jp/contests/abc239/tasks/abc239_b

#include <stdio.h>
#include <math.h>

int main(void){
    long long int x,y,z;

    scanf("%lli",&x);

    y = x/10;
    z = x%10;
    if(z<0){
        y -= 1;
    }

    printf("%lli\n",y);

    return 0;
}