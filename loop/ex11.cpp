/*Stop early
Print numbers from 1 upward, but stop when the number reaches 50 using break.*/

#include <iostream>
using namespace std;

int main (){

    for (int i = 1; i <= 100; i++){
        cout<<i<< endl;
        if (i==50){
        break;
    }
}


    return 0;
}