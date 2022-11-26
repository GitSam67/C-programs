#include<stdio.h>

// Program of Linear Search Algorithm

int main(){
    int data,i=0,n,arr[50],c=0;
    printf("Enter the size of array\n");
    scanf("%d", &n);
    printf("Enter values of array:\n");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the element u wanna search:\n");
    scanf("%d", &data);
    for(i=0;i<n;i++){
        if(arr[i]==data){
            printf("The element is in %d index of array \n", i);
            c++;
        }
    }
    printf("Element %d has %d count in array\n", data, c);
    if(c==0)
    printf("The element %d was not found !!", data);
    return 0;
}