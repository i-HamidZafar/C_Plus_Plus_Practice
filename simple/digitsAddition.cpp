#include<iostream>
using namespace std;
int main()
{
    int input,mod,n,sum;
    sum=0;

    cout <<"Enter a number: \n";
    cin>>input;
    for (input; input>0; input++)
    {
        mod= input%10;
        n=input/10;
        cout << mod<< endl<< n%10;
        sum=sum+mod;
        cout << sum;
    }


    
    return 0;
}