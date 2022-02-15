#include <stdio.h>

int main(void){
    int A[205], n, i, count = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
		if (scanf("%d", &A[i]) != 1) return 1;

    while(1){
        for(i=0;i<n;i++){
            if((A[i]%2) != 0){
                printf("%d\n",count);
                return 0;
            }
            A[i] /= 2;
        }
        count++;
    }

    return 0;
}