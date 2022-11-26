#include<stdio.h>

int binarySearch(int a[], int n, int l, int h){
    if(l<=h){
    int m = (l + h)/2;
        if(a[m]==n){
            return m;
        }
        else if(a[m]<n){
            return binarySearch(a,n,m+1,h);
        }
        else{
            return binarySearch(a,n,l,m-1);
        }
    }
    if(l>h)
    return -1;
}

int main(){
    int arr[] = {1,4,6,9,10,16,20};
    printf("The position of element is: %d",binarySearch(arr,20,0,6));
    return 0;
}