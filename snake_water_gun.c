s

g
#include<stdio.h>
#include<stdlib.h>


#include<time.h>

int main(){
    int i=0;
    int won=0;
    int lose=0;
        srand(time(0));
        int num;
        
        char a,b;
        
            printf("Enter 's' for snake, 'w' for water and 'g' gor gun\n");
    
    do{ 
        num = rand()%3 +1;
        if(num==1){
        b = 's';
    }
        if(num==2){
        b = 'w';
    }
        if(num==3){
        b = 'g';
    } 
        scanf("%c", &a);
        
        
        if(a==b){
        printf("Match drawn!\n");
    }
         if(a=='s' && b=='w'){
        printf("You won\n");
        won++;
    }
         if(a=='s' && b=='g'){
        printf("You lose\n");
        lose++;
    }
         if(a=='w' && b=='s'){
        printf("You lose\n");
        lose++;
    }
         if(a=='w' && b=='g'){
        printf("You won\n");
        won++;   
    }
        if(a=='g' && b=='s'){
        printf("You won\n");
        won++;
    }
        if(a=='g' && b=='w'){
        printf("You lose\n");
        lose++;
    }i++;
    }while(i<20);
        printf("You have won %d times and computer has won %d times\n", won, lose);
        if(won>lose){
        printf("Congratulations!! You have won the game with %d more score than the computer..\n", won-lose);
    }
        if(won<lose){
        printf("Better luck next time!! You have lose the game with %d less score than the computer..\n", lose-won);
    }
        if(won==lose){
        printf("Match Drawn!! You both were at tip to tip at every moment..");
    }

    return 0;
}
