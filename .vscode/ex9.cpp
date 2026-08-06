//count the digits

#include <iostream>
using namespace std;

int main (){

    int num;
    int count = 0;

cout<<"Enter you number: ";
cin>>num;4

    while (num != 0){
        num = num/10;
        count++;
    }

    cout<<"There are "<<count<<" digits";

    return 0;
}