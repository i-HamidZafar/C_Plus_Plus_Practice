//How do you create a structure that represents an employee record including 
//name , employee id , salary and a pointer to an array of their job title
//(stored as string)how would you implement a function that takes 
//a pointer to an employee record and
//updates their salary by a given percentage?

#include<iostream>
#include<string>

using namespace std;
struct employeeRecord
{
    string name;
    int employeeId;
    float salary;
    string * jobTitile;
};
void salaryUpdatePercentage(employeeRecord * a, float percentage)
{
    a->salary = (a->salary + ((a->salary * percentage / 100)));
}
void salaryUpdatePercentageDecrement(employeeRecord * a, float percentage)
{
    a->salary = (a->salary - ((a->salary * percentage / 100)));
}
void salaryUpdate(employeeRecord * a, string jobTitle)
{

    if(jobTitle =="President")
    {
        
        a->salary = (a->salary + ((a->salary * 22 / 100)));
    }
    else if (jobTitle =="Director")
    {
        a->salary = (a->salary + ((a->salary * 17 / 100)));
    }
    else if (jobTitle =="DepartHead")
    {
        a->salary = (a->salary + ((a->salary * 14 / 100)));
    }
    else if (jobTitle =="Lecturer")
    {
        a->salary = (a->salary + ((a->salary * 9 / 100)));
    }    
    else if (jobTitle =="Lab Attendent")
    {
        a->salary = (a->salary + ((a->salary * 4.5 / 100)));
    }

    return ;
}
void salaryUpdateDecrement(employeeRecord * a, string jobTitle)
{
    
    if(jobTitle =="President")
    {
        
        a->salary = (a->salary - ((a->salary * 22 / 100)));
    }
    else if (jobTitle =="Director")
    {
        a->salary = (a->salary - ((a->salary * 17 / 100)));
    }
    else if (jobTitle =="DepartHead")
    {
        a->salary = (a->salary- ((a->salary * 14 / 100)));
    }
    else if (jobTitle =="Lecturer")
    {
        a->salary = (a->salary - ((a->salary * 9 / 100)));
    }    
    else if (jobTitle =="Lab Attendent")
    {
        a->salary = (a->salary- ((a->salary * 4.5 / 100)));
    }

    return ;
}

int main()
{
    int noOfEmployees;
    string job;
    cout<<"Please Enter the no. of Employees: ";
    cin>> noOfEmployees;
    while(noOfEmployees<1)
    {
        cout<<"Please Enter valid Size of no of employees";
        cin>> noOfEmployees;
    }
    string titleOfJob[5]={"President","Director","DepartHead","Lecturer","Lab Attendent"};
    int noOfTitles =sizeof(titleOfJob)/sizeof(titleOfJob[0]);
    employeeRecord comsats[noOfEmployees];
    for(int i=0;i <noOfEmployees;i++)
    {
        cout<<"Please enter the following details for the record of Employee: ";
        cout<<endl;

         cout<<"Name of the Employee: ";
        getline(cin >> ws, comsats[i].name);

        cout<<"Please enter the employee id: ";
        cin>> comsats[i].employeeId;
        cout<<endl;

        comsats[i].jobTitile = titleOfJob;
        cout<<"Please enter the Salary: ";
        cin >>  comsats[i].salary;
        cout<<endl;
        cout<<"Enter the job title of the employee: ";
        getline( cin >> ws, job);
        cout<<endl; 
    while(job != titleOfJob[0] && job != titleOfJob[1] && job != titleOfJob[2] && job != titleOfJob[3] && job != titleOfJob[4])
    {
        cout<<"Please enter the valid job title: ";
        cout<< "correct titles: \n";
        for(int i=0; i< noOfTitles; i++)
        {
            cout<<titleOfJob[i]<<" ";
        }  
        cout<<endl;
        getline(cin >> ws, job);
    }
    cout<<endl;
    float percentage;
    char check;
    cout<<"Do you want to give the Percentage number? \nType Y for Yes, N for No!\n";
    cin>>check;
    while(check!='Y' && check!='N')
    {
        cout<<"Please Type Y or N";
        cin>> check;
    }
    if(check=='Y')
    {
        cout<<"Enter the percentage: ";
        cin>> percentage;
        while(percentage<1)
        {
            cout<<"Please enter a positive number: ";
            cin>>percentage;
        }
        cout<<endl;
    }
    else if(check=='N')
    {
        cout<<"The default percentage will be used for incrementing and decrementing";
    }
    cout<<endl;
    char process;
    cout<< "Enter + for Increment && - for Decrement: ";
    cin>> process;
    while(process !='+' && process !='-')
    {
        cout<<"Please type + or -";
        cin>>process;
    }

    if(process=='+' && check=='N')
    salaryUpdate(&comsats[i], job);
    else if(process=='-' && check=='N')
    salaryUpdateDecrement(&comsats[i], job);
    else if(process=='+' && check=='Y')
    salaryUpdatePercentage(&comsats[i], percentage);    
    else if(process=='-' && check=='Y')
    salaryUpdatePercentageDecrement(&comsats[i], percentage);

    cout<<"Updated salary: "<<comsats[i].salary<<endl;
    }

return 0;

}