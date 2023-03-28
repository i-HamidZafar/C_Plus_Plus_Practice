#include<iostream>
using namespace std;
#include<cmath>
int main()
{
    double a,b,aSquare,bSquare;
    cin >>a >> b;
   
    aSquare= pow(a,2);
    bSquare=pow(b,2);
    cout <<"The solution of (a+b)^2: ";
    cout << aSquare+bSquare+2*a*b<<endl;
    cout <<"The solution of (a-b)^2): ";
    cout << aSquare+bSquare-2*a*b <<endl;
    cout <<"The solution of (a+b)(a-b): ";
    cout << (a+b) * (a-b);

    return 0;


}