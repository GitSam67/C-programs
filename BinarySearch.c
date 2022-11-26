#include<stdio.h>

// Program using Binary Search Algorithm

int main(){
    int n,low,mid,high,data,arr[50];
    printf("Enter the size of array\n");
    scanf("%d", &n);
    printf("Enter values of array:\n");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the element u wanna search:\n");
    scanf("%d", &data);
    low = 0;
    high = n-1;
    while(low<=high){
        mid = (low+high)/2;
        if(arr[mid]==data){
            printf("The element %d is in %d index", data, mid);
            break;
        }
        else if(arr[mid]<data){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
        if(low>high)
        printf("The element %d was not found !!", data);
        return 0;   
    }