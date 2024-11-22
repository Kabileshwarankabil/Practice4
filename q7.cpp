/*
Given an integer num, count the number of digits in num. For example, if num is
12345, the output should be 5
*/
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter Number : ";
    cin>>num;
    int no_of_digit=0;
    while(num>0){
        no_of_digit++;
        num/=10;
    }
    cout<<"No of digit : "<<no_of_digit;
    return 0;
}

