#include<stdio.h>

typedef struct employee{
    char name[20];
    float salary;
}se; 

int main(){
    se e1,e2;
    printf("Type the name of first employee\n");
    scanf("%s", &e1.name);
    printf("Type the salary of first employee\n");
    scanf("%f", &e1.salary);
    printf("Type the name of second employee\n");
    scanf("%s", &e2.name);
    printf("Type the salary of second employee\n");
    scanf("%f", &e2.salary);

    FILE *ptr;
    ptr = fopen("e.txt", "w");
    fprintf(ptr,"%s , %.2f\n", e2.name, e2.salary);
    fprintf(ptr,"%s , %.2f\n", e1.name, e1.salary);
    fclose(ptr);
    return 0;
}