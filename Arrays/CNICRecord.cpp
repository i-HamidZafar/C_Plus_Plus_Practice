#include<iostream>
using namespace std;
int main()
{
    string CNIC[]={"31102-1115650-7"};
    int sizeOfCNIC= sizeof(CNIC)/sizeof(CNIC[0]);

    string Name[]={"Hamid Zafar"};
    int sizeOfName= sizeof(Name)/sizeof(Name[0]);

    string FName[]={"M. Zafar Javed"};
    int sizeOfFName= sizeof(FName)/sizeof(FName[0]);

    string Expiry[]={"01-07-2029"};
    int sizeOfFExpiry= sizeof(Expiry)/sizeof(Expiry[0]);

    string input;
    cout<<"Please type the CNIC number of the Individual: \n";
    cin>>input;
    
    for(int i=0; i<sizeOfCNIC;i++)
    {
        if(CNIC[i]==input)
        {
            cout<<"The Data under the ID is following: \n";
            cout<<"CNIC: "<< CNIC[i] <<endl;
            cout<<"Name: "<< Name[i]<<endl;
            cout<<"Father's Name: "<< FName[i]<<endl;
            cout<<"Expiry: " << Expiry[i]<<endl;
        }
    }
    return 0;
}