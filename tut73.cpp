#include<iostream>
#include<map>
#include<string>
using namespace std;

//map is an associative array
int main(){
    map<string, int> marks;
    marks["Devi"]=94;
    marks["Sushma"]=18;
    map<string, int>::iterator iter;
    marks.insert({{"Sabitri",42},{"Shova",87}});
    for (iter = marks.begin(); iter!=marks.end() ; iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    }
    cout<<"The size is: "<<marks.size()<<endl;
    cout<<"The max size is: "<<marks.max_size()<<endl;
    return 0;
} 