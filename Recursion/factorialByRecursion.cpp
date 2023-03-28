#include<iostream>
using namespace std;
int factorial( int number);
int factorial( int number)
{
     int fact=1;
    
    
    if(number>0)
    {
        fact=fact*number;
        fact=fact*factorial(number-1);
    }
    else 
    return fact;

    return fact;
}
int main()
{
    int num;
    cout<<"Type a +ve number to find out it's factorial: ";
    cin>>num;
    while(num<-1)
    {
        cout<<"Please enter a valid number:  ";
        cin>>num;
    }    
    int fact=factorial(num);

    cout<<"The Factorial is: "<<fact;
    return 0;
}