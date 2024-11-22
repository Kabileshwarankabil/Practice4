/*
Print even numbers between 0 and 10
*/
#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<=10;i++){
        if(i%2==0){
            cout<<i<<'\n';
        }
    }
    return 0;
}

