#include<iostream>
using namespace std;
void primeNum(int);
int main()
{
    int givenNumber=0;;
    cout<<"Enter a integer greater than 0 : ";
    cin>> givenNumber;
    while(givenNumber<1)
    {
        cout<<"Please Enter a Valid Number: ";
        cin>> givenNumber;
    }
    cout<<"The Prime numbers uptil "<<givenNumber<<" are following: ";
    primeNum(givenNumber);

    return 0;
}
void primeNum(int num)
{
    if(num==1)
    {
        cout<<"Not a prime Number";
        return;
    }
    else if(num>1)
    {
        for(int i=2;i<=num;i++)//i stands for iteration
        {
            bool check=true;
            for(int primeCheck=2;primeCheck<i;primeCheck++)
            {
                if(i%primeCheck==0)
                {
                    check=false;
                    break;             
                }
            }
            if(check==true)
            cout<<i<<" ";
        }
        return;        
    }
}