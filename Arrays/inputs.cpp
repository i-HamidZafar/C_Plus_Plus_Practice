#include<iostream>
using namespace std;
int linearSearch(int , int[], int );
int main()
{
    int length,key,result;
    cout <<"Please Enter the length of the array: \n";
    cin>>length;
    cout <<"Please Enter the Elements of your array: \n";
    int number[length];
    for(int index=0;index<length; index++)
    {
        cin>> number[index];

    }
    cout <<"Please Enter the Element you want to check in array: \n";
    cin>> key;
    result= linearSearch(length,number, key);
    cout << key<< " occurs " << result << " times in the array \n" ;
    return 0;
}
int linearSearch(int length, int number[], int check)
{
    int counter=0;
    for(int index=0;index<length; index++)
    {
        if (number[index]==check)
        counter++;
    }
    return counter;
}