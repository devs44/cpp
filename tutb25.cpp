#include<iostream>
using namespace std;

class Complex{
    int a,b;
    public:
        void setData(int c1, int c2){
            a=c1;
            b=c2;
        }
        void getData(){
            cout<<"The complex number is "<<a<<" + "<<b<<"i"<<endl;
        }
};
int main(){
    Complex  o1;
    o1.setData(2,3);
    o1.getData();
    return 0;
}