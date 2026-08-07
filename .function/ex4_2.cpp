//Write a function isEven(int n) that returns true if the number is even.
#include <iostream>
using namespace std;

bool isEven(int n){
    return (n %2 ==0);
}


int main (){

    int n;

    cout<<"Enter your n: ";
    cin>>n;

    if (isEven(n)){
        cout<<"it is an even number";
    }
    else{
        cout<<"it is an odd number";
    }


    return 0;
}