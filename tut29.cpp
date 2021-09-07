#include<iostream>
using namespace std;


class Complex{
    int a,b;
    public:
    //creating a constructor
    //constructor is a special memeber of function that is same name as of
    //class, used to intialaize the objects of its class.
    //it is automatically invoked whenever an object is created.
        Complex(void); //constructor declaration
        void printdata(){
            cout<<a<<"+"<<b<<"i"<<endl;
        }
};
Complex::Complex(void){ //this is default constructor and it doesnot takes any parameter.
    a=10;
    b=0;
};
int main(){
    Complex c;
    c.printdata();
    return 0;
}

// properties of constructor
// 1.it should be declared in public.
// 2.they are automatically invoked whenever the object is created.
// 3.donot have return types and cannot return values.