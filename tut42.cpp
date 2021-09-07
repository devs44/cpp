#include<iostream>
#include<math.h>
using namespace std;

class Simple{
    protected:
        int n1;
        int n2;
    public:
        void set_simple(int x, int y){
            n1=x;
            n2=y;
        }
        void get_simple(){
            cout<<"Enter n1"<<endl;
            cin>>n1;
            cout<<"enter n2"<<endl;
            cin>>n2;
        }
        void get_firstoperation(){
            char c;
            int result;
            cout<<"Enter the operand to perform"<<endl;
            cin>>c;
            switch(c)
            {
            case '+':
                result=n1+n2;
                cout<<result<<endl;
                break;
            case '-':
                result=n1-n2;
                cout<<result<<endl;
                break;
            case '*':
                result=n1-n2;
                cout<<result<<endl;
                break;
            case '/':
                result=n1/n2;
                cout<<result<<endl;
                break;
            default:
                cout<<"Enter the valid operand"<<endl;
                break;
            }
        }
};
class Scientific{
    protected:
        float n3;
        float n4;
    public:
        void set_scidata(float a, float b){
            n3=a;
            n4=b;
        }
        void get_scidata(){
            cout<<"Enter n3"<<endl;
            cin>>n3;
            cout<<"enter n4"<<endl;
            cin>>n4;
        }
        void get_secondoperation(){
            int c;
            float result;
            cout<<"Enter the operations to be performed"<<endl;
            cin>>c;          
            switch (c)
            {
            case 1:
                result=sin(n3)+sin(n4);
                cout<<"The result is "<<result<<endl;
                break;
            case 2:
                result=sin(n3)-sin(n4);
                cout<<"The result is "<<result<<endl;
                break;
            default:
                cout<<"Enter the valid operation"<<endl;
                break;
            }
        }
};
class HybridCalc: public Simple, public Scientific{
    public:
        void final(){
            get_simple();         
            get_firstoperation();
            get_scidata();
            get_secondoperation();
            cout<<"Thank you"<<endl;
        }
};
int main(){
    HybridCalc f;
    f.final();
    return 0;
}