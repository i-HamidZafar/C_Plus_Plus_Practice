#include<iostream>
using namespace std;
int main()
{
    int firstFibNum=0,secFibNum=1,nextFib=0,Input;
    cout<<"Enter the termination point \n";
    cin>>Input;
    while(nextFib<Input)
    {
        cout<< nextFib<< endl;
        firstFibNum=secFibNum;
        secFibNum=nextFib;
        nextFib=firstFibNum+secFibNum;
    }
    
}