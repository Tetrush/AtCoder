// AC

#include <stdio.h>
#include <stdlib.h>

//マージソート
void merge_sort (int array[], int left, int right) {
    int i, j, k, mid;
    int work[1005];
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
    int n,m,i,j,a[1005],b[1005];
    scanf("%d %d",&n,&m);

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<m;i++){
        scanf("%d",&b[i]);
    }
    
merge_sort(a,0,n-1);
merge_sort(b,0,m-1);
a[n]=0;
b[m] = 0;

    j=0;
    for(i=0;i<m;i++){
        //printf("b[%d]:%d\n",i,b[i]);
        while(j<n+1){
            //printf("a[%d]:%d\n",j,a[j]);
            if(b[i]==a[j]){
                a[j] = -1;
                j++;
                break;
            }else{
                j++;
            }
            if(j==n+1){
                printf("No\n");
                return 0;
            }
        }
    }

    printf("Yes\n");

    return 0;
}