#include<stdio.h>
#include<math.h>

int main(){
    int T,p[10000],r,r1,count=0;
    printf("Input:\n");
    printf("Enter no. of testcases:\n");
    scanf("%d",&T);
    printf("Enter value of p:\n");
     for(int i=0;i<T;i++){
        scanf("%d",&p[i]);
    }printf("Output:\n");
    for(int z=0;z<T;z++){
        if(p[z]>=2048){
            if(p[z]%2048==0){
                count=p[z]/2048;
            }else{
                r1=p[z]%2048;
                count=(p[z]-r1)/2048;
                while(r1!=0){
                    r=r1%2;
                    if(r==1)
                    count++;
                    r1/=2;
                }
            }

        }else{
            while(p[z]!=0){
                r=p[z]%2;
                if(r==1)
                count++;
                p[z]/=2;
            }
        }       printf("%d ",count);
                count=0;
    }
    
    return 0;
}