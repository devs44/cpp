#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    string name;
    ofstream hout("sample60.txt");
    cout<<"Enter your  name";
    cin>>name;
    hout<<"your name is "+name;
    hout.close();

    string content;
    ifstream hin("sample60.txt");
    getline(hin, content);
    cout<<"The content in the file is "<<content;
    hin.close();
    return 0;
}