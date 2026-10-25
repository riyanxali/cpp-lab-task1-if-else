// Problem 5: Find the Greater Number
// A simple comparison program is required to determine which of two numbers is greater.
// Task:
// •	Input two numbers.
// •	Use if-else to compare them.
// •	Display the greater number.
// •	If both numbers are equal, display "Both numbers are equal".
// Sample Run:
// Enter first number: 45
// Enter second number: 31
// Result: 45 is greater

#include<iostream>
using namespace std;
int main(){
    cout<<"Enter first number: ";
    int num1{};
    cin>>num1;
    cout<<"Enter second number: ";
    int num2{};
    cin>>num2;
    if (num1>num2)
    {
        cout<<"Result: "<<num1<<" is greater\n";
    }
    else if (num1==num2)
    {
        cout<<"Both numbers are equal\n";
    }
    else{
        cout<<"Result: "<<num2<<" is greater\n";
    }
return 0;   
}