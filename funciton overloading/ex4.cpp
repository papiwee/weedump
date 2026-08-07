/*Write overloaded print functions:

one for int
one for double
one for char*/

#include <iostream>
using namespace std;

void print(int n){
    cout<<n<<endl;
}

void print(double n){
    cout<<n<<endl;
}

void print(char n){
    cout<<n<<endl;
}


int main (){
    
    print(1);
    print(2.3213);
    print('u');

    return 0;
}