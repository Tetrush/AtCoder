#include <stdio.h>
#include <string.h>

//配列受け取り　これは配列に入れた2進数を1ビット加算するもの
int binary_minus(int *s,int i){
    s[i]+=1;
    //printf("s[%d]=%d\n",i,s[i]);
    if(s[i]==2){
        s[i] = 0;
        binary_minus(s,i+1);
    }
    return 0;
}

//配列i番目以降を1こずつ後ろにずらす。
int shiftArray(int *s,int i){
    int temp;
    int j;
    j=i;
    while(s[j+1]!='\x0'){
        temp=s[j+1];
        s[j+1]=s[j];
        j++;
    }
    s[j+1]=s[j];
    s[j+2]='\x0';

    return 0;
}

//マージソート
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

//フィボナッチ数を返す関数
int fibonacci(int n){
    int f,fdash,i;
    f=1;fdash=0;
    for(i=1;i<n;i++){
        f += fdash;
        fdash = f-fdash;
    }
    return f;
}

int main(void){
    int n;

    //二次元配列の宣言
    int s[5][10] ={"ab","cd","ef","gh"};


    //n個のスペース区切りの入力
    for (int i = 0; i < n; i++)
        if (scanf("%d", &s[i]) != 1) return 1;
    
    //関数への配列渡し(1次配列)
    binary_minus(s,0);

    //マージソート(配列,開始位置,終了位置)
    merge_sort(s, 0, 9); 

    return 0;
}

//とても長いintの宣言
 long long int x,y,z;