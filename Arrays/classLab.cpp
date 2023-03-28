#include<iostream>
using namespace std;
int main()
{
    int num;
    float area,radius,diameter;
    cout<<"what do you enter: \n";
    cout<< "type 1 for radius: \n";
    cout<< "type 2 for diameter: \n";
    cin>>num;
    if(num==1)
    {
        cout<<"Enter the radius: \n";
        cin>> radius;
        area= (2*3.14)* radius;
        cout<<area;
    }
    else if(num==2)
    {
        cout<<"Enter the diameter: \n";
        cin>> diameter;
        radius= diameter/2;
         area= (2*3.14)* radius;
        cout<<area;
    }

    return 0;
}