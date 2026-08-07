/*Write overloaded area functions:

area of a square
area of a rectangle*/

#include <iostream>
using namespace std;

double area(double a){
    return a*a;
}

double area(double a, double b){
    return a*b*1/2;
}


int main (){

    cout<<area(5)<<endl;
    cout<<area(5,10)<<endl;

    return 0;
}