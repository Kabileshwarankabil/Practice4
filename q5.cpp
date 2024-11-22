/*
Given a positive integer N, calculate the factorial (N!), which is the product of all
integers from 1 to N. 
For example, 
    if N is 5, 
    then N! (factorial) is 5 * 4 * 3 * 2 * 1 = 120
*/
#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter a Number : ";
    cin>>number;
    int factorial=1;
    for(int i=number;i>1;i--){
        factorial*=i;
    }
    cout<<"Factorial of "<<number<<" is "<<factorial;
    return 0;
}

