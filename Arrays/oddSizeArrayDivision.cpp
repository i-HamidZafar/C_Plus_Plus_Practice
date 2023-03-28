#include<iostream>
using namespace std;
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
    for(int index=0;index<5;index++)
    cin>>elements[index];
    
    float tempArray[size];
    int sizeofFirstPart= size/2;
    int sizeOfPartSecond=size-sizeofFirstPart;
    int sizeOfCombinedArray=sizeofFirstPart+sizeOfPartSecond;

    for(int i=0; i<size;i++)
    tempArray[i]=elements[i];
    float multiplication;
    cout<<"Enter the Value for multiplying elements of array: ";
    cin>> multiplication;
    
    //multiplication of elements
    for(int index=0;index<size;index++)
    elements[index]=elements[index]*multiplication;

    cout<< "Elements after Multiplication: ";
    for(int index=0;index<size;index++)
    cout<<elements[index]<<" "; 
 
    cout<<endl;
    //sorting 
    for(int minIndex=0; minIndex<size; minIndex++)
    {
        for(int comparingIndex=minIndex+1;comparingIndex<size;comparingIndex++)
        {
            if(elements[minIndex] < elements[comparingIndex])
            {
                float temp= elements[minIndex];
                elements[minIndex]=elements[comparingIndex];
                elements[comparingIndex]=temp;
            }
        }            
    }
    cout<<"Descending Order: ";
    for(int i=0;i<size;i++)
    cout<<elements[i] <<" ";
    cout<<endl;
    float division;
    cout<<"Enter the Value for Division of elements of array: ";
    cin>> division;

    //division of elements
    for(int index=0;index<size;index++)
    elements[index]=elements[index]/division;

    cout<< "Elements after Division: ";
    for(int index=0;index<size;index++)
    cout<<elements[index]<<" "; 

    cout<<endl;
    
    //sorting 
    for(int minIndex=0; minIndex<size; minIndex++)
    {
        for(int comparingIndex=minIndex+1;comparingIndex<size;comparingIndex++)
        {
            if(elements[minIndex] > elements[comparingIndex])
            {
                float temp= elements[minIndex];
                elements[minIndex]=elements[comparingIndex];
                elements[comparingIndex]=temp;
            }
        }
    }

    cout<<"Ascending Order: ";
    for(int i=0;i<size;i++)
    cout<<elements[i] <<" ";
    cout<<endl;

    cout<<"current Element array: ";
    for(int i=0;i<size;i++)
    cout<<elements[i] <<" ";
    cout<<endl;
       
    cout<<"First Element array: ";
    for(int i=0;i<size;i++)
    cout<<tempArray[i] <<" ";
    cout<<endl;

    //subtracting 
    for(int i;i<size;i++)
    tempArray[i]= tempArray[i]-elements[i];

    cout<<"Result after subtraction of elements: ";
    for(int index=0;index<size;index++)
    cout<<tempArray[index]<<" ";    
    cout<<endl;

    //Dividing the array     
    float arrPartOne[sizeofFirstPart];

    for(int i=0; i<sizeofFirstPart;i++)
    arrPartOne[i]= tempArray[i];

    cout<<"Elements of First Part of Array: ";

    for(int i=0; i<sizeofFirstPart;i++)
    cout<<arrPartOne[i]<<" ";
    cout<<endl;

//second array
    float arrPartSecond[sizeOfPartSecond];

    int secIndex=sizeOfPartSecond-1;
    for(int i=0; i<sizeOfPartSecond; i++)
    {
        
        arrPartSecond[i]=tempArray[secIndex];
        secIndex++;
    }

    cout<<"Elements of Second Part of the Array: ";
    for(int i=0; i<sizeOfPartSecond; i++)
    cout<<arrPartSecond[i]<<" ";
    cout<<endl;

    //swaping
    int maxIndex=sizeOfPartSecond-1;
    for(int minIndex=0;minIndex<sizeofFirstPart;minIndex++)
    {
        float temp=arrPartOne[minIndex];
        arrPartOne[minIndex]=arrPartSecond[maxIndex];
        arrPartSecond[maxIndex]=temp;
        maxIndex--;       
    }

    cout<<"Elements of First Part of Array: ";

    for(int i=0; i<sizeofFirstPart;i++)
    cout<<arrPartOne[i]<<" ";
    cout<<endl;

    cout<<"Elements of Second Part of the Array: ";

    for(int i=0; i<sizeOfPartSecond; i++)
    cout<<arrPartSecond[i]<<" ";
    cout<<endl;

    //combining arrays

    float combinedArray[size];
    for(int i =0;i<size; i++)
    {
        
        if(i<sizeofFirstPart)
        combinedArray[i]=arrPartOne[i];
        else if(i>sizeofFirstPart-1)
        {
            int checkIndex=i-sizeofFirstPart;
            combinedArray[i]=arrPartSecond[checkIndex];
            checkIndex++;
        }
    }
    cout<<"Combined Array: ";
    for(int i=0; i<size; i++)
    {
        cout<<combinedArray[i]<<" ";
    }

    return 0;
}