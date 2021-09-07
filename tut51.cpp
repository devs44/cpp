#include<iostream>
using namespace std;

class Complex{
    int real, imaginary;
    public:
        void getData(){
            cout<<"The real part is "<<real<<endl;
            cout<<"The imaginary part is "<<imaginary<<endl;
        }
        void setData(int a, int b){
            real=a;
            imaginary=b;
        }
};

int main(){
    // Complex c1;
    // Complex *ptr= &c1;
    // Complex *ptr = new Complex;
    // // (*ptr).setData(4,6); is exactly same as 
    // ptr->setData(1,2);  

    // // (*ptr).getData();
    // ptr->getData();


    Complex *ptr = new Complex[4];

    ptr->setData(1,2);  

    ptr->getData();
    return 0;
}