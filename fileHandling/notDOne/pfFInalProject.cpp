#include<iostream>
#include<fstream>
using namespace std;
const int MAX_ENTRIES = 100;
struct details {
    string name;
    int phoneNum;
    string address;
    string bloodGroup;
}bloodGroup[MAX_ENTRIES];

int entries = 0;

//function to read data from file 
void readFromFile(){
    ifstream databaseFile;
    databaseFile.open("E:\\databaseFile.dat", ios::binary);
    if(databaseFile.is_open())
    {
        while(databaseFile.read((char*)&bloodGroup[entries], sizeof(details)))
        {
            cout<<bloodGroup[entries].address <<" "<<bloodGroup[entries].name<<" " << bloodGroup[entries].phoneNum <<" "<< bloodGroup[entries].bloodGroup<<endl; 
            entries++;
        }
        databaseFile.close();
    }
    else
    {
        cout<<"Error: Could not open file"<<endl;
    }
}

//function to write data to file
void writeToFile(){
    ofstream databaseFile;
    databaseFile.open("E:\\databaseFile.dat", ios::binary);
    if(databaseFile.is_open()){
        for(int i=0;i<entries;i++)
            databaseFile.write((char*)&bloodGroup[i], sizeof(details));
        databaseFile.close();
    }else{
        cout<<"Error: Could not open file"<<endl;
    }
}

//function to add a new entry to the data
void addEntry(){
    if(entries < MAX_ENTRIES)
    {
        cout<<"Enter name: ";
        cin>>bloodGroup[entries].name;
        cout<<"Enter phone number: ";
        cin>>bloodGroup[entries].phoneNum;
        cout<<"Enter address: ";
        cin>>bloodGroup[entries].address;
        cout<<"Enter blood group: ";
        cin>>bloodGroup[entries].bloodGroup;
        entries++;
    }else
    {
        cout<<"Error: Maximum entries reached"<<endl;
    }
}

//function to update an entry from data
void updateEntry()
{
    string name;
    cout<<"Enter name of the entry you want to update: ";
    cin>>name;
    for(int i=0;i<entries;i++) 
    {
        if(bloodGroup[i].name == name) 
        {
            cout<<"Enter new phone number: ";
            cin>>bloodGroup[i].phoneNum;
            cout<<"Enter new address: ";
            cin>>bloodGroup[i].address;
            cout<<"Enter new blood group: ";
            cin>>bloodGroup[i].bloodGroup;
            cout<<"Entry updated"<<endl;
            break;
        }
    }
}


//Function to delete an entry
void deleteEntry(){
    string name;
    cout<<"Enter name of the entry you want to delete: ";
    cin>>name;
    for(int i=0;i<entries;i++) 
    {
        if(bloodGroup[i].name == name) 
        {
            for(int j = i;j<entries-1;j++)
                bloodGroup[j] = bloodGroup[j+1];
            entries--;
            cout<<"Entry deleted"<<endl;
            break;
        }
    }
}

//function to search an entry
void searchEntry(){
    string name;
    cout<<"Enter name of the entry you want to search: ";
    cin>>name;
    for(int i=0;i<entries;i++) 
    {
        if(bloodGroup[i].name == name)
        {
            cout<<"Name: "<<bloodGroup[i].name<<endl;
            cout<<"Phone Number: "<<bloodGroup[i].phoneNum<<endl;
            cout<<"Address: "<<bloodGroup[i].address<<endl;
            cout<<"Blood Group: "<<bloodGroup[i].bloodGroup<<endl;
            break;
        }
    }
}

int main() 
{
    int choice;
    while (1) 
    {
        cout<<"1. Add entry"<<endl;
        cout<<"2. Update entry"<<endl;
        cout<<"3. Delete entry"<<endl;
        cout<<"4. Search entry"<<endl;
        cout<<"5. Read"<<endl;
        cout<<"6. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice) {
            case 1:
                addEntry();
                break;
            case 2:
                updateEntry();
                break;
            case 3:
                deleteEntry();
                break;
            case 4:
                searchEntry();
                break;
            case 5:
                readFromFile();
                break;
            
            case 6:
                writeToFile();
                return 0;
            default:
                cout<<"Invalid choice"<<endl;
        }
    }
    return 0;
}
