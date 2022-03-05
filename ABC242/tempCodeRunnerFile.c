// 
// 

#include <stdio.h>
#include <stdlib.h>

void merge_sort (char array[], int left, int right) {
    int i, j, k, mid;
    char work[20005];
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
    char s[20005];
    int n,i,j;

    scanf("%s",s);
    for(i=0;i<200005;i++){
        if(s[i]=='\0'){
            n=i;
            break;
        }
    }

    merge_sort(s, 0, n); 
    for(i=0;i<=n;i++){
        printf("%c",s[i]);
    }
    printf("\n");





    return 0;
}