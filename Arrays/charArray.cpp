#include<iostream>
using namespace std;
#include<string.h>
int main()
{
    int size;
    cout<<"Enter the size of the array: "<<endl;
    cin>> size;
    //int nums[size];
    cout<<"Enter "<<size << " chars : \n";
    char words[size];
    cin>>words;
    int count=0;
    for(int i=0;i<size+1;i++)
    {
        if((words[i]==' ') || (words[i]=='\0'))
        count++;
    }
    cout<<"the number of words in the char array are "<< count;

    return 0;
}