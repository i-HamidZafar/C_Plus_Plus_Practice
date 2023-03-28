#include<iostream>
using namespace std;
int main()
{
    int num=5,numTwo;
    int start=num*2-1;
    numTwo=4;

    for (int counter=1; counter<=start;counter++)
    {
        if (counter<6)
        {
        for(int stars=1; stars <=counter;stars++)
        {
            cout <<"*";
        }
        }
        else
        {
            for(int stars=1; stars <=numTwo;numTwo--)
            {
                cout <<"*";
            }
        }
        cout <<endl;
    }
    return 0;
}