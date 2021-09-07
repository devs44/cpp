#include<iostream>
using namespace std;


class Complex{
    int a,b;
    public:
        void setData(int n1,int n2){
            a=n1;
            b=n2;
        }
        friend Complex sumComplex(Complex c1,Complex c2);
        void printData(){
            cout<<a<<"+"<<b<<"i"<<endl;
        }
};
Complex sumComplex(Complex c1, Complex c2){
    Complex c3;
    c3.setData((c1.a+c2.a),(c1.b+c2.b));
    return c3;
}
int main(){
    Complex c4,c5,sum;
    c4.setData(4,5);
    c4.printData();

    c5.setData(2,3);
    c5.printData();

    sum=sumComplex(c4,c5);
    sum.printData(); 
    return 0;
}