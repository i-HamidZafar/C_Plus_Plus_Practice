#include<iostream>
using namespace std;
int main()
{
    int numFirst,sum;
    cin>> numFirst;
    sum=1;
    if(numFirst>-1)
    {
        for (int counter=numFirst;counter>0;counter--)
        {
        
            {   
                sum= sum* counter;
            
            }   
        }
        cout <<sum;
    }
    else if(numFirst<0 )
    {
        sum=-1;
        for (int counter=numFirst;counter<0;counter++)
        {
            
            {   
                sum= -sum*counter;
            
            }   
        }
        cout <<sum;
    }
    return 0;
}