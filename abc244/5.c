// 
// 

#include <stdio.h>
#include <stdlib.h>

//マージソート
void merge_sort (int array[], int left, int right) {
    int i, j, k, mid;
    int work[2001];
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
    int n,m,k,s,t,x;
    int u[2001],v[2001];
    int i;

    scanf("%d %d %d %d %d %d",&n,&m,&k,&s,&t,&x);

    for(i=0;i<m;i++){
        scanf("%d %d",&u[i],&v[i]);
    }

    


    return 0;
}