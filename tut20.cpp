#include<iostream>
using namespace std;

class Employee{
    private:
        int a,b;
    public:
        int c;
        void setData(int a1,int b1);
        void getData(){
            cout<<"The value of a is: "<<a<<endl;
            cout<<"The value of b is: "<<b<<endl;
            cout<<"The value of c is: "<<c<<endl;
        }
};
void Employee :: setData(int a1, int b1){
    a = a1;
    b = b1;
}
int main(){
    Employee Devi;
    Devi.c=60;
    Devi.setData(20,30);
    Devi.getData();  
    return 0;
}