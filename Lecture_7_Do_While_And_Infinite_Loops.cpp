// Password manager -----> checks whether the password satisfies the minimum criteria 

#include<iostream>
using namespace std;

int main(){
    int password;

    cout << "Enter the password: ";
    cin >> password;

    while(password<999999){
        cout << "The password doest not meet the required conditions, Please enter the password again";
        cin >> password;
    }
    cout << "The user has now enterred a correct password" << endl;

    // do while
    // doing it once
    // going into while loop
    // do + simple while
    
    do{
        cin >> password;
    }while(password<999999);
 
    int count=0;
    while(1){                            // The condition in the while loop, until it is true, the loop will run
        cout << "chocolates" << endl;
        count++;
        if(count>100){
            break;
        }
    }

}