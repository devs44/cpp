#include<iostream>
using namespace std;

class c2;

class c1{
    int val;
    public:
        void intdata(int a){
            val =a;
        }
        void display(void){
            cout<<val<<endl;
        }
    friend void exchange(c1 &,c2 &);
};

class c2{
    int val2;
    public:
        void intdata(int a){
            val2 =a;
        }
        void display(void){
            cout<<val2<<endl;
        }
    friend void exchange(c1 &,c2 &);
};

void exchange(c1 &x, c2 &y){
    int tmp = x.val;
    x.val = y.val2;
    y.val2 = tmp;
}

int main(){
    c1 oc1;
    c2 oc2;

    oc1.intdata(3);
    oc2.intdata(4);
    exchange(oc1,oc2);

    cout<<"The value of c1 after exchanging becomes: "<<oc1.display()<<endl;
    oc1.display();
    cout<<"The value of c2 after exchanging becomes: "<<oc2.display()<<endl;
    oc2.display();

    return 0;
}