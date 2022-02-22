// 
// https://atcoder.jp/contests/typical90/tasks/typical90_g

#include <stdio.h>
#include <stdlib.h>
 
void merge_sort (int array[], int left, int right) {
    int i, j, k, mid;
    int work[300002];
    if (left < right) {
        mid = (left + right)/2;
        merge_sort(array, left, mid);
        merge_sort(array, mid+1, right);
        for (i = mid; i >= left; i--) { work[i] = array[i]; }
        for (j = mid+1; j <= right; j++) {
            work[right-(j-(mid+1))] = array[j];
        }
        i = left; j = right;
        for (k = left; k <= right; k++) {
            if (work[i] < work[j]) { array[k] = work[i++]; }
            else                   { array[k] = work[j--]; }
        }
    }
}

int main(void){
    int a[300001];
    int b[300001];
    int n,q,i,j;
    int lmin,lmax,pt,last;

    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&q);
    for(i=0;i<q;i++){
        scanf("%d",&b[i]);
    }

    merge_sort(a,0,n-1);
    int x = 0;
    for(i=0;i<q;i++){
        pt = 1999999999;
        j = n/2;
        last = -1;
        lmin = 0;lmax = n;
/*
        while(x<5){
            if(abs(a[j]-b[i]) > pt){
                last = j;
                if(a[j] > b[i]){
                    j = (j+lmin)/2;
                }else{
                    j = (j+lmax)/2;
                }
                if(j==last){
                    break;
                }
            }else{
                pt = abs(a[j]-b[i]);
                last = j;
                if(a[j] > b[i]){
                    j = (j+lmin)/2;
                }else{
                    j = (j+lmax)/2;
                }
                if(j==last){
                    break;
                }
            }
            if(j<lmin){
                lmin = j;
            }else if(j>lmax){
                lmax = j;
            }
            x++;
        }
        printf("%d\n",pt);
*/
    }

    return 0;
}