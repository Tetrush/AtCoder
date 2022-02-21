#include <stdio.h>

void merge_sort (int array[], int left, int right) {
    int i, j, k, mid;
    int work[1001];
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
    int n,a[1001],flag=0,sum=1;
    int i;
    scanf("%d",&n);

    //n個のスペース区切りの入力
    for (i=0;i<n;i++)
        if (scanf("%d", &a[i]) != 1) return 1;

    merge_sort(a, 0, n-1); 

    flag = a[0];
    //printf("%d ",a[0]);
    for(i=1;i<n;i++){
        //printf("%d ",a[i]);
        if(a[i] != flag){
            sum +=1;
            flag = a[i];
        }
    }

    printf("%d\n",sum);


    return 0;
}