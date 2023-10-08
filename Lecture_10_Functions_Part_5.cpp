#include<iostream>
using namespace std;

void PrintHi(){             // No parameters are required
    cout << "Hi" << endl;
    return;
}

int sum(int a, int b){     // Formal parameters
    int c;       //  Variables inside particular functions are local (Scope of a variable)

    c=a+b;
    a=500;   // chaning the value inside the function doesn't count

    return c;
}


int main(){
    PrintHi();

    int a,b;
    int c;
    a=3;
    b=5;

    int d;
    d=sum(a,b);       // Actual Parameters
 
    cout << "The sum is equal to " << d << endl;
    cout << "The value of a is " << a << endl;     // Doesn't get affected
    cout << "The value of c is " << c << endl;     // Garbage value
    c=75;
    cout << "The value of c is " << c << endl;

    return 0;
}