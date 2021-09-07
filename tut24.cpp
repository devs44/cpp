#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;
public:
    void setData(void)
    {
        cout << "Enter your id" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "YOur id is" << id << "and this is employee no " << count << endl;
    }
    static void getCount(void){
        //cout<<id; cannot print because it  shows only static data members
        cout<<"The value of count is "<<count<<endl;
    }
};
int Employee::count=100; //default value is 0
int main()
{
    Employee E;
    //count is the static data memeber of class Employee
    E.setData();
    E.getData();
    Employee::getCount();

    Employee Devi;
    Devi.setData();
    Devi.getData();
    Employee::getCount();
    return 0;
}