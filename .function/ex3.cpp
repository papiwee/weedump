//Write a function maxOfTwo(int a, int b) that returns the larger number.

#include <iostream>
using namespace std;

int maxoftwo(int a, int b){
    if (a>b){
        return a;
    }
    else 
    return b;
}

int main (){

    int a, b;
    cout<<"Enter 2 numbers to find which is larger: ";
    cin>>a>>b;

    cout<<maxoftwo(a,b)<<" is the larger nunber";
    return 0;
}