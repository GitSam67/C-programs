#include<stdio.h>
#include<string.h>

int main(){
    printf("Hello guys in this auspicious session i will create a revolutionay step towards technology!!\n");
    printf("You have to enter your respective birth details and i will guess the day which you were born, Isn't it amazing!!\n");
    printf("Let us start.. \n");
    int year[4],month,date,num,pal,c;
    
    printf("Enter your year of birth(in digits) one by one\n");
    for(int i=0; i<4; i++){
    printf("Enter digit of digitplace %d of year only\n", i+1);
    scanf("%d", &year[i]);
    }
    printf("Enter your month of birth(in digits(0-12))\n");
    scanf("%d", &month);
    
    printf("Enter your date of birth(in digits)\n");
    scanf("%d", &date);
    
    printf("Your date of birth according to entered data is %d/%d/", date,month);        
    for(int i=0; i<4; i++){
        printf("%d", year[i]);
    }printf("\n");
    if(month==1){
        num = 6;
    }
    if(month==2){
        num = 2;
    }
    if(month==3){
        num = 2;
    }
    if(month==4){
        num = 5;
    }
    if(month==5){
        num = 0;
    }
    if(month==6){
        num = 3;
    }
    if(month==7){
        num = 5;
    }
    if(month==8){
        num = 1;
    }
    if(month==9){
        num = 4;
    }
    if(month==10){
        num = 6;
    }
    if(month==11){
        num = 2;
    }
    if(month==12){
        num = 4;
    }
    else{
        
    }
    
    
    if(year[2]==0 && year[1]==9){
        pal = 1;
    }
    if(year[2]==1 && year[1]==9){
        pal = 6;
    }
    if(year[2]==2){
        pal = 5;
    }
    if(year[2]==3){
        pal = 3;
    }
    if(year[2]==4){
        pal = 2;
    }
    if(year[2]==5){
        pal = 0;
    }
    if(year[2]==6){
        pal = 6;
    }
    if(year[2]==7){
        pal = 4;
    }
    if(year[2]==8){
        pal = 3;
    }
    if(year[2]==9){
        pal = 1;
    }
    if(year[2]==0 && year[0]==2){
        pal = 0;
    }
    if(year[2]==1 && year[0]==2){
        pal = 5;
    }
    else{
        
    }
    
    int n = year[3];

    int a = year[2];
    if(a%2==0 && n==0){
        c = 0;
    }
    if(a%2==0 && n==1){
        c = 0;
    }
    if(a%2==0 && n==2){
        c = 0;
    }
    if(a%2==0 && n==3){
        c = 0;
    }
    if(a%2==0 && n==4){
        c = 1;
    }
    if(a%2==0 && n==5){
        c = 1;
    }
    if(a%2==0 && n==6){
        c = 1;
    }
    if(a%2==0 && n==7){
        c = 1;
    }
    if(a%2==0 && n==8){
        c = 2;
    }
    if(a%2==0 && n==9){
        c = 2;
    }
    if(a%2!=0 && n==0){
        c = 0;
    }
    if(a%2!=0 && n==1){
        c = 0;
    }
    if(a%2!=0 && n==2){
        c = 0;
    }
    if(a%2!=0 && n==3){
        c = 0;
    }
    if(a%2!=0 && n==4){
        c = 1;
    }
    if(a%2!=0 && n==5){
        c = 1;
    }
    if(a%2!=0 && n==6){
        c = 1;
    }
    if(a%2!=0 && n==7){
        c = 1;
    }
    if(a%2!=0 && n==8){
        c = 2;
    }
    if(a%2!=0 && n==9){
        c = 2;
    }
    else{
        
    }

    int total = date + num + pal + n + c;
    int final = total%7;

    if(final==0){
        printf("SUNDAY\n");
        printf("Blissful!! U were born on the day which is known by Sun's day\n");
    }
    if(final==1){
        printf("MONDAY\n");
        printf("Peaceful!! U were born on the day which is known by Moon's day\n");
    }
    if(final==2){
        printf("TUESDAY\n");
        printf("Loving!! U were born on the day which is known by Tiw's day\n");
    }
    if(final==3){
        printf("WEDNESDAY\n");
        printf("Powerful!! U were born on the day which is known by Woden's day\n");
    }
    if(final==4){
        printf("THURSDAY\n");
        printf("Knowledgeful!! U were born on the day which is known by Thor's day\n");
    }
    if(final==5){
        printf("FRIDAY\n");
        printf("Pure!! U were born on the day which is known by Frey's day\n");
    }
    if(final==6){
        printf("SATURDAY\n");
        printf("Merciful!! U were born on the day which is known by Saturn's day\n");
    }
    else{
        
    }


    return 0;
}