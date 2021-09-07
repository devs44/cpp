#include<iostream>
using namespace std;

//deconstructor doesnot takes an argument and doesnot return any value
int count=0;
class num{
    public:
        num(){
            count++;
            cout<<"This is the time when constructor is called"<<count<<endl;
        }
        ~num(){
            cout<<"This is the time when deconstructor is called"<<count<<endl;
            count--;
        }
};
int main(){
    cout<<"We are inside main funtion"<<endl;
    cout<<"Creating first objects n1"<<endl;
    num n1;
    {
        cout<<"Entering this block";
        cout<<"Creating two more objects"<<endl;
        num n2,n3;
        cout<<"Exiting this block";
    }
    cout<<"back to mail"<<endl;
    return 0;
}