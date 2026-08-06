/*Print numbers with skip
Print numbers from 1 to 20, but skip multiples of 3 using continue*/

#include <iostream>
using namespace std;

int main (){

    for (int i = 1; i <= 20; i ++){
        if (i % 3 == 0){
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}