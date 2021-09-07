#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    ofstream hout;
    hout.open("sample60.txt");
    hout<<"Here i am "<<endl;
    hout<<"Also here i am ";
    hout.close();

    string content;
    ifstream hin("sample60.txt");
    while (hin.eof()==0)
    {
        getline(hin, content);
        cout<<content<<endl;
    }
    hin.close();
    return 0;
}