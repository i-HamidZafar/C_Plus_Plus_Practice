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
    int min=nums[0];
    for(int index=1;index<size;index++)
    {
        if(min>nums[index])
        min=nums[index];
    }
    cout<<"The smallest number in the array is "<<min;

    return 0;
}