#include<iostream>
using namespace std;
#include<cmath>
int main()
{
    int a,b,aSquare,bSquare,aSquareMinusbSquare,aPlusb,aMinusb;
    cin >>a >> b;
   
    aSquare= pow(a,2);
    bSquare=pow(b,2);
    aPlusb = a+b;
    aMinusb= a-b;
    aSquareMinusbSquare =aSquare-bSquare;
    cout <<"The solution of (a+b)(a-b)/(a^2)-(b^2): ";
    cout << (aPlusb*aMinusb)/aSquareMinusbSquare<<endl;
    

    return 0;

}