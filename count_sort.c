#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

void printArray(int*a, int n){
    for(int i= 0; i<n;i++){
        printf("%d ", a[i]);

    }
    printf("\n");
}

int maixmum(int a[], int n){
    int max = INT_MIN;
    for(int i = 0; i<n; i++){
        if(max < a[i]){
            max = a[i];
        }
    }return max;
}

void countSort(int *a, int n){
    int i, j;

    int max = maixmum(a,n);

    int* count = (int *)malloc((max+1)*sizeof(int));

    for(i=0; i< max+1; i++){
        count[i]= 0;
    }
    for(i=0; i<n; i++){
        count[a[i]]= count[a[i]]+1;
    }
    i=0;
    j=0;
    while(i<= max){
        if(count[i]>0){
            a[j]= i;
            count[i]= count[i]-1;
            j++;
        }else{
            i++;
        }
    }
}
int main(){
    int a[] = {23,34, 56, 35, 344,56,354,78};
    int n= 8;
    printArray(a,n);
    countSort(a, n);
    printArray(a, n);
    return 0;
}