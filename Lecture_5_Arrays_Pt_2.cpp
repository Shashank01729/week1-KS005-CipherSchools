#include<iostream>
using namespace std;

int main(){
    int arr[10];
    // array indexing starts from 0
    // arr[0],arr[1],...

    // To find value we need array name and index
    // index is a integer types, 2.5 doesn't make sense

    // arr[x+2] ----> x should be an integer

    int a[5];
    cout << "Give 5 integers as input" << endl;
    for(int i=0;i<5;i++){
        cin >> a[i];
    }

    cout << "the 5 given inputs are: " << endl;
    for(int i=0;i<5;i++){
        cout << a[i];
    }cout << endl;

    cout << "Give 10 integers as input" << endl;
    for(int i=0;i<10;i++){
        cin >> arr[i];
    }

    cout << "the 10 given inputs in reverse are: " << endl;
    for(int i=9;i>=0;i--){
        cout << arr[i] << " ";
    }cout << endl;
}