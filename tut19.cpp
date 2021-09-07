#include<iostream>
using namespace std;

int volume(int l, int b){
    return(l*b);
}
int volume(int l, int b, int h){
    return(l*b*h);
}
int main(){
    cout<<"The volume of cube is: "<<volume(4,5)<<endl;
    cout<<"The volume of cuboid is: "<<volume(4,5,2)<<endl;
    return 0;
}