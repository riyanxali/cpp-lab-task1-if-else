// Problem 1: Pass or Fail
// A college wants a simple program to check whether a student has passed an examination.
// Task:
// •	Input the student's marks.
// •	If marks are 50 or above, display "Pass".
// •	Otherwise, display "Fail".
// Sample Run:
// Enter marks: 72
// Result: Pass
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the Student marks: ";
    double marks{};
    cin>>marks;
    if (marks>=50)
    {
        cout<<"Pass"<<'\n';
    }
    else{
        cout<<"Fail"<<'\n';
    }
return 0;
}
