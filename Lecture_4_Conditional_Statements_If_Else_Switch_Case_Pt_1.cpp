// A statement is something which is either true or false
// 5<3 is a statement
// 5>3 is a statement

/*
    AND

    0 0   0 
    0 1   0
    1 0   0
    1 1   1

    OR

    0 0   0 
    0 1   1
    1 0   1
    1 1   1
    
*/

#include<iostream>
using namespace std;

int main(){
    int a,b,c,d;
    cout << "Input 4 integers a,b,c and d: " << endl;
    cin >> a >> b >> c >> d;

    // Statement : a>b

    cout << (a>b && c>d) << endl;
    cout << (a>b || c>d) << endl;

    // C++ interprets true as 1
    // C++ interprets false as 0


}


