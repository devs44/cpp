#include<iostream>
using namespace std;

class Base{
    public:
        int num1;
        virtual void display(void){
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
    Derived *ptr_derived;

    Base b;
    Derived d;

    ptr_base = &d; 
    
    ptr_base->display();


    return 0;
}