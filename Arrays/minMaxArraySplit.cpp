#include<iostream>
using namespace std;
float minimum(float *arr,int size)
{
    int arrSize=sizeof(arr)/sizeof(arr[0]);
    float minimum=arr[0];
    for(int index=1;index<size;index++)
    {
        if(minimum>*(arr+index))
        {
            minimum=*(arr+index);
        }
    }
    return minimum;
}
float maximum(float *arr,int size)
{
    int arrSize=sizeof(arr)/sizeof(arr[0]);
    float maximum=arr[0];
    for(int index=1;index<size;index++)
    {
        if(maximum<*(arr+index))
        {
            maximum=arr[index];
        }
    }
    return maximum;
}
int main ()
{
    int sizeOfArray=0;//to prevent garbage value;
    cout<<"Enter the Size of the array: ";
    cin>>sizeOfArray;
    while(sizeOfArray<1)
    {
        cout<<"Please enter a valid size of the array: ";
        cin>>sizeOfArray;
    }
    float elements[sizeOfArray];

    int size=sizeof(elements)/sizeof(elements[0]);
    cout<<"Enter "<< size<<" Elements of Array: ";
    for(int index=0;index<size;index++)
    cin>>elements[index];


    int sizeofFirstPart,sizeOfPartSecond;
    float tempArray[size];
    if(size%2==0)
    {  
        sizeofFirstPart= size/2; 
        sizeOfPartSecond=size-sizeofFirstPart;
    }
    if(size%2==1)
    {
        sizeofFirstPart= size/2; 
        sizeOfPartSecond=size-sizeofFirstPart-1;
    }
    int sizeOfCombinedArray=sizeofFirstPart+sizeOfPartSecond;

    for(int i=0;i<size;i++)
    {
        tempArray[i]=elements[i];
    }
    //Dividing the array     
    
    float arrPartOne[sizeofFirstPart];

    for(int i=0; i<sizeofFirstPart;i++)
    arrPartOne[i]= elements[i];

    //second array
    float arrPartSecond[sizeOfPartSecond];

    int secIndex=sizeofFirstPart;
    for(int i=0; i<sizeOfPartSecond; i++)
    {
        
        arrPartSecond[i]=elements[secIndex];
        secIndex++;
    }

    cout<<"Elements of First Part of Array: ";
    for(int i=0; i<sizeofFirstPart;i++)
    cout<<arrPartOne[i]<<" ";
    cout<<endl;

    cout<<"Elements of Second Part of the Array: ";

    for(int i=0; i<sizeofFirstPart; i++)
    cout<<arrPartSecond[i]<<" ";
    cout<<endl;

    float min[2],max[2];
    min[0]=arrPartOne[0];
    max[0]=arrPartOne[0];
    for(int index=1;index<sizeofFirstPart;index++)
    {
        if(min[0]>arrPartOne[index])
        {
            min[0]=arrPartOne[index];
        }
        if(max[0]<arrPartOne[index])
        {
            max[0]=arrPartOne[index];
        }
    }
    min[1]=arrPartSecond[0];
    max[1]=arrPartSecond[0];
    for(int index=1;index<sizeOfPartSecond;index++)
    {
        if(min[1]>arrPartSecond[index])
        {
            min[1]=arrPartSecond[index];
        }
        if(max[1]<arrPartSecond[index])
        {
            max[1]=arrPartSecond[index];
        }
    }
    cout<<"Mininum and maximum element of first array: ";
    cout<<min[0] <<" " << max[0]<<endl;

    cout<<"Mininum and maximum element of second array: ";
    cout<<min[1] <<" " << max[1];
    int counter=0,checkIndex;
    for(int i=0;i<2;i++)
    {
        if(min[i]==min[1] || min[i] ==max[i])
        {
            if(min[i]==min[1])
            {
                checkIndex=min[1];
                continue;
            }
            else if(min[i]==max[1])
            {
                checkIndex=min[i];
                continue;
            }
        }
        else
        counter++;
    }
    int combined[counter];
    for(int index=0;index<4;index++)
    {
        if(index<2)
        combined[index]=min[index];
        if(index>1)
        combined[index]=max[index-2];
    }
    cout<<endl;
    cout<<"combined array : ";
    for(int i=0; i<4;i++)
    cout<<combined[i] <<" ";

    cout<<endl;

    cout<<minimum(arrPartSecond,sizeofFirstPart);

    return 0;
}