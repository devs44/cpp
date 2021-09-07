#include<iostream>
using namespace std;

class Base{
    public:
        int num1;
        void display(void){
            cout<<"num1: "<<num1<<endl;
        }
};
class Derived:public Base{
    public:
        int num2;
        void display(void){
            cout<<"Num2: "<<num2<<endl;
        }
};
int main(){
    Base *ptr_base;
    Base b;

    Derived *ptr_derived;
    Derived d;  

    ptr_base=&d;

    ptr_base->num1=4;
    ptr_derived->num2=5;

    ptr_base->display();
    ptr_derived->display();
    return 0;
}