#include<iostream>
using namespace std;

int linear(int arr[], int n, int x)
{
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==x)
        {
            return i;
        }
    }
}
int main(){
    int arr[]={10,45,8,2,98,33,11};
    int x=98;
    int n=sizeof(arr)/sizeof(arr[0]);
    int result=linear(arr,n,x);
    if (result==-1)
    {
      cout<<"Element is not present"<<endl;  
    }
    else{
        cout<<"Element is present at "<<result<<endl;
    }
    
    return 0;
}