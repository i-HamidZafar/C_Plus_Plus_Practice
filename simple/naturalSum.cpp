#include<iostream>
using namespace std;
int main()
{
    int numFirst,numSec,sum;
    cin>> numFirst;
    cin>>numSec;
    sum=0;
    if(numFirst<numSec)
    {
        for (int counter=numFirst;counter<=numSec;counter++)
        {
        
            {   
                sum= sum+ counter;
            
            }   
        }
        cout <<sum;
    }
    else if(numFirst>numSec )
    {
        for (int counter=numFirst;counter>=numSec;counter--)
        {
        
            {   
                sum= sum+ counter;
            
            }   
        }
        cout <<sum;
    }
    return 0;
}