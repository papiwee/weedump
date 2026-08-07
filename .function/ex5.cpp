//Write a function square(int n) and call it from main().

#include <iostream>
using namespace std;

int square(int n){
    return n*n;
}

int main (){
int n;
    cout<<"enter the number you want to square: ";
    cin>>n;

    cout<<square(n);

    return 0;
}