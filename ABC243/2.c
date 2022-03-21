// AC
// 

#include <stdio.h>
#include <stdlib.h>

//マージソート
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
    int n;
    int a[1001];
    int b[1001];
    int i,j;
    int suma=0,sumb=0;

    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        scanf("%d",&b[i]);
    }

    for(i=0;i<n;i++){
        if(a[i]==b[i]){
            suma++;
        }
    }

    merge_sort(a, 0, n-1); 
    merge_sort(b, 0, n-1); 

    i=0;j=0;
    while(1){
        if(a[i]>b[j]){
            j++;
        }else if(a[i]<b[j]){
            i++;
        }else{
            sumb++;
            i++;
            j++;
        }
        if(j==n || i==n){
            break;
        }
    }



    printf("%d\n",suma);
    printf("%d\n",sumb-suma);

    return 0;
}