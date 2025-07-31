#include<stdio.h>

void printArray(int *a, int n){
    for(int i=0; i<n; i++){
        printf("%d", a[i]);

    }
    printf("\n");
}

void selectionSort(int *a, int n){
    int indexOfMin, temp;
    for(int i=0; i<n; i++){
        indexOfMin = i; // Assume the first element is the minimum
        for(int j=i+1; j<n; j++){
            if(a[j] < a[indexOfMin]){
                indexOfMin = j; // Update the index of the minimum element
            }
        }
        temp = a[i];
        a[i] = a[indexOfMin];
        a[indexOfMin] = temp; // Swap the found minimum element with the first element

    }
}

int main(){
    int a[] = {45,65,3,12,34};
    int n = 5;
    printArray(a, n);
    selectionSort(a, n);
    printArray(a, n);
    return 0;
}