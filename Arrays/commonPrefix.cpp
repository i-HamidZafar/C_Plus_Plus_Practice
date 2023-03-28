#include<iostream>
using namespace std;
///Incomplete!!
int main()
{
    string a="";
    string name[] ={"Hamid","Hamiad","Ham"};
    int size= sizeof(name)/sizeof(name[1]);
    for (int i=0;i<name[0].length();i++)
    {
        char key = name[0][i];

        bool match= true;

        for(int j=1;j< size;j++)
        {
            if(key!=name[j][i])
            {
                match=false;
                break;
            }
        }
        if(match==false)
        {
            break;
        }
        else
        a=a+ key;
    }
    cout<< a;
    return 0;
}
