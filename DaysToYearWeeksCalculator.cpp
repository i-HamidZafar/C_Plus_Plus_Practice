#include<iostream>
using namespace std;
int main()
{
    int days;
    cout <<"Enter the no. of Days : "; 
    cin >> days;
    int weeks=0,tDays=0,years=0;\
    while(days!=0)
    {
        if(days>364)
        {
            years=days/365;
            days=days%365;
        }
        else if(days>6 && days<365)
        {
            weeks=days/7;
            days=days%7;
        }
        else if(days>0 && days<7)
        {
            tDays=days/1;
            days=days%1;
        }
    }
    cout<<"The no. of Years are : "<< years<< endl;
    cout<<"The no. of weeks are: "<< weeks<<endl;
    cout<<"The no. of Days are: "<<tDays<<endl;
    
    return 0;
}