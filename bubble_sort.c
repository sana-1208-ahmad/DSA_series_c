#include<stdio.h>

void printarray(int *a, int n){
    for(int i= 0; i < n; i++){
        printf("%d ", a[i]);
        
    }
    printf("\n");
}
void bubbleSort(int *a, int n){
    int temp;
    int isSorted = 0;
    for (int i = 0; i < n-1; i++){
        printf("working on pass number %d\n", i+1);
        for(int j = 0; j < n-i-1; j++){
            if(a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                
            }
    }
}
}

void bubbleSortAdaptive(int *a, int n){
    int temp;
    int isSorted = 0;
    for (int i = 0; i < n-1; i++){
        printf("working on pass number %d\n", i+1);
        isSorted = 1; // Assume the array is sorted
        for (int j = 0; j < n-i-1; j++){
            if(a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                isSorted = 0; // Found an out-of-order pair, so not sorted
            }
        }
        if(isSorted) {
            return; // If no swaps were made, the array is sorted
        }
    }
}

int main(){
    int a[] = {64, 34, 25, 12, 22, 11, 90};
    int n = 7;
   
    bubbleSort(a, n);
    printarray(a, n);
    return 0;

}