// Problem 4: Voting Eligibility
// A system needs to determine whether a person is eligible to vote based on age.
// Task:
// •	Input the person's age.
// •	If the age is 18 or above, display "Eligible to vote".
// •	Otherwise, display "Not eligible to vote".
// Sample Run:
// Enter age: 20
// Result: Eligible to vote

#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the person's age: ";
    int age{};
    cin>>age;
    if (age>=18)
    {
        cout<<"Eligible to Vote\n";
    }
    else{
        cout<<"Not eligible to vote\n";
    }
return 0;   
}