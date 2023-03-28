#include<iostream>
using namespace std;
int main()
{
    int numFirst,numSec;
    cin>> numFirst;
    cin>>numSec;
    if(numFirst<numSec)
    {
        for (int counter=numFirst;counter<=numSec;counter++)
        {
            cout << counter<< endl;
        }
    }
    else if(numFirst>numSec)
    {
        for (int counter=numFirst;counter>=numSec;counter--)
        {
            cout << counter<< endl;
        }
    }
    return 0;
}