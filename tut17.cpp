#include<iostream>
using namespace std;

// inline int product(int x, int y){
//     return x*y+1;
// }
float moneyReceived(int currentMoney, float factor=1.1){
    return currentMoney*factor;
}
int main(){
    // int a,b;
    // cout<<"enter two numbers";
    // cin>>a>>b;
    // cout<<"The product of them is: "<<product(a,b);
    int a=100;
    cout<<"The money is "<<a<<"Interest after one year is: "<<moneyReceived(a)<<endl;
    cout<<"The money after one year is: "<<moneyReceived(a,1.4)<<endl;
    return 0;
}