// AC 2022.03.01
// https://atcoder.jp/contests/typical90/tasks/typical90_x

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int a[1001],b[1001];
    int n,k,i;

    scanf("%d %d",&n,&k);

    for (int i = 0; i < n; i++)
        if (scanf("%d", &a[i]) != 1) return 1;

    for (int i = 0; i < n; i++)
        if (scanf("%d", &b[i]) != 1) return 1;

    i=0;
    for(int j=0;j<k;j++){
        if(a[i]>b[i]){
            a[i]--;
        }else if(a[i]<b[i]){
            a[i]++;
        }else if(i==n-1){
            if(a[i]>b[i]){
                a[i]--;
            }else{
                a[i]++;
            }
        }else{
            i++;
            j--;
        }

    }

    if(i<n-1 || a[n-1]!=b[n-1]){
        printf("No\n");
    }else{
        printf("Yes\n");
    }

    return 0;
}