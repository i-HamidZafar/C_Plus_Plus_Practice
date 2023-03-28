#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size of the array: "<<endl;
    cin>> size;
    //int nums[size];
    cout<<"Enter "<<size << " numbers : \n";
    int nums[size];
    for(int i=0;i<5;i++)
    {
        cin>>nums[i];
    }
    for(int i=0;i<5;i++)
    {
        cout<<nums[i]<<endl;
    }

    return 0;
}