#include<iostream>
#include<list>
using namespace std;

void display(list<int> &lst){
    list<int>::iterator it;
    for ( it = lst.begin(); it!= lst.end(); it++)
    {
        cout<< *it<<" ";
    }
    cout<<endl;
}

int main(){
    list<int> list1; //makes list of zero length
    list<int> list2(3); //empty list of size 7
    list1.push_back(5);
    list1.push_back(8);
    list1.push_back(9);
    list1.push_back(10);
    display(list1);
    // list1.pop_back(); //deletes from back
    // display(list1);
    // list1.pop_front(); //deletes from front
    // display(list1); 
    // list1.remove(9); //deletes by element
    // display(list1);
    
    list1.sort(); //sorting the list
    list1.reverse(); //reversing the list
    display(list1);
    list<int>::iterator iter;
    iter=list2.begin();
    *iter=45;
    iter++;
    *iter=5;
    iter++;
    *iter=4;
    iter++;
    display(list2);
    list2.sort();
    list1.merge(list2);
    cout<<"List 1 after merging: ";
    display(list1);
    return 0;
}