#include <iostream>
using namespace std;

double add(double a, double b){
    return a+b;
}

int main (){
double a,b;

cout<<"enter your 2 numbers: ";
cin>>a>>b;

add(a,b);

cout<<add(a,b);
    return 0;
}