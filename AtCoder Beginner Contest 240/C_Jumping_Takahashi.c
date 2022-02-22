// RE
// https://atcoder.jp/contests/abc240/tasks/abc240_c

#include <stdio.h>


void merge_sort (int array[], int left, int right) {
    int i, j, k, mid;
    int work[10];
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

int checksum(int *c, int i, int target, int sum, int n, int *f){
    if((i>=n-1 && sum+c[i] == target)||(i==n-1 && sum == target)){
        //printf("c[%d]:%d\n",i,sum+c[i]);
        *f = 1;
        //printf("flag:%d\n",*f);
        return 1;
    }else if(i==n){
        //printf("not found:%d\n",sum);
        return 0;
    }else if(sum+c[i] > target){
        //printf("c[%d]:%d over:%d\n",i,c[i],sum+c[i]);
        if(checksum(c,i+1,target,sum,n,f)!=0){
            return 0;
        }else{
            return 1;
        }
    }else{
        //printf("c[%d]:%d less:%d\n",i,c[i],sum+c[i]);
        while(i<n){
            if(checksum(c,i+1,target,sum+c[i],n,f)!=0){
                i++;
            }else{
                //printf("return\n");
                return 1;
            }
        }
    }
    return 0;
}


int main(void){
    int n,a[105],b[105],x;
    int i,*f,flag;
    int sumz=0;
    int c[105],d[105];
    flag = 0;
    f = &flag;
    scanf("%d %d",&n,&x);
 
    for (i=0;i<n;i++){
        scanf("%d %d", &a[i],&b[i]);
        sumz += a[i];
        c[i] = b[i]-a[i];
    }
    merge_sort(c, 0, n-1);
    i=0;
    while(i<n){
        d[n-i-1] = c[i];
        i++;
    }
    //printf("target:%d\n",x-sumz);
    if(checksum(d,0,x-sumz,0,n,f)!=0)

    if(flag == 0){
        printf("No\n");
    }else{
        printf("Yes\n");
    }

 
    return 0;
}