/*
 Given a positive integer N, display the multiplication table of N up to 10. For
 example, if N is 5, the output should be:
 5 * 1 =5
 5 * 2 =10
 5 * 3 =15
 ...
 5 * 10 = 50
*/
#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter Number : ";
    cin>>number;
    for(int i=1;i<=10;i++){
        cout<<number<<" * "<<i<<" = "<<number*i<<'\n';
    }
    return 0;
}

