#include<iostream>
using namespace std;

// int factorial(int n){
//     if(n<=1){
//         return 1;
//     }
//     return n*factorial(n-1);
// }
// int main(){
//     int a;
//     cout<<"Enter any number"<<endl;
//     cin>>a;
//     cout<<"The factorial of this number is: "<<factorial(a)<<endl;
//     return 0;
// }

int fibonacci(int n){
    if(n<2){
        return 1;
    }
    return fibonacci(n-2)+ fibonacci(n-1);
}
int main(){
    int num;
    cout<<"Enter the position of fibonacci to find out the number: ";
    cin>>num;
    cout<<"The fibonacci number in this position "<<num<<"is "<<fibonacci(num);
    return 0;
}