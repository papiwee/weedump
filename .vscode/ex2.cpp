#include <iostream>
using namespace std;

int main (){

    int number;
        cout<<"Enter a number: ";
        cin>> number;

    if (number <0){
        cout<<"-";
    }
    else if (number == 0){
        cout<<"zero";
    }
    else if (number > 0){
    
        cout<<"+";
    }
    return 0;
}