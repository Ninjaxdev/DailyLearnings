#include<iostream>
using namespace std;

//int arr[4][3];
//index=row index*col+col index
//row index=index / col
//col index=index % col

void printcol(int arr[][4],int row,int col)
{
    for(int j=0;j<col;j++)
     {
       for(int i=0;i<row;i++)
        {
          cout<<arr[i][j]<<" ";
        }
         cout<<endl;
    }
}

int main()
{
int arr[4][3]={1,2,3,4,5,6,7,8,9,10,11,12};
for(int i=0;i<4;i++)
{
    for(int j=0;j<3;j++)
    {
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
//search element in matrix
int x=5;
for(int i=0;i<4;i++)
{
    for(int j=0;j<3;j++)
    {
       if(arr[i][j]==x)
        {
            cout<<"element found"<<endl;
            break;
        }    
    }
}
cout<<"element not found"<<endl;
//pass matrix in function
int mat[3][4]={4,1,5,6,7,8,9,4,5,8,30,10};
printcol(mat,3,4);
return 0;
}






