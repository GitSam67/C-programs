#include<iostream>

using namespace std;

// Program to make a calculator to perform various operations using switch case;

int main(){
    int a,b;
    char ch;
    cout << "Enter a character to perform operation:\n";
    cout << "Enter + for addition, - for subtraction , * for multiplication and / for divsion:\n";
    cout << "Enter a operator:\n";
    cin >> ch;
    cout << "Enter First number:\n";
    cin >> a;
    cout << "Enter Second number:\n";
    cin >> b;

    switch(ch){
        case '+':
        cout <<a<<" + "<<b<<" = "<<a+b<<"\n";
        break;
        case '-':
        cout <<a<<" - "<<b<<" = "<<a-b<<"\n";
        break;
        case '*':
        cout <<a<<" x "<<b<<" = "<<a*b<<"\n";
        break;
        case '/':
        cout <<a<<" / "<<b<<" = "<<a/b<<"\n";
        break;
        default:
        cout << "Invalid Operator:\n";
        break;
    }
    return 0;
}