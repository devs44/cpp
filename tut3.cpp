#include <iostream>
using namespace std;

int a = 40;
void sum(){
    cout<<a; //global variable
}
int main(){
    int a = 50;
    sum();
    cout<<a; //local variable
    return 0;
}