#include<iostream>
using namespace std;

template <class t>
void swapp(t &a, t&b){
    t temp=a;
    a=b;
    b=temp;
}

template <class t1, class t2>
float funcAverage2(t1 a, t2 b){
    float avg = (a+b)/2.0;
    
    return avg;
}
int main(){
    float a;
    a = funcAverage2(3,4.5);
    cout<<"The average of these numbers is "<<a<<endl;
    int x=5,y=4;
    swapp(x,y);
    cout<<x<<" "<<y<<endl;
    return 0;
}