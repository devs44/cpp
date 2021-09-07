#include<iostream>
using namespace std;

template <class t1=int, class t2=float, class t3=char>
class Harry{
    public:
        t1 a;
        t2 b;
        t3 c;
        Harry(t1 x, t2 y, t3 z){
            a=x;
            b=y;
            c=z;
        }
        void display(){
            cout<<a<<endl;
            cout<<b<<endl;
            cout<<c<<endl;
        }
};
int main(){
    Harry<> h(6,4.4,'D');
    h.display();
    Harry<int,char,char> d(2,'D','E');
    d.display();
    return 0;
}