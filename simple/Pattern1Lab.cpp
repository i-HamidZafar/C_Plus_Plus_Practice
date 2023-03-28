#include<iostream>
using namespace std;
int main()
{
    int start=1;
    int end=9;
    for(end; end>=start; end--)
    {
        for(int row=end;row>=start; row--)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}