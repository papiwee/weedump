#include <iostream>
using namespace std;

int main (){

    int n;
    int sum = 0;
        cout<<"enter you n: ";
        cin>> n;
    for (int i = 0; i <= n; i++){
        sum = sum + i;
    }
        cout<<sum<<endl;
    return 0;
}