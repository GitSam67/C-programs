#include<stdio.h>
#include<string.h>
int main(){
    float amt[100],total=0;
    int n=0,i=0,x;
    char items[100][100];
    printf("Welcome to super mart!!\n");
    printf("Customer pls press \"1\" if u want to continue or press \"0\" if u finished with \
     the list after entering entities:\n");
    
    printf("Enter the name of item with respective amount:\n");
    while(1){
        scanf(" %[^\n]", &items[i]);// edit conversion code
        scanf("%f", &amt[i]);
        n++;
        i++;
        scanf("%d",&x);
        if(x==0){
            break;
        }
    }
    printf("The total cost of your each %d purchase item is:\n",n);
    printf("ITEM:  AMOUNT:\n");
    for(int i=0;i<n;i++){
        printf("%s ", &items[i]);
        printf("%.2f\n", amt[i]+amt[i]*18/100);
        total+=amt[i]+amt[i]*18/100;
    }
    printf("The Grand total cost of your %d purchase item is %.2f:\n",n,total);
    printf("Thank you for shopping with us! Please do vist next time!!");
    return 0;
}