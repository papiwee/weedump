//Write a function isEven(int n) that returns true if the number is even.

#include<iostream>
using namespace std;

bool isEven(int n){
    if (n %2 == 0){
       return true;
    }
    else
        return false;
    
}

int main (){

    int n;

    cout<<"Enter your number: ";
    cin>> n;

    cout<< "The number you enter is "<<boolalpha <<isEven(n)<<" it is an even number";
    return 0;
}