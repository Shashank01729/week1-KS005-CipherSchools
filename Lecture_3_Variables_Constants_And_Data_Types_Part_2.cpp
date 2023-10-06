#include<iostream>
using namespace std;

int main(){
    // Declare 2 variables and then assogn them values 3,5 and then add them 
    int a,b;
    int c;
    int d;

    a=3;
    b=5;
    c=a+b;

    cout << c << endl;   // "endl" in c++ gives newline

    //  Assigning value while it is being declared
    int x=3;
    int y=5;

    cout << x+y << endl; // instead of using 3rd variable to print
    cout << "a+b" << endl; 

    // Instead of using multiple cout's
    cout << c << endl << x+y << endl << "a+b" << endl;

    return 0;
}      

