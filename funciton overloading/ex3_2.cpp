/*Write overloaded area functions:

area of a square
area of a rectangle*/

#include <iostream>
using namespace std;

double area(double a){
    return a * a;
}
double area(double a, double b){
    return a*b;
}

int main (){

    cout<<area(2)<<endl;
    cout<<area(3,9)<<endl;

    return 0;
}