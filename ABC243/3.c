// 
// 

#include <stdio.h>
#include <stdlib.h>

void merge_sort (int array[], int left, int right,int subarray[]) {
    int i, j, k, mid;
    int work[200001];
    int subwork[200001];
    if (left < right) {
        mid = (left + right)/2;
        merge_sort(array, left, mid, subarray);
        merge_sort(array, mid+1, right, subarray);
        for (i = mid; i >= left; i--) { 
            work[i] = array[i]; 
            subwork[i] = i;
        }
        for (j = mid+1; j <= right; j++) {
            work[right-(j-(mid+1))] = array[j];
            subwork[right-(j-(mid+1))] = j;
        }
        i = left; j = right;
        for (k = left; k <= right; k++) {
            if (work[i] < work[j]) { 
                array[k] = work[i++]; 
                subarray[k] = subwork[i];
            }else{
                array[k] = work[j--]; 
                subarray[k] = subwork[j];
            }
        }
    }
}


int main(void){
    int n;
    int x[200001];
    int y[200001];
    int subarray[200001];
    char s[200001];
    int i,j;

    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d %d",&x[i],&y[i]);
        subarray[i]=i;
    }

    scanf("%s",s);
    merge_sort(y, 0, n-1,subarray); 

    for(i=0;i<n;i++){
        printf("y[%d]:%d sub:%d\n",i,y[i],subarray[i]);
    }

    j=0;
    for(i=0;i<n;i++){
        if(y[i]>y[j]){
            j++;
        }else if(y[i]==y[j]){
            if(x[subarray[i]] < x[subarray[j]]){
                if(s[subarray[i] == 'R']){
                    printf("Yes\n");
                    return 0;
                }
            }
            /*if(x[subarray[i]] > x[subarray[j]]){
                if(s[subarray[i] == 'L']){
                    printf("Yes\n");
                    return 0;
                }
            }*/
        }
    }

    printf("No\n");

    return 0;
}