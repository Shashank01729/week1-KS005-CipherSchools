#include<iostream>
using namespace std;

void swap(int a, int b){
    cout << "Inside Swap" << endl;
    cout << a << " " << b << endl;
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout << a << " " << b << endl;
    cout << "Exiting Swap" << endl;
}

// Passing by reference, value doesn't get copied, same value is used
// void swap(int &a, int &b)

int fun(int &a, int b){
    a=99999;
    b=99999;

    cout << "The values of a and b inside function fun are: " << a << " " << b << endl;
}

int main(){
    int a,b;
    a=4;
    b=6;
    cout << "The values of a and b before Swap: ";
    cout << a << " " << b << endl;
    swap(a,b);
    cout << "The values of a and b after Swap: ";
    cout << a << " " << b << endl;

    fun(a,b);
    cout << "The values of a and b after passing into the function fun are: " << a << " " << b << endl;
    return 0;
}
