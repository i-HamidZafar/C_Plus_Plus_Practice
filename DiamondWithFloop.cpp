#include<iostream>
using namespace std;
void diamond(int end);
int main()
{
    int end;
    cin>>end; 
    diamond(end);
    return 0;    
}

void diamond(int end)
{
    for(int start=1;start<2*end;start++)
    {
        if(start<end+1)
        {   
            int spaces=end-start;
            for(spaces;spaces>0;spaces--)
            cout<<" ";
            for(int star=1;star<=start;star++)
            cout<<"* ";
        }
        else if(start>end)
        {   
            int spaces=end;     
            for(spaces;spaces<start;spaces++)
            cout<<" ";
            for(int star=start;star<2*end;star++)
            cout<<"* ";
        }
        cout<< endl;    
    }
}