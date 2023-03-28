#include<iostream>
using namespace std;
int main()
{
    int amount;
    cout<<"Enter the Amount : "; 
    cin>> amount;
    int One=0,TFive=0,Fhundred=0,Fthousand=0;
    int temp=0;
    while(amount!=0)
    {
        if(amount>4999)
        {
            Fthousand=amount/5000;
            amount=amount%5000;
        }
        else if(amount>499&&amount<5000)
        {
            Fhundred=amount/500;
            amount=amount % 500;
        }
        else if(amount>24&& amount <500)
        {
            TFive=amount/25;
            amount=amount % 25;
        }
        else if(amount>0 && amount<25)
        {
            One=amount/1;
            amount=amount % 1;
        }
    }
    cout<<"The number of 5000 Notes will be : "<<Fthousand<<endl;
    cout<<"The number of 500 Notes will be : "<<Fhundred<<endl;  
    cout<< "The number of 25 Notes will be : "<<TFive<<endl;
    cout<< "The number of 1 COins will be : "<<One<<endl;  
    return 0;
}