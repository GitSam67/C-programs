#include<stdio.h>
#include<string.h>
int main(){
    int t,n,k=0,arr[300];
    char str[100],l,s[300][100];
    scanf("%d",&t);
    while(t>0){
        scanf("%s",str);
        n = strlen(str);
        l = str[n-1];
        printf("%c",l);
        if(l=='a' || l=='e' || l=='i' || l=='o' || l=='u'){
             printf("Case #%d: %s is ruled by Alice.\n",k+1,str);
        }
        else if(l=='y'){
             printf("Case #%d: %s is ruled by nobody.\n",k+1,str);
        }
        else{
             printf("Case #%d: %s is ruled by Bob.\n",k+1,str);
        }
        t--;k++;
    }
    
    return 0;
}