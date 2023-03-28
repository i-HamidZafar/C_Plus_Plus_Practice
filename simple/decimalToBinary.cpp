#include<iostream>
using namespace std;
#include<cmath>
int main()
{
    int nOB,binarypow,number,binary;
    cout << "Enter the number of bits: \n";
    cin>>nOB;
    cout << "Enter the number for  binary: \n";
    cin>>number;
    if (nOB>-1&&number>-1)
    {
        int i=0;
        for (nOB;nOB>=i;nOB--)
        {
            binarypow = pow(2,nOB);
            binary=number-binarypow;
            if(binary>-1 && number>0)
            {
                cout << "1";

                number =number-binarypow;
            }
            else
            {
                cout << "0";
            }
            
        }
    }
    else
    {
        cout << "please enter a number as well as bit number";
    }
    return 0;
}