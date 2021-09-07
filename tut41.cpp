#include<iostream>
using namespace std;

class Base1{
    protected:
        int base1int;
    public:
        void set_base1int(int a){
            base1int = a;
        }
        
};
class Base2{
    protected:
        int base2int;
    public:
        void set_base2int(int b){
            base2int = b;
        }
        
};
class Derived: public Base1,public Base2{
    public:
        void show(){
            cout<<base1int<<endl;
            cout<<base2int<<endl;
            cout<<"The sum is"<<(base1int+base2int)<<endl;
        }
};
//the inherited derived class will look something likes this
// data members
    // base1int protected
    // base2int protected
//member functions
// set_base1int--public
//set_base2int--public
// show()--public
int main(){
    Derived d;
    d.set_base1int(4);
    d.set_base2int(5);
    d.show();
    return 0;
}