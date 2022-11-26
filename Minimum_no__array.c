#include<stdio.h>

int min(int *arr, int n){
    int min = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]<min){
            min = arr[i];
        }else{

        }
    }return min;

}


int main(){
    int arr[] = {190,456,1001,423,57,384,28,20};
    printf("The minimum number in this array is %d", min(arr, 8));
    return 0;
}