#include<iostream>
using namespace std;

class Student{
    protected:
        int id;
    public:
        void set_id(int a){
            id=a;
        }
        void print_id(){
            cout<<"Your id is: "<<id<<endl;
        }
};
class Marks: virtual public Student{
    protected:
        float maths;
        float physics;
    public:
        void set_marks(float x, float y){
            maths=x;
            physics=y;
        }
        void print_marks(){
            cout<<"Your maths marks is: "<<maths<<endl;
            cout<<"Your physics marks is: "<<physics<<endl;
        }
};
class Score: virtual public Student{
    protected:
        int score;
    public:
        void set_score(int b){
            score=b;
        }
        void print_score(){
            cout<<"Your score is: "<<score<<endl;
        }
};
class final: public Marks, public Score{
    private:
        float final;
    public:
        void display(){
            final = maths+physics+score;
            print_id();
            print_marks();
            print_score();
            cout<<"Your final marks is: "<<final<<endl;
        }
};
int main(){
    final Devi;
    Devi.set_id(4);
    Devi.set_marks(44,45);
    Devi.set_score(98);
    Devi.display();
    return 0;
}