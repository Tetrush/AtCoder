// AC
// 

#include <stdio.h>
#include <stdlib.h>

//マージソート
void merge_sort (char array[], int left, int right) {
    int i, j, k, mid;
    char work[10];
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
    char s[4];
    char t[4];
    int i;
    int error = 0;

    scanf("%c %c %c\n",&s[0],&s[1],&s[2]);
    scanf("%c %c %c\n",&t[0],&t[1],&t[2]);

    for(i=0;i<3;i++){
        if(s[i] != t[i]){
            error++;
        }
    }


    merge_sort(s, 0, 2); 
    merge_sort(t, 0, 2); 

    for(i=0;i<3;i++){
        if(s[i]!=t[i]){
            printf("No\n");
            return 0;
        }
    }

    if(error%2==0 && error !=0){
        printf("No\n");
        return 0;
    }

    printf("Yes\n");

    


    return 0;
}