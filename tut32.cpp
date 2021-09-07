#include<iostream>
using namespace std;



class Simple{
    int data1;
    int data2;
    public:
        Simple(int a, int b=9){
            data1 = a;
            data2 = b;
        }
    void printData(){
        cout<<data1<<"and"<<data2<<endl;
    }
};

int main(){
    Simple S(1);
    S.printData();
    return 0;
}