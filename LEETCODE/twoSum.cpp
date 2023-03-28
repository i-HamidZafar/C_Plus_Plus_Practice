#include<iostream>
using namespace std;
int main()
{
    int arr[]={4,7,9,8,2,6};
    int target=13;
    int length =sizeof(arr)/sizeof(arr[4]);
    for(int i=0;i<length;i++)
    {
        for(int j=i+1;j<length;j++)
        {
            if(arr[i]+arr[j]==target)
            {
                cout<< i<< "," <<j<<endl;
                break;
            }
        }
    }
    return 0;
}