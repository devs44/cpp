#include<iostream>
using namespace std;

/*
    Syntax for intialaization list in constructor:
    constructor(argument-list): initialization-section
    {
        assignment+other code;
    }
    class Test{
    int a,b;
    public:
        Test(int i, int j):a(i),b(j){constructor body}
    };
*/
 class Test{
    int a;
    int b;
    public:
        // Test(int i, int j):a(i),b(j)
        // Test(int i,int j):a(i),b(i+j)
        // Test(int i,int j):a(i),b(2*j)
        // Test(int i,int j):a(i),b(a+j)
        Test(int i,int j):b(j),a(i+b)
        
        {
            cout<<"Constructor exrecuted"<<endl;
            cout<<a<<endl<<b<<endl;
        }
    };
int main(){
    Test t(4,6);

    return 0;
}