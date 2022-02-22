// AC 2022.2.23
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
    int jmin,jmax,pt,last,last2;
 
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&q);
    for(i=0;i<q;i++){
        scanf("%d",&b[i]);
    }
 
    merge_sort(a,0,n-1);
    int x;
    for(i=0;i<q;i++){
        pt = abs(a[n/2]-b[i]);
        j = n/2;
        last = -1;last2 = -1;
        jmin = 0;jmax = n-1;
        x=0;
        while(jmax-jmin!=1 && j!=n-1 && j!=0){
            //printf("b[%d]:%d a[%d]:%d\n",i,b[i],j,a[j]);
            if(b[i]>a[j]){
                jmin = j;
                j = (j+jmax+1)/2;
            }else{
                jmax = j;
                j = (j+jmin+1)/2;
            }
            //printf("jmax:%d jmin:%d\n",jmax,jmin);
        }
        //printf("FINAL:b[%d]:%d a[%d]:%d\n",i,b[i],j,a[j]);
        if(j!=0){
            if(abs(a[j]-b[i]) > abs(a[j-1]-b[i])){
                printf("%d\n",abs(a[j-1]-b[i]));
            }else{
                printf("%d\n",abs(a[j]-b[i]));
            }
        }else{
            printf("%d\n",abs(a[j]-b[i]));
        }
 
        //printf("%d:%d\n",i,x);
 
    }
 
    return 0;
}