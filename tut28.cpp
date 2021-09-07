#include<iostream>
using namespace std;

class Y;

class X{
    int num1;
    public:
        void setValue(int value){
            num1=value;
        }
    friend void sum(X, Y);
};

class Y{
    int num2;
    public:
        void setValue(int value){
            num2=value;
        }
    friend void sum(X , Y);
};

void  sum(X o1, Y o2){
    cout<<o1.num1+o2.num2;
}

int main(){
    X x1;
    x1.setValue(5);

    Y y1;
    y1.setValue(6);

    sum(x1,y1);
    return 0;
}