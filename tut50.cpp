#include<iostream>
using namespace std;



int main(){
    int a=4;
    int* ptr=&a; //contains address of a
    cout<<"The value of a is: "<<*(ptr)<<endl;

    //new keyword
    int *p = new int(40);
    cout<<"The value at p is: "<<*(p)<<endl;

    //new operator
    int *arr= new int[3];
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;
    delete[ ] arr;
    cout<<"the value of arr[0] is "<<arr[0]<<endl;

    //delete operator

    return 0;
}