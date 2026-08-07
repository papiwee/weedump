/*Grade calculator
Input a score from 0 to 100 and print:

A: 90–100
B: 80–89
C: 70–79
D: 60–69
F: below 60*/

#include <iostream>
using namespace std;

int main (){
int grade;

cout<<"Enter your grade: ";
cin>>grade;

if (grade >= 90 || grade==100){
    cout<<"A";
}
else if (grade>=80 || grade == 89){
    cout<<"B";
}
else if (grade>=70 || grade ==79){
    cout<<"C";
}
else if (grade>=60 || grade ==69){
    cout<<"D";
}
else if (grade<60){
    cout<<"failed";
}
}