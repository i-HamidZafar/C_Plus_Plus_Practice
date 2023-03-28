#include<iostream>
using namespace std;
int main ()
{
    float elements[10];
    float tempArray[10];
    cout<<"Enter 10 Elements of Array: ";
    for(int index=0;index<10;index++)
    cin>>elements[index];


    for(int i=0; i<10;i++)
    tempArray[i]=elements[i];
    float multiplication;
    cout<<"Enter the Value for multiplying elements of array: ";
    cin>> multiplication;
    
    //multiplication of elements
    for(int index=0;index<10;index++)
    elements[index]=elements[index]*multiplication;

    cout<< "Elements after Multiplication: ";
    for(int index=0;index<10;index++)
    cout<<elements[index]<<" "; 
 
    cout<<endl;
    //sorting 
    for(int minIndex=0; minIndex<10; minIndex++)
    {
        for(int comparingIndex=minIndex+1;comparingIndex<10;comparingIndex++)
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
    for(int i=0;i<10;i++)
    cout<<elements[i] <<" ";

    cout<<endl;

    float division;
    cout<<"Enter the Value for Division of elements of array: ";
    cin>> division;

    //division of elements
    for(int index=0;index<10;index++)
    elements[index]=elements[index]/division;

    cout<< "Elements after Division: ";
    for(int index=0;index<10;index++)
    cout<<elements[index]<<" "; 

    cout<<endl;
    
    //sorting 
    for(int minIndex=0; minIndex<10; minIndex++)
    {
        for(int comparingIndex=minIndex+1;comparingIndex<10;comparingIndex++)
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
    for(int i=0;i<10;i++)
    cout<<elements[i] <<" ";
    cout<<endl;

    //subtracting 
    for(int i;i<10;i++)
    tempArray[i]= tempArray[i]-elements[i];

    cout<<"Result after subtraction of elements: ";
    for(int index=0;index<10;index++)
    cout<<tempArray[index]<<" ";    
    cout<<endl;

    //Dividing the array 
    
    float arrPartOne[5];

    for(int i=0; i<5;i++)
    arrPartOne[i]= tempArray[i];

    cout<<"Elements of First Part of Array: ";

    for(int i=0; i<5;i++)
    cout<<arrPartOne[i]<<" ";
    cout<<endl;

//second array
    float arrPartSecond[5];

    int secIndex=5;
    for(int i=0; i<5; i++)
    {
        
        arrPartSecond[i]=tempArray[secIndex];
        secIndex++;
    }

    cout<<"Elements of Second Part of the Array: ";
    for(int i=0; i<5; i++)
    cout<<arrPartSecond[i]<<" ";
    cout<<endl;

    //swaping
    int maxIndex=4;
    for(int minIndex=0;minIndex<5;minIndex++)
    {
        float temp=arrPartOne[minIndex];
        arrPartOne[minIndex]=arrPartSecond[maxIndex];
        arrPartSecond[maxIndex]=temp;
        maxIndex--;       
    }

    cout<<"Elements of First Part of Array: ";

    for(int i=0; i<5;i++)
    cout<<arrPartOne[i]<<" ";
    cout<<endl;

    cout<<"Elements of Second Part of the Array: ";

    for(int i=0; i<5; i++)
    cout<<arrPartSecond[i]<<" ";
    cout<<endl;

    //combining arrays

    int combinedArray[10];
    for(int i =0;i<10; i++)
    {
        
        if(i<5)
        combinedArray[i]=arrPartOne[i];
        else if(i>4)
        {
            int checkIndex=i-5;
            combinedArray[i]=arrPartSecond[checkIndex];
            checkIndex++;
        }
    }
    cout<<"Combined Array: ";
    for(int i=0; i<10; i++)
    {
        cout<<combinedArray[i]<<" ";
    }

    return 0;
}