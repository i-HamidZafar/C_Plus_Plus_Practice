#include<iostream>
using namespace std;
int sum(int);
int main()
{
    int input,sumResult;
    cout << "Please enter a natural number: \n";
    cin>>input;
    sumResult=sum(input);
    cout << "The sum of first " << input << " Natural Numbers is: "<< sumResult;
    return 0;
}
int sum(int nForSum)
{
    if(nForSum!=0)
    return nForSum+sum(nForSum-1);
}