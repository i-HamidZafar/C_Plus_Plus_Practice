#include<iostream>
using namespace std;
int main()
{
    int num,sum=0;
    cout<<"Type terms for series (1-15): ";
    while(1)
    {
        cin>>num;
        if(num>0 && num<16)
            break;
        cout<<"Invalid, Try again: ";
    }
    for(int i=1; i<=num;i++)
    {
        int tempsum=1;
        cout<<"(1";
        for(int j=2;j<=i;j++)
        {
            tempsum+=j;
            cout<<"+"<<j;
        }
        cout<<")";
        if(i!=num)
        cout<<"+";
        sum=sum+tempsum;
        
    }
    cout<<endl;
    cout<<"The sum of the series is: "<<sum;
    return 0;
}