#include <stdio.h>
#include <string.h>

int main(void){
    int n;

    //二次元配列の宣言
    int a[5][10] ={"ab","cd","ef","gh"};


    //n個のスペース区切りの入力
    for (int i = 0; i < n; i++)
        if (scanf("%d", &a[i]) != 1) return 1;
    
    return 0;
}