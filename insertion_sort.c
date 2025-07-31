#include<stdio.h>

void printArray(int *a, int n){
    for(int i = 0; i < n; i++){
        printf(" %d ", a[i]);
    }
    printf(" \n");
}

void insertionSort(int *a, int n){
    int key, j;
    for (int i = 1; i < n; i++){
        key = a[i];
        j = i - 1;
        while(j >= 0 && a[j] > key){
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }
}

int main(){
    int a[]={13,24,4,50,24,4564,232,45,67,23,56,78,35,56};
    int n = 14;
    printArray(a, n);
    insertionSort(a, n);
    printArray(a, n);
    return 0;
}