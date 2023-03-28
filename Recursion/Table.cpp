#include<iostream>
using namespace std;
int table(int,int);
int table(int number,int counter)
{
    cout<< counter* number<<endl;
    counter =counter+1;
    if (counter<11)
    table(number,counter);
    else
    return 0;
}



int main()
{
    int num,count =1;
    cout << "enter a number for table: ";
    cin>> num;
    table(num,count);

    return 0;
}
