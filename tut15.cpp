#include<iostream>
using namespace std;

void g(void);
int sum(int a,int b){
    int c = a +b;
    return c;
}
int main(){
    int num1,num2;
    cout<<"Enter first num "<<endl;
    cin>>num1;
    cout<<"Enter second num "<<endl;
    cin>>num2;
    cout<<"The sum is "<<sum(num1,num2);
    g();
    return 0;
}
void g(){
    cout<<"Hello, good afternoon";
}