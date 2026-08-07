/*Simple menu program
Make a menu:
1: add
2: subtract
3: multiply
4: divide
Use switch to perform the selected operation.*/

#include <iostream>
using namespace std;

int main (){

    int num;
    double a, b;
    double sum, sub, multi, divide;
    
do
{
    cout<<"Menu\n";
    cout<<"1: Add\n2: subtract\n3: multiply\n4: divide\n5: exit\n";
    cout<<"Enter the number you would like to use: ";
    cin>> num;

    switch (num){
        case 1: 
        cout<<"Enter your 2 numbers you would like to add: ";
        cin>> a>> b;
            sum = a + b;
        cout<<"The sum is: "<<sum<<endl;
    break;
        case 2:
        cout<<"Enter the 2 numbers you would like to subtract: ";
        cin>> a>> b;
            sub = a - b;
        cout<<"The difference is: "<< sub<<endl;
    break;
        case 3:
        cout<<"Enter the 2 numbers you would like to multiply: ";
        cin>>a>>b;
            multi = a*b;
        cout<<"The product is: "<<multi<<endl;
    break;
        case 4:
        cout<<"Enter the numbers you want to divide: ";
        cin>>a>>b;
            divide = a/b;
        cout<<"The quotient is: "<<divide<<endl;
    break;
        case 5:
        cout<<"now exiting\n";
        return 0;
    default:
      cout<<"Invalid choice";
    
    }
    
} while (num != 5);


    return 0;
}