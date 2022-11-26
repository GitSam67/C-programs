#include<stdio.h>

int main(){
    int num,original_num,rem,result=0;
    printf("Enter any digit integer:\n");
    scanf("%d", &original_num);
    num = original_num;
    while(num!=0){
        rem=num%10;
        result+=rem*rem*rem;
        num=num/10;
    }
    if(result==original_num)
        printf("%d is an Armstrong number:",original_num);
    else
        printf("%d is not an Armstrong number:",original_num);
    return 0;
}