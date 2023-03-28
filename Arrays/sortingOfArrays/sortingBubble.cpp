#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the Size of the Array: ";
    cin>> size;
    int arr[size];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    //sorting === finding the minimum element and replacing it with the number

    for(int outerIndex=0; outerIndex<size-1;outerIndex++)
    {
        bool swappingCheck=true;
        for(int comparingIndex=0;comparingIndex<size-1-outerIndex;comparingIndex++)
        {
            if(arr[comparingIndex]>arr[comparingIndex+1])
            {
                //swaping every numbers
                int temp= arr[comparingIndex];
                arr[comparingIndex]=arr[comparingIndex+1]; 
                arr[comparingIndex+1]=temp;    
                swappingCheck=false;      
            }
            cout<<"Current: Array: ";
            for(int check =0;check<size;check++)
            cout<<arr[check]<<" ";
            cout<<endl;
        }
        if(swappingCheck==true)
        break;

    }
    cout<<"The sorted array is : ";
    for(int count=0; count<size;count++)
    {
        cout<< arr[count] << " ";
    }
    return 0;
}