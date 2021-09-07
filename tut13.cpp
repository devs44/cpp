#include<iostream>
using namespace std;

int main(){
    // int marks[]={20,30,40};
    // for (int i = 0; i <3; i++)
    // {
    //     cout<<"The value of "<<i<<" is"<<marks[i]<<endl;
    // }
    // int i=0;
    // while (i<3)
    // {
    //     cout<<"The value of "<<i<<" is "<<marks[i]<<endl;
    //     i++;
    // }  
    // int i=0;
    // do
    // {
    //     cout<<marks[i]<<endl;
    //     i++;
    // } while (i<3);
    
    // return 0;


    // pointers  in arrays
    int marks[]={20,30,40};
    int* p = marks;
    // cout<<"The value of marks[0] is\t"<<p<<endl;
    // cout<<"The value of marks[1] is\t"<<(p+1)<<endl;
    // cout<<"The value of marks[2] is\t"<<(p+2)<<endl;
    // cout<<"The value of marks[3] is\t"<<(p+3)<<endl;
    cout<<*(p);
    return 0;
}