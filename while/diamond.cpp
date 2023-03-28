#include<iostream>
using namespace std;
int main()
{
    
    int start=1,input,stars=1,rows,spaces,reverseSpaces;
    cout<<"Enter the Length of the diamond: ";
    cin>>input;
    rows=2*input;
    spaces=input-1;
    reverseSpaces=input-1;
    while(start<rows)
    {
        if(start<=input)
        {
            int begin=start;
            while(begin<=spaces)
            {
             cout<<" ";
             begin++;
            }
            int stars=1;
            while(stars<=start)
            {
                cout<<"* ";
                stars++;
            }
           
        }
        //reverse
        if(start>input)
        {          
            
            int rSpaces=reverseSpaces;
            while(rSpaces<=spaces)
            {
                cout<<" ";
                rSpaces++;
            }
            int loop=start;
            while(loop<rows)
            {
                cout<<"* ";   
                loop++;                
            }
            reverseSpaces--;
        }
        cout<<endl;
        start++;      
    }
    
    return 0;
}