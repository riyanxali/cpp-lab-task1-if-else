// Problem 3: Positive or Negative
// A basic data-entry system needs to identify whether an entered number is positive or negative.
// Task:
// •	Input a number.
// •	If the number is greater than or equal to 0, display "Positive".
// •	Otherwise, display "Negative".
// Sample Run:
// Enter number: -8
// Result: Negative

#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a Number: ";
    int num{};
    cin>>num;
    if (num>=0)
    {
        cout<<"Positive\n";
    }
    else{
        cout<<"Negative\n";
    }
return 0;   
}