/*
 To display the pattern like a right angle triangle with a number.
 Sample Output:
 Input number of rows: 5
 1
 12
 123
 1234
 12345
*/
#include<iostream>
using namespace std;
int main(){
    int no_of_rows;
    cout<<"Input number of rows: ";
    cin>>no_of_rows;
    for(int i=1;i<=no_of_rows;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<' ';
        }
        cout<<'\n';
    }
    return 0;
}

