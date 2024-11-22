/*
Display a text (“Hello World!”) 5 times
*/
#include<iostream>
using namespace std;
int main(){
    // using for loop
    /*
    for(int i=0;i<5;i++){
        cout<<"Hello World\n";
    }
    */

   // using while loop
   /*
   int i=1;
   while(i<=5){
    cout<<"Hello World \n";
    i++;
   }
   */

  // using do while loop
  int i=1;
  do{
    cout<<"Hello World \n";
    i++;
  }while(i<=5);
    return 0;
}