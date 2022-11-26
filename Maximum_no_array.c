#include<stdio.h>

int max(int *arr, int n){
    int max = 0;
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
        }else{

        }
    }return max;

}


int main(){
    int arr[] = {190,456,1001,423,57,384,28,20};
    printf("The maximum number in this array is %d", max(arr, 8));
    return 0;
}