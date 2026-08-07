//Write a function printTable(int n) that prints the multiplication table of n.

#include <iostream>
using namespace std;

void printTable(int n){
    for (int i = 1; i<=10; i++){
        int result = n*i;
        cout<<n<<" x "<< i <<" = "<<result<<endl;
    }
}

int main (){
int n;
    cout<<"Enter your n: ";
    cin>>n;

    printTable(n);

    return 0;
}