#include<iostream>
using namespace std;
int main()
{
    int input;
    cout<<"Enter the no. of elements of the Array: ";
    cin>> input;
    while(input <1)
    {
        cout<<"Please Enter a +ve number: ";
        cin>>input;
    }
    int num[input];
    int *addressOfNum=&num[0];
    cout<<"Enter "<< input <<" element for array: ";
    for(int col=0;col<input;col++)
    {
        cin>>num[col];
    }
    cout<<"\nThe elements you entered are following: \n";
    cout<<"\t \t \t \t \t ";
    for(int index=0;index<input;index++)
    {
        cout<<*addressOfNum<< " ";
        addressOfNum= addressOfNum+1;
    }

    
    return 0;
}