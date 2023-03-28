#include<iostream>
#include<fstream>
#include<string>

using namespace std;
int main()
{
    fstream check;
    string a;
    check.open("C:\\Users\\waqas\\Desktop\\Desktop\\assignment.txt",ios::in);
    while(!check.eof())
    {
        getline(check >> ws, a);
        cout<< a<<endl;
    }


    return 0;
}
