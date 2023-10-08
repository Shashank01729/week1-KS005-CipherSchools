// Formal parameters
// Function prototype

#include<iostream>
using namespace std;

int sum(int a, int b){
    int c;
    c=a+b;

    a=10;
    b=11;

    return c;
}

// int sample(int a, int b, int c){

// }

int sum1(int,int);     // I ahve declared that a function called sum1 exists but the body is not formed yet

int main(){

    int a,b;

    a=3;
    b=5;

    int c;
    cout << a << " " << b << endl;
    // c=sum(3,5);
    c=sum(a,b);
    //  int sum(int a, int b)  // int a -----> a, int b -----> b
    cout << c << endl;
    cout << a << " " << b << endl;     // These values of a,b are after I call the function sum(a,b)

    return 0;
}

int sum1(int a, int b){
    return a+b;
}