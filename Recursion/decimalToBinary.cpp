#include<iostream>
using namespace std;
#include<cmath>
int binary(int deciNum,int noB);
int binary(int deciNum,int noB)
{
    int binaryPow=pow(2,noB);
    if(deciNum>=0 && noB>=0 && deciNum-binaryPow>=0)
    {
        deciNum=deciNum-binaryPow;
        binary(deciNum,noB-1);
        return 1;
    }
    else
    {
        binary(deciNum,noB-1);
        return 0;
    }
}
int main()
{
    int num;
    num=binary(7,5);
    cout << num;
    return 0;
}
