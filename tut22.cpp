#include<iostream>
#include<string>
using namespace std;

class num{
    string s;
    public:
        void enter(void);
        void check(void);
        void ones(void);
        void final(void);
};
void num::enter(void){
    cout<<"Enter a numbers";
    cin>>s;
}
void num::check(void){
    for(int i=0;i<s.length();i++){
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Incorrect number";
            exit(0);
        }
    }
}
void num:: ones(void){
    for (int i = 0; i < s.length(); i++){
        if(s.at(i)=='0'){
            s.at(i) = '1';
        }
        else{
                s.at(i)='0';
        }
    }
}
void num::final(void){
    cout<<"The final";
    for(int i=0;i<s.length();i++){
        cout<<s.at(i);
    }
}
int main(){
    num n;
    n.enter();
    n.check();
    n.ones();
    n.final();
    return 0;
}