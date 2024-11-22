/*
Given an integer num, reverse the digits. For example, if num is 12345, the
output should be 54321.
*/
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter Number : ";
    cin>>num;
    int reverse_num=0;
    while(num>0){
        int last_digit=num%10;
        reverse_num=reverse_num*10+last_digit;
        num/=10;
    }
    cout<<"Reverse Number : "<<reverse_num;
    return 0;
}

