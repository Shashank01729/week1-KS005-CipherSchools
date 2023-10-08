#include<iostream>
using namespace std;

int compare(int a, int b){         // Compares 2 integers and returns the greatest
    int c;
    if(a>b){
        c=a;
    }
    else{
        c=b;
    }

    // Now c will store maximum of a and b
    
    return c;
}


// int compare(int a, int b){  
//     if(a>b){
//         return a;
//     }
//     else{
//        return b;
//     }
// }


// Using multiple return statements
// Guess the number
int Guess(int a, int b){  
    if(a==5){
        return 1;
    }
    return 0;
}


int sum(int a, int b){
    int c;
    c=a+b;
    return c;
}


int main(){

    int a,b;
    int c;
    a=3;
    b=5;
    c=sum(a,b);
    cout << c << endl;

    return 0;
}
