#include<iostream>
using namespace std;

int main(){
    float a,b;
    cout << "Give 2 floating point numbers as input: " << endl;
    cin >> a >> b;   // 1 2
    if(a>0.01 && b>a){
        cout << "The condition in if statement is correct"; // will only be printed
    }

    if(a>0.01 || b>a){
        cout << "The condition in if statement is correct"; // will only be printed
    }
    else{
        cout << "The condition is false";
    }

    int marks;
    cout << "Student, please enter the marks to calculate the grade : ";
    cin >> marks;

    if(marks>90){
        cout << "A";
    }
    if(marks<90 && marks>80){
        cout << "B";
    }
    if(marks<80 && marks>70){
        cout << "C";
    }
    if(marks<70){
        cout << "Pass";
    }

    // We will use else if (When bunch of statements needed)

    if(marks>90){
        cout << "A";
    }
    else if(marks>80){
        cout << "B";
    }
    else if(marks>70){
        cout << "C";
    }
    else{
        cout << "Pass";
    }


    int m,n,o,p;
    cin >> m >> n >> o >> p;

    if(m>n && o>p){
        cout << "HaHa";
    }
    else if(m>n && o<p){
        cout << "HeHe";
    }
    else{
        cout << "HoHo";
    }

    int x;
    cout << "Enter a integer x: ";
    cin >> x;
    switch(x){
        case 1:
            cout << "The value of x is 1" << endl;
            break;
        case 2:
            cout << "The value of x is 2" << endl;
            break;
        case 3:
            cout << "The value of x is 3" << endl;
            break;
        default:
            cout << "Default will always be printed.";
    }
    
}