#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main(){

    //function objects(functor): function wrapped in a class so that
    // available like an object
    // like an object but works as a function
    int arr[]={1,73,4,12,54,77};
    sort(arr, arr+5);
    sort(arr, arr+6, greater<int>());

    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<endl;
    } 
    return 0;
}