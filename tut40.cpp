#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void set_rollnumber(int);
    void get_rollnumber(void);
};
void Student::set_rollnumber(int r)
{
    roll_number = r;
}
void Student::get_rollnumber(void)
{
    cout << "The roll no. is" << roll_number << endl;
}
class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};
void Exam::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}
void Exam::get_marks(void)
{
    cout << "The marks of the maths is " << maths << endl;
    cout << "The marks of the physics is " << physics << endl;
}
class Result:public Exam{
    float percentage;
    public:
        void display(){
            get_rollnumber();
            get_marks();
            cout<<"Your percentage is "<<(maths+physics)/2<<"%"<<endl;
        }
};
int main()
{
    Result devi;
    devi.set_rollnumber(44);
    devi.set_marks(89.0,94.0);
    devi.display();
    return 0;
}