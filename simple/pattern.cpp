#include<iostream>
using namespace std;
int main()
{
    int rows=4;
    int start=1;
    
    while(start<=rows)
    {
        int stars=1;
        while (stars<=start)
        {   
            cout<<"*";
            stars++;
        }
        cout<<endl;
        start++;
    }

    return 0;
}
/*#include<iostream>
using namespace std;
int main()
{
    int start=1;
    do
    {
        cout<< start<< endl;
        start++;
    }
    while(start<11);

    return 0;
}*/