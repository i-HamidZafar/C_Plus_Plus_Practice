#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Please Enter the size of the Array: ";
    cin>>size;
    int nums[size];
    cout<<"Please Enter the elements of the Array: ";
    for(int i=0; i<size;i++)
    cin>> nums[i];
    int unsortedIndex,min=0,minIndex;

    for(unsortedIndex=1; unsortedIndex<size;unsortedIndex++)
    {
        int sorted=unsortedIndex-1;
        int temp=nums[unsortedIndex];
        while(sorted>=0 && nums[sorted]>temp)
        {
            nums[sorted+1]=nums[sorted];
            sorted--;
        }
        nums[sorted+1]=temp;
        cout<<"Current: Array: ";
        for(int check =0;check<size;check++)
        cout<<nums[check]<<" ";
        cout<<endl;

        
    }
    cout<<"\tSorted Array: ";
    for(int index=0;index<size;index++)
    {
        cout<< nums[index]<<" ";
    }

    return 0;
}