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
	srand(time(0));
	ofstream bloodGroupFileBase;
	bloodGroupFileBase.open("E://projectFile.dat",ios::binary | ios::out);
	if(!bloodGroupFileBase)
	cout<<"Error openning file";
	else
	{
		int noOfEntries;
		cout<<"How many entries you want to write (Considering it will over write the existing file) : ";
		cin>>noOfEntries;
		database file[noOfEntries];
		for(int index=0; index< noOfEntries; index++)
		{
			cout<<"Please Enter the Name: ";
			getline(cin >>ws, file[index].name);
			cout<<"Please Enter the phone number of " <<file[index].name<< ": ";
			cin >>file[index].phoneNum;
			cout<<"Please Enter the address of " <<file[index].name<<" : ";
			getline(cin >>ws, file[index].address);
			cout<<"Please Enter the blood group of " <<file[index].name<<" : ";
			cin.getline(file[index].bloodGroup, 3);
			bloodGroupFileBase.write((char*)&file[index],sizeof(database));
            cout<<endl;
		}
				
		bloodGroupFileBase.close();
	}
}

void adding()
{
	srand(time(0));
	ofstream bloodGroupFileBase;
	bloodGroupFileBase.open( "E://projectFile.dat", ios:: out | ios::binary | ios::app );
	if(!bloodGroupFileBase)
	cout<<"Error openning file";
	else
	{
		int noOfEntries;
		cout<<"How many entries you want to add to the current record : ";
		cin>>noOfEntries;
		database file[noOfEntries];
		for(int index=0; index< noOfEntries; index++)
		{
			cout<<"Please Enter the Name: ";
			getline(cin >>ws, file[index].name);
			cout<<"Please Enter the phone number of " <<file[index].name<< ": ";
			cin >>file[index].phoneNum;
			cout<<"Please Enter the address of " <<file[index].name<<" : ";
			getline(cin >>ws, file[index].address);
			cout<<"Please Enter the blood group of " <<file[index].name<<" : ";
			cin.getline(file[index].bloodGroup, 3);
			bloodGroupFileBase.write((char*)&file[index],sizeof(database));
            cout<<endl;
		}
		
		bloodGroupFileBase.close();
	}
}

void reading()
{	
	ifstream bloodGroupFileBase2;
	bloodGroupFileBase2.open("E://projectFile.dat",ios::binary | ios::in);
	if(!bloodGroupFileBase2)
	cout<<"Error openning file";
	else
	{	
		database fileread[30]={0};
		int index=0;
		while( bloodGroupFileBase2.read((char*) &fileread[index], sizeof(database)) )
		{
			cout<<"Working:";
			cout<<"Name: "<< fileread[index].name<<endl;
			cout<<"Phone Number: "<< fileread[index].phoneNum<<endl;
			cout<<"Address: "<< fileread[index].address<<endl;
			cout<<"Blood Group: "<< fileread[index].bloodGroup<<endl;
			cout<<endl;
			index++;
		}
	
		bloodGroupFileBase2.close();
	}
	
}
int main()
{	
	
	reading();
	
	return 0;
}