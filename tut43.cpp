#include<iostream>
using namespace std;

class Base1{
    public:
        void greet(){
            cout<<"How are you"<<endl;
        }
};
class Base2{
    public:
        void greet(){
            cout<<"kasto xau"<<endl;
        }
};
class Derived: public Base1, public Base2{
    int a;
    public:
        void greet(){
            Base1::greet();
            Base2::greet();
        }
};
class B{
    public:
        void say(){
            cout<<"Hello world"<<endl;
        }
};
class D:public B{
    int a;
    public:
        void say(){
            cout<<"Hello beautiful"<<endl;
        }
};
int main(){
    Base1 base1obj;
    Base2 base2obj;
    base1obj.greet();
    base2obj.greet();
    Derived d;
    d.greet();
    B b;
    D d;
    b.say();
    d.say();
    return 0;
}