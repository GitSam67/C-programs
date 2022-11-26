#include<stdio.h>

int main(){
    int n;
    printf("Enter n of mul table..\n");
    scanf("%d", &n);

    for(int i=0; i<10; i++){
        printf("%d X %d = ", n, i+1);
        printf("%d\n", n*(i+1));
    }
    return 0;
}