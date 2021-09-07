#include<iostream>
using namespace std;

// call by reference
// void numSwap(int* a, int* b){
//     int temp = *a;
//     *a =*b;
//     *b = temp;
// }
// int main(){
//     int x=4, y=5;
//     cout<<"Before swap the value of x is "<<x<<endl;
//     cout<<"The value of y is "<<y<<endl;
//     numSwap(&x,&y);
//     cout<<"The value of x is "<<x<<endl;
//     cout<<"The value of y is "<<y<<endl;
//     return 0;
// }


// call by value
// void numSwap(int x, int y){
//     int temp = x;
//     x = y;
//     y = temp;
// }
// int main(){
//     int a=4,b=5;
//     cout<<"Before swaping, a is "<<a<<endl;
//     cout<<"b is "<<b<<endl;
//     numSwap(a,b);
//     cout<<"After swapping, a is "<<a<<endl;
//     cout<<"b is "<<b<<endl;
//     return 0;
// }