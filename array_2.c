#include<stdio.h>

void display(int arr[], int n){
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int indInsertion(int arr[], int size, int element, int capacity, int index){
    int count ;
    if(size>= capacity){
        return -1;} // Array is full
        for(int i = size-1; i < count; i++){
            arr[i+1] = arr[i];

        }
    arr[index] = element;
    return 1; // Insertion successful
    
}
int main(){
    int arr[100] = {1, 4, 5, 10, 57, };
    int size = 2, element = 46, index= 4;
    display(arr, size);
    indInsertion(arr, size, element, 100, index); 
    size +=1;
     display(arr, size); 

    return 0;
}

