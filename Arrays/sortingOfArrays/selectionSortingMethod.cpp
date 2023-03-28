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
    int searchIndex,min=0,minIndex,temp=0;

    for(searchIndex=0; searchIndex<size-1;searchIndex++)
    {
        min=searchIndex;

        for(minIndex= searchIndex;minIndex<size; minIndex++)
        {
            if(nums[minIndex]<nums[min])
            min=minIndex;//updating the index of  the minimum
        }
        if(searchIndex!=min)
        {
            //swap the numbers 
            temp=nums[searchIndex];
            nums[searchIndex]=nums[min];
            nums[min]=temp;
        }
        cout<<"Current: Array: ";
        for(int check =0;check<size;check++)
        cout<<nums[check]<<" ";
        cout<<endl;
    }
    cout<<"Sorted Array: ";
    for(int index=0;index<size;index++)
    {
        cout<< nums[index]<<" ";
    }

    return 0;
}