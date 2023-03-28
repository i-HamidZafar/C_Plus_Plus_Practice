//Program for adding,deleting, updating searching of Blood Group entities

#include<iostream>
#include<fstream>
#include<string>
#include<time.h>
#include<cstdlib>

using namespace std;

struct database
{
	string name;
	int phoneNum;
	string address;
	char bloodGroup[3];
};

void overWriting()
{
	ofstream bloodGroupFileBase;
	bloodGroupFileBase.open("E://FileN.bin",ios::binary | ios::out);
	if(!bloodGroupFileBase)
	cout<<"Error openning file";
	else
	{
		int noOfEntries;
		cout<<"How many entries you want to write (Considering it will over write the existing file) : ";
		cin>>noOfEntries;
		database file;;
		for(int index=0; index< noOfEntries; index++)
		{
			cout<<"Please Enter the Name: ";
			getline(cin >>ws, file.name);
			cout<<"Please Enter the phone number of " <<file.name<< ": ";
			cin >>file.phoneNum;
			cout<<"Please Enter the address of " <<file.name<<" : ";
			getline(cin >>ws, file.address);
			cout<<"Please Enter the blood group of " <<file.name<<" : ";
			cin.getline(file.bloodGroup, 3);
			bloodGroupFileBase.write((char*)&file, sizeof(database));
		}		
		bloodGroupFileBase.close();
	}
}

void adding()
{
	ofstream bloodGroupFileBase;
	bloodGroupFileBase.open("E://FileN.bin",ios::binary | ios::app);
	if(!bloodGroupFileBase)
	cout<<"Error openning file";
	else
	{
		int noOfEntries;
		cout<<"How many entries you want to write (Considering it will over write the existing file) : ";
		cin>>noOfEntries;
		database file;
		for(int index=0; index< noOfEntries; index++)
		{
			cout<<"Please Enter the Name: ";
			getline(cin >>ws, file.name);
			cout<<"Please Enter the phone number of " <<file.name<< ": ";
			cin >>file.phoneNum;
			cout<<"Please Enter the address of " <<file.name<<" : ";
			getline(cin >>ws, file.address);
			cout<<"Please Enter the blood group of " <<file.name<<" : ";
			cin.getline(file.bloodGroup, 3);
			cout<<endl;
			bloodGroupFileBase.write((char*)&file, sizeof(database));
		}		
		bloodGroupFileBase.close();
	}
}


void reading()
{	
	ifstream bloodGroupFileBase2;
	bloodGroupFileBase2.open("E://FileN.bin", ios::binary);
	if(!bloodGroupFileBase2)
	cout<<"Error openning file";
	else
	{	
		database fileread;
		while( bloodGroupFileBase2.read((char*) &fileread, sizeof(database)) )
		{
			cout<<"Name: "<< fileread.name<<endl;
			cout<<"Phone Number: "<< fileread.phoneNum<<endl;
			cout<<"Address: "<< fileread.address<<endl;
			cout<<"Blood Group: "<< fileread.bloodGroup<<endl;
			cout<<endl;
		}
		bloodGroupFileBase2.close();
	}
	
}
int main()
{	
	
	reading();
	
	
	return 0;
}
