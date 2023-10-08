// Header
// Body
// Every function has a return value
// void -----> nothing (return type is void)

/*

void printstuff(){
    cout << "Something" << endl;
    return;  // not complusary, it tells about the end of the particular function
}

*/

// Every program starts from the main function

/*
                return value
main function <---------------|
     |                        |
     |-------------> Caller function

*/


#include<iostream>
using namespace std;

void printstuff(){
    cout << "Writing my first function";
}

int sum(int a, int b){
    int c;
    c=a+b;
    return c;
}

int main(){
    printstuff();
    
    int a,b;
    int add_sum;
    a=3;
    b=5;
    add_sum=sum(a,b);
    cout << add_sum << endl;

    return 0;
}