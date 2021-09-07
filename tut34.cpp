#include<iostream>
using namespace std;

class Number{
    int a;
    public:
        Number(){
            a=100;
        };
        Number(int num){
            a=num;
        }
        //when no copy constructor is found, compiler supplies its own 
        //copy constructor
        // Number(Number &obj){
        //     cout<<"Copy constructor called";
        //     a=obj.a;
        // }
        void display(){
            cout<<a<<endl;
        }
};

int main(){
    Number x;
    x.display();
    
    Number y(6);
    y.display();

    Number y1(y); //copy constructor invoked
    y1.display();
    //y1 should resemble y

    Number y3=y;
    y3.display();
    return 0;
}