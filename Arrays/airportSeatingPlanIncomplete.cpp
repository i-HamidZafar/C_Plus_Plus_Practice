#include<iostream>
#include<array>
#include<string>
#include<cstdlib>
#include<algorithm>
#include <time.h>
using namespace std;
struct tickets
{
    int seatNo;
    string name;
    string passportNo;
    string tripType;
    string tickerType;
    bool status;

};
void informationDisplay(tickets a[]);

int reservation(tickets a);
int  businessSeatNo (tickets a);
int  businessSeatNo(tickets a)
{
    srand(time(0));
    int lowBound=1,upperBound=36;
    a.seatNo=(rand () % upperBound)+lowBound ;
    return a.seatNo;
}
int  economySeatNo(tickets a)
{
    srand(time(0));
    int lowBound=1,upperBound=100;
    a.seatNo=(rand () % upperBound)+lowBound ;
    return a.seatNo;
}

int main()
{
    int noOfSeats = 138;
    int economySeats=100;
    int businessSeats=noOfSeats-economySeats;
    tickets information[noOfSeats];

    //Setting status flag to 1 to show availablity
    //std::fill_n(information.status, noOfSeats, true);
    for (int i=0; i<noOfSeats;i++)
    information[i].status=true;
    cout<<"\t \tWelcome\n";
    cout<<"\tPlease choose the option:\nPress 1: for information\nPress 2: for Reservation\n";
    int option;
    cout<<"Please Choose an option: ";
    cin>>option;
    while(option>2 || option<1)
    {
        cout<<"Please enter valid input for the option: ";
        cin>> option;
    }
    switch(option)
    {
        case 1:
            informationDisplay(information);
            break;
        case 2:
            reservation(information);
            break;

        default:
        cout<<"Good Day!";
        break;
    }
   /* cout<<"Hello Welcome! \nA seat would be assigned to you after  filling the following information: \n";
    cout<< "Full Name: ";
    getline(cin >> ws, information[0].name);
    cout<< "Enter your Passport No: ";
    getline(cin >> ws, information[0].passportNo);
    string ticketType;
    information[0].seatNo= economySeatNo(information[0]);
    cout<<"Your seatNo number is: "<< information[0].seatNo;
*/
    return 0;    
}
void informationDisplay(tickets a[])
{
    for(int i=0;i< noOfSeats; i++ )
    cout<<a[i].status<<endl;
}
int reservation(tickets a)
{
    for(int i=0;i< 138; i++ )
    cout<<a[i].name<<endl;
    return 0;
}