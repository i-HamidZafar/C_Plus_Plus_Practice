#include<iostream>
using namespace std;
#include<string.h>
void reverse(char arr[], int size);
int main ()
{
    char name[16];
    cout<<"Type the string (Max length 15 characters): ";
    cin.getline(name, 16);
    int size=sizeof(name)-1;//last index for null character
    cout<<name<<endl;
    cout<<"Reversed string: ";
    reverse(name, size);
    cout<<name;
    
    return 0;
}
void reverse(char arr[], int size)
{
    for(int i=0;i<=size/2;i++)
    {
        char temp=arr[i];
        arr[i]=arr[size-1-i];
        arr[size-1-i]=temp;
    }
}