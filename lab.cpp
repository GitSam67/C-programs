#include<iostream>

using namespace std;

// Program to check whether a given number is even or odd;

int main(){
    int n;
    cout << "Enter a number:\n";
    cin >> n;
    if(n%2==0){
        cout << "The entered number "<< n << " is Even \n";
    }
    else{
        cout << "The entered number " << n << " is Odd:\n";
    }
    return 0;
}