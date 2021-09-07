#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    // cout<<"This is control structure";
    // int age;
    // cout<<"Tell me your age";
    // cin>>age;
    // if(age<18){
    //     cout<<"You cannot come in party";
    // }
    // else if(age==18){
    //     cout<<"You can come to the party";
    // }
    // else{
    //     cout<<"You can come to the party";
    // }

    int age;
    cout<<"Enter your age: ";
    cin>>age;

    // if ((age<18) && (age>0)){
    //     cout<<"You can not come to my party";
    // }
    // else if(age==18){
    //     cout<<"You are a kid and you will get a kid pass";
    // }
    // else if(age<1){
    //     cout<<"You are not yet born";
    // }
    // else{
    //     cout<<"You can come to the party";
    // }
    // if((age<18) && (age==1)){
    //     cout<<"You cannot come to party";
    // }
    // else if(age==18){
    //     cout<<"You arenot born yet";
    // }
    // else{
    //     cout<<"You can come to the party";
    // }
    switch (age)
    {
    case 18:
        cout<<"You are 18";
        break;
    case 20:
        cout<<"You are 20";
        break;
    default:
        break;
    }
    cout<<"Thanku";
    
}
