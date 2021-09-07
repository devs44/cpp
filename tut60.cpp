#include<iostream>
#include<fstream>
#include<string>
// the useful classes for working with files are
// 1.fstreambase
// 2.ifstream-->derived from fstreambase
// 3.ofstream-->derived from fstreambase

// in order to work with files in c++,you will have to open it
// two ways to open a file
// 1.using the constrcutor
// 2.using the member function open()of the class


using namespace std;

int main(){
    string st="devi bhai";
    string st2; 
    //openeing files using constructor and writing it 
    // ofstream out("sample60.txt"); 
    // out<<st;

    //opening files using constructor and writing to it
    ifstream in("sample60.txt");
    // in>>st2;
    getline(in, st2);
    cout<<st2;
    return 0;
}