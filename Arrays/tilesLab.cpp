#include<iostream>
using namespace std;
#include<cmath>
int main()
{
    float areaR,lenR,widR,lenT,widT,areaT;
    //area of the room;
    cout<<"Enter the Length of the room: "<<endl;
    cin>> lenR;
    lenR=lenR* 0.3048;//in meters
    cout<<"Enter the width of the room: "<<endl;
    cin>> widR;
    widR=widR *0.3048;//in meters;
    
    areaR= lenR*widR;//area of room in msq

    lenT=24;
    lenT=lenT/12;//in feet
    lenR=lenT* 0.3048;//length of tile in meters

    widT=24;
    widT=widT/12;//in feet
    widT=widT *0.3048;//in meters;

    areaT=lenR*widT;//area of tile in meter;

    float box=1.44;
    float tiles= areaR/box;
    int ntiles=tiles;
    float total=tiles-ntiles;
    cout<<"The no of. tiles in the box will be: \n";
    cout<< ceil(box/areaT)<<endl;
    
    cout<<"The no of. boxes in room will be: \n";
    cout<< floor(areaR/ box) <<endl;

    cout<<"The no. of tiles in room will be: \n";
    float ctiles =ceil(areaR/areaT);
    if(total> 0 && total<0.25)
        cout<<ctiles + 1<<" + 1 extra tiles"<<endl;
    else if(total>=0.25 && total<0.5)
        cout<< ctiles + 2<<" + 2 extra tiles"<<endl;
    else if(total>=0.5 && total<0.75)
        cout<< ctiles + 3 <<" + 3 extra tiles"<<endl;
    else if(total>=0.75 && total <1)
        cout<< ctiles + 4<<" + 4 extra tiles"<<endl;
    else
    cout<< ceil(areaR/areaT)<<endl;


    return 0;
}