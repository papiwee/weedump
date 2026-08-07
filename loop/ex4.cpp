//find the biggest among 3 numbers

#include <iostream>
using namespace std;

int main (){
   int num1, num2, num3;
    cout<<"Enter 3 numbers: ";
    cin>>num1>>num2>>num3;
int maxnum = num1;

    if (num2 > maxnum){
        maxnum = num2;
    }
    if (num3 > maxnum){
        maxnum = num3;
    }

    cout<<"The biggest among the three is: "<<maxnum;

    return 0;
}4