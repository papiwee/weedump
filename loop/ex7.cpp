//create multiplicaiton table using for loop

#include <iostream>
using namespace std;

int main (){
int num;
int multi;
    cout<<"Enter number for multiplication: ";
    cin>> num;

for (int i = 0; i<=10; i++){
multi = num*i;
cout<<multi<<endl;
}



    return 0;
}