#include<iostream>
using namespace std;
int main(){
    int t,N,c[N],i=1,count=0,z=1,x=1,k=1,stack;
    cin>>t;
    while(t>0){
        cin>>N;
        for(int j=0;j<N;j++){
            cin>>c[j];
        }cout<<"Case #"<<z<<": ";
        for(int i=1;i<=N;i++){
            k = i;count=0;
            for(int j=0;j<i;j++){
                if(k<=c[j]){
                    count++;
                    stack = count;
                }
                if(count==k){
                   break;
                }
                if(j==i-1 && k>2){
                    k--;j=-1;count=0;
                    continue;
                } 
            }
            if(count<=i){
                cout<<stack<<" ";
            }
        }
        t--;z++;count=0;
        cout<<"\n";
    }
    return 0;
}