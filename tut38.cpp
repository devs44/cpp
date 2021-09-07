#include<iostream>
using namespace std;

class Base{
    int n1;
    public:
        int n2;
        void setdata();
        int getdata1();
        int getdata2();
};
void Base::setdata(void){
    n1=100;
    n2=200;
}
int Base::getdata1(){
    return n1;
}
int Base::getdata2(){
    return n2;
}
class Derived:public Base{
    int n3;
    public:
        void process();
        void display();
};
void Derived::process(void){
    n3=n2*getdata1();
}
void Derived::display(void){
    cout<<"The value of n1 is"<<getdata1()<<endl;
    cout<<"The value of n2 is"<<n2<<endl;
    cout<<"The value of n3 is"<<n3<<endl;
}
int main(){
    Derived d1;
    d1.setdata();
    d1.process();
    d1.display();
    return 0;
}