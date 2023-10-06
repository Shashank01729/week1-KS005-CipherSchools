#include<iostream>
using namespace std;

int main(){
    int i;
    i=1;    // initialization
    while(i<101){    // condition
        cout << i << " ";  // loop
        i++;  // update
    }cout << endl;

    int input;
    // guess the number 65
    // the user has 100 chances
    i=100;
    for(i=1;i<101;i++){
        cin >> input;
        if(input==65){    // only takes place if the input is exactly 65
            cout << "congrats you have guessed correct";
            break;
        }
    }
}