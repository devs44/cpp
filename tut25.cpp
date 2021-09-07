#include<iostream>
using namespace std;


class Employee{
    int id;
    int salary;
    public:
        void setId(void){
            salary=122;
            cout<<"Enter id of employee:\n ";
            cin>>id;
        }
        void getId(void){
            cout<<"The id of the employee is "<<id;

        }
};
int main(){
    // Employee  harry,devi;
    // harry.setId();
    // harry.getId();

    Employee fb[2];
    for (int i = 0; i < 2; i++)
    {
       fb[i].setId();
       fb[i].getId();

    }
    

    return 0;
}