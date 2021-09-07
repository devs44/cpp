#include<iostream>
using namespace std;

/*
Case 1:
Class B: public A{
    Order of execution of constructor:first A() then B()
};
Class A: public B, public C{
    ORder of execution of constructor:first B() then, C()then, A()
};
Class A:public B, virtual public C{
    order of execution of constructor:first C() then,B() then, A()
};
*/

class Base1{
    int data1;
    public:
        Base1(int i){
            data1=i;
            cout<<"Base1 class constructor called"<<endl;
        }
        void printdataBase1(void){
            cout<<"The value of data is: "<<data1<<endl;
        }
};
class Base2{
    int data2;
    public:
        Base2(int i){
            data2=i;
            cout<<"Base2 class constructor called"<<endl;
        }
        void printdataBase2(void){
            cout<<"The value of data is: "<<data2<<endl;
        }
};
class Derived: public Base1,public Base2{
    int derived1, derived2;
    public:
        Derived(int a, int b,int c, int d): Base1(a), Base2(b){
            derived1=c;
            derived2=d;
            cout<<"Derived class constructor called "<<endl;
        }
        void printDataDerived(void){
            cout<<"The value of derived1 is "<<derived1<<endl;
            cout<<"The value of derived2 is "<<derived2<<endl;
        }
};
int main(){
    Derived Devi(1,2,3,4);
    // Devi.printdataBase1();
    // Devi.printdataBase2();
    Devi.printDataDerived();
    return 0;
}