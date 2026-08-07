/*Write two overloaded functions named show:
one takes int
one takes string*/

#include <iostream>
#include <cstring>
using namespace std;

int show(int a){
    return a;
}

string show(string a){
    return a;
}


int main (){

    cout<<show(1)<<endl;
    cout<<show("hello world")<<endl;

    return 0;
}