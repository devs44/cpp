#include<iostream>
using namespace std;
typedef struct employee
{
    int eID;
    char favChar;
    float salary;
} ep;
union money
{
    int rice;
    char car;
    float pounds;
};
int main(){
    // struct employee devi;
    // // ep devi;
    // union money m1;
    // m1.rice=14;
    // m1.car='c';
    // m1.pounds=100;
    // devi.eID = 4;
    // devi.favChar = 'c';
    // devi.salary = 4000000;
    // cout<<devi.eID<<endl;
    // cout<<devi.favChar<<endl;
    // cout<<devi.salary<<endl;
    // cout<<m1.pounds<<endl;
    // cout<<m1.car<<endl;
    // cout<<m1.rice<<endl;

    enum meal{ breakfast, lunch, dinner};
    meal m1= lunch;
    cout<<(m1==dinner);
    return 0;
}