/*Write overloaded multiply functions:

multiply(int, int)
multiply(int, int, int)*/

#include <iostream>
using namespace std;

int multiply (int a, int b){
    return a * b;
}
int multiply (int a, int b, int c){
    return a * b * c;
}

int main (){

cout<<multiply(3,2)<<endl;
cout<<multiply(2,3,5)<<endl;

    return 0;
}