#include <iostream>
using namespace std;
int sum=6;
int main(){
    int a,b,sum;
    cout<<"enter the value of a: "<<endl;
    cin>>a;
    cout<<"enter the value of b: "<<endl;
    cin>>b;
    sum = a+ b;
    cout<<"the sum is: "<<sum<<endl;
    cout<<::sum;
    return 0;
} 