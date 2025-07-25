#include <stdio.h>
int linearSearch(int arr[], int size, int element){
    for(int i = 0 ; i < size; i++){
        if(arr[i]== element){
            return i;

        }
    }
    return -1; // Element not found

}

int binarySearch(int arr[], int size, int element){
    int low, mid, high;
    low = 0;
    high = size - 1;

    while(low<= high){
        mid = (low + high)/2;
        if(arr[mid] == element){
            return mid; // Element found
        }
        if(arr[mid] < element){
            low = mid + 1; // Search in the right half
        }else{
            high = mid - 1; // Search in the left half

    }
    
}
    return -1; // Element not found


}

int main(){
    int arr[]= { 1,34,45,56,76,46,689,8888};
    int size = sizeof(arr)/sizeof(int);
    int element = 88;
    int searchIndex = binarySearch(arr, size, element);
    printf("The element %d was found at index %d \n", element, searchIndex);
    return 0;
}