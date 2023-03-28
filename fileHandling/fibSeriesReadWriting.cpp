#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
void reading()
{
	//Reading
	ifstream fileName2;
	fileName2.open("fib.bin", ios::binary );
	if(!fileName2)
	{
		cout<<"Error openning file";
	}
	else
	{
		int check2;
	//	while( fileName2.read((char*)&check2 , sizeof(check2)) )
		for(int index=0;index<20;index++)
		{
		fileName2.read((char*)&check2 , sizeof(check2) );
		cout<<check2 <<" ";
		}
		fileName2.close();
	}	
}

void writing()
{
	fstream fileName;
	fileName.open("fib.bin", ios::binary | ios::out);
	if(!fileName)
	{
		cout<<"Error openning file";
	}
	else
	{
		int firstTerm,secTerm,nextTerm;
		firstTerm=0,secTerm=1,nextTerm=0;
		int check[20]={0};
		for(int i=0; i<20;i++)
		{
			if(i==0)
			fileName.write((char*)&check[i] , sizeof(int) );
			firstTerm=secTerm,secTerm=nextTerm;
			nextTerm=firstTerm+secTerm;
			check[i]=nextTerm;
			fileName.write((char*)&check[i] , sizeof(int) );
			
		}
	}	
}


int main()
{
	writing();
	reading();
	
}