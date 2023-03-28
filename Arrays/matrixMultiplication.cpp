#include <iostream>
using namespace std;
int main()
{
    int rowA,columnA,rowB,columnB,sum;
    cout<<"Enter The rows of Matrix A: ";
    cin>> rowA;
    cout<<"Enter The columns of Matrix A: ";
    cin>> columnA;
    cout<<"Enter The rows of Matrix B: ";
    cin>> rowB;
    cout<<"Enter The columns of Matrix B: ";
    cin>> columnB;
    int matrixA[rowA][columnA],matrixB[rowB][columnB],matrixC[rowA][columnB];
    cout<<"Enter the elements of Matrix A: ";
    for(int i=0;i<rowA;i++)
    {
        for(int j=0; j<columnA;j++)
        cin>>matrixA[i][j];
    }
    cout<<"Enter the elements of Matrix B: ";
    for(int i=0;i<rowB;i++)
    {
        for(int j=0; j<columnB;j++)
        cin>>matrixB[i][j];
    }
    if(columnA==rowB)
    {
        for(int row=0; row<rowA; row++)
        {
            for(int column=0;column<columnB;column++)
            {
                sum=0;
                for(int index=0;index<rowB;index++)
                sum=sum+ matrixA[row][index]* matrixB[index][column];
                matrixC[row][column]=sum;
            }   
        }
        cout<<"The Matrix A.B contains: ";
        for(int i=0;i<rowA;i++)
        {
            for(int j=0; j<columnB;j++)
            cout<<matrixC[i][j] <<" ";
        }
        cout<< endl;
    }
    else
    cout<<"The Product of Matrices is not Possible.";
    
    return 0;
}