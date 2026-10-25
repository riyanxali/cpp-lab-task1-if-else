// Problem 2: Even or Odd
// A teacher wants a program that determines whether a number entered by a student is even or odd.
// Task:
// •	Input an integer.
// •	Use an if-else statement to check whether the number is divisible by 2.
// •	Display "Even" or "Odd".
// Sample Run:
// Enter number: 17
// Result: Odd

#include<iostream>
using namespace std;
int main(){
    cout<<"Enter an Integer: ";
    int num{};
    cin>>num;
    if (num%2==0)
    {
        cout<<"Even\n";
    }
    else{
        cout<<"Odd\n";
    }
return 0;
}