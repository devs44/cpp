#include<iostream>
using namespace std;

template <class T>
class Num{
    public:
        T data;
        Num(T a){
            data=a;
        }
        void display();
};
template <class T>
void Num<T>::display(){
    cout<<data;
}

template <class T>
void func(T a){
    cout<<a<<endl;
}
void func1(){
    cout<<"Hello"<<endl;
}
template <class T>
void fun1(T a){
    cout<<a<<endl;
}


int main(){
    Num<int> devi(5);
    devi.display();
    func(5);
 
    return 0;
}