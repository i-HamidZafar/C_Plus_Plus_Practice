#include<iostream>
using namespace std;
int even(int);
int main()
{
    int number,sum;
    cout << "Please enter a number: "<< endl;
    cin>>number;
    cout <<"The even numbers from "<<number << " to 0 are: " <<endl;
    sum=even(number);
    cout<< "\nThe sum of even numbers from "<<number << " to 0 is: " << sum <<endl;

    return 0;
}

int even(int n)
{
    if(n>0&&n%2==0)
    {
        cout <<n<<" ";
        
        return n + even(n-1);
    }
    else if(n>0 && n%2==1)
    {
        even(n-1);
    }
    else
    {
        return 0; 
    }
}