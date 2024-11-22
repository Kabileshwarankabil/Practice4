/*
Given a positive integer N, calculate the sum of all even numbers from 1 to N. 
For instance, 
    if N is 10, the sum would be 2 + 4 + 6 + 8 + 10 = 30
*/
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Positive Number : ";
    cin>>num;
    int sum=0;
    for(int i=1;i<=num;i++){
        if(i%2==0){
            sum+=i;
        }
    }
    cout<<"Sum : "<<sum;
    return 0;
}

