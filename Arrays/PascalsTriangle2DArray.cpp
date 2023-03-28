///Pascal's Triangle

#include<iostream>
using namespace std;
int main()
{
    int rows;
    cout<<"Enter No. Of rows: ";
    cin>> rows;
    int sum[rows][rows]={0};
    //for storing the sums of the series on the indices
    for(int index=0;index<rows;index++)
    {
        sum[0][0]=1;
        
        for(int coloumn=0; coloumn<=index;coloumn++)
        {
            if(coloumn==0 || coloumn==index)//for keeping first and last element 1
            {
                if(coloumn==index)
                {
                sum[index][coloumn]=sum[index][coloumn]+sum[index-1][coloumn-1];
                }
                else if(coloumn==0)
                {
                sum[index][coloumn]=sum[index][coloumn]+sum[index-1][coloumn];
                }
            }
            else
            sum[index][coloumn]=sum[index-1][coloumn-1]+ sum[index-1][coloumn];//calculating the sum of the indices
        } 
   
    }
    int temp=rows;
    for(int i=0;i<rows;i++)
    {
        
        for(int spaces=temp-1;spaces>0;spaces--)
        cout<<" ";
        for(int j=0;j<=i;j++)
        cout<<sum[i][j]<< " ";
        cout<< endl;
        temp--;
    }
    return 0;
}
