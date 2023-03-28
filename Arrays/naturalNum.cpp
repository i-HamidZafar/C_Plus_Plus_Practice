#include<iostream>
using namespace std;
#include<string.h>
int main()
{
    int size,sum;
    cout<<"Enter The size of the Array"<<endl;
    cin>>size;
    sum=0;
    int nums[size];
    for(int index=0;index<size;index++)
    {
        cin>>nums[index];
    }
    for(int index=0;index<size;index++)
    {
        sum=sum+nums[index];
    }
    cout<<"The sum of the given numbers in the array is: \n";
    cout<<sum;

    return 0;
}