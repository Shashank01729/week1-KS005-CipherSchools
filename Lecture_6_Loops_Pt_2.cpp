#include<iostream>
using namespace std;

int main(){
    int a=1;
    // pre increment     ++a;
    // post increment    a++;
    cout << a++ << endl;
    cout << a << endl;

    a=1;
    cout << ++a << endl;
    cout << a << endl;

    int j,k,l;
    j=0;
    k=0;
    l=0;

    cout << j << " " << k << " " << l << endl;
    k=j++;
    cout << j << " " << k << " " << l << endl;
    l=++j;
    cout << j << " " << k << " " << l << endl;


    int i;
    for(i=1;i<101;i++)    // called the update which happens after the iterartion(part of a loop is completed)
    { 
        // block which gets executed everytime
        cout << i << " ";
    }cout << endl;
}