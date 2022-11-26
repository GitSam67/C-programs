#include<stdio.h>

struct student{
    char name[20]; 
    char address[50]; 
    int phone_number; 
    int enrollment_number; 
    char branch[10];
}s[3];

int main(){
    for(int i=1;i<=3;i++){
   printf("Enter name of student %d:\n", i);
   scanf("%s",s[i].name);
   printf("Enter address of student %d:\n", i);
   scanf("%s",s[i].address);
   printf("Enter phone number of student %d:\n", i);
   scanf("%d",&s[i].phone_number);
   printf("Enter enrollment number of student %d:\n", i);
   scanf("%d",&s[i].enrollment_number);
   printf("Enter branch of student %d:\n", i);
   scanf("%s", s[i].branch);

    }
    for(int i=1;i<=3;i++){
   printf("The name of student is %d:", i);
   printf("%s\n",s[i].name);
   printf("The address of student is %d:", i);
   printf("%s\n",s[i].address);
   printf("The phone number of student is %d:", i);
   printf("%d\n",s[i].phone_number);
   printf("The enrollment number of student is %d:", i);
   printf("%d\n",s[i].enrollment_number);
   printf("The branch of student is %d:", i);
   printf("%s\n",s[i].branch);

    }
    return 0;
}