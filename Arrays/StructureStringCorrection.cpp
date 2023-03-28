#include<iostream>
using namespace std;
#include<array>
#include<string>
struct student
{
    string name;
    string rollNo;
    float ictMarks;
    float dldMarks;
    float pfMarks;
    float average;
    float totalMarks;
    char grade;
    float percentage;
};
char grade(float percent)
{
    char grade;
    if(percent> 50 && percent <66)
    grade='D';
    else if(grade > 65 && grade <76)
    grade='C';
    else if(grade > 75 && grade <85)
    grade='B';
    else if(grade > 84 && grade <101)
    grade='A';
    else
    grade='F';

    return grade;
}
float average(student a)
{
    float average=(a.ictMarks+a.dldMarks+a.pfMarks)/3;
    return average;
}
float percent(student a,float total)
{
    float percentage=((a.ictMarks+a.dldMarks+a.pfMarks)/total)*100;
    return percentage;
}
int main()
{
    int size;
    cout<<"Enter the no. of students: ";
    cin>>size;
    while(size<1)
    {
        cout<<"Please enter valid no. of Students: ";
        cin>>size;
    }
    student array[size];
    for(int i=0;i<size;i++)
    {
        if(i==0)
        {   
            cout<< "Please Enter the Name of The student: ";
            getline(cin >> ws, array[i].name);
            
            cout<<endl;
            cout<< "Please Enter the Roll no. of The student: ";
            getline(cin >> ws, array[i].rollNo);
            cout<<endl;
            cout<< "Please Enter the ICT Marks of The student: ";
            cin>>array[i].ictMarks;
            while(array[i].ictMarks>100||array[i].ictMarks<0)
            {
                cout<<"Please Enter Valid numbers: ";
                cin>>array[i].ictMarks;
            }
            cout<<endl;
            cout<< "Please Enter the DLD Marks of The student: ";
            cin>>array[i].dldMarks;
            while(array[i].dldMarks>100||array[i].dldMarks<0)
            {
                cout<<"Please Enter Valid numbers: ";
                cin>>array[i].dldMarks;
            }
            cout<<endl;
            cout<< "Please Enter the PF Marks of The student: ";
            cin>>array[i].pfMarks;
            while(array[i].pfMarks>100||array[i].pfMarks<0)
            {
                cout<<"Please Enter Valid numbers: ";
                cin>>array[i].pfMarks;
            }
            cout<<endl;
            cout<<"Please Enter Total Numbers: ";
            cin>>array[i].totalMarks;
            while(array[i].totalMarks>300||array[i].totalMarks<0 || array[i].totalMarks<(array[i].pfMarks+array[i].dldMarks+array[i].ictMarks))
            {
                cout<<"Please Enter Valid numbers: ";
                cin>>array[i].totalMarks;
            }
            cout<<endl;
        }
        else
        {
            cout<< "Please Enter the Name of Next student: ";
            getline(cin >> ws, array[i].name);
            cout<<endl;
            cout<< "Please Enter the Roll no. of Next student: ";
            getline(cin >> ws, array[i].rollNo);
            cout<<endl;
            cout<< "Please Enter the ICT Marks of Next student: ";
            cin>>array[i].ictMarks;
            while(array[i].ictMarks>100||array[i].ictMarks<0)
            {
                cout<<"Please Enter Valid numbers: ";
                cin>>array[i].ictMarks;
            }
            cout<<endl;
            cout<< "Please Enter the DLD Marks of Next student: ";
            cin>>array[i].dldMarks;
            while(array[i].dldMarks>100||array[i].dldMarks<0)
            {
                cout<<"Please Enter Valid numbers: ";
                cin>>array[i].dldMarks;
            }
            cout<<endl;
            cout<< "Please Enter the PF Marks of Next student: ";
            cin>>array[i].pfMarks;
            while(array[i].pfMarks>100||array[i].pfMarks<0)
            {
                cout<<"Please Enter Valid numbers: ";
                cin>>array[i].pfMarks;
            }
            cout<<endl;
            cout<<"Please Enter Total Numbers: ";
            cin>>array[i].totalMarks;
            while(array[i].totalMarks>300||array[i].totalMarks<0 || array[i].totalMarks<(array[i].pfMarks+array[i].dldMarks+array[i].ictMarks))
            {
                cout<<"Please Enter Valid numbers: ";
                cin>>array[i].totalMarks;
            }
            cout<<endl;
        }
        array[i].average=average(array[i]);
        array[i].percentage=percent(array[i],array[i].totalMarks);
        array[i].grade=grade(array[i].percentage);
    }
    for(int i=0;i<size;i++)
    {
        cout<<"Roll no: "<< array[i].rollNo<<endl;
        cout<<"Name : "<< array[i].name<<endl;
        cout<<"Percentage: "<<array[i].percentage<<endl;
        cout<<"Average: "<<array[i].average<<endl;
        cout<<"Grade: "<<array[i].grade<<endl;
        cout<<endl;
    }
    return 0;
}