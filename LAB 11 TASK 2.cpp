#include<iostream>
using namespace std;
void print(int[][4], int,int);
void checker(int[][4],int,int);
int smallest;
int main()
{
	int arr[4][4];
	
	for(int i=0;i<4;i++)
	{
	cout<<"Enter the value "<<i+1<<" of row"<<endl;
	for(int j=0;j<4;j++)
	{
		cin>>arr[i][j];
	}
	}
	print(arr,4,4);
	checker(arr,4,4);
	return 0;
}
void print(int array[][4], int i,int j)
{
	cout<<"Matrix : "<<endl;
	for(int y=0; y<i; y++)
	{
		for(int z=0;z<j; z++)
		{
			cout<<array[y][z]<<"\t";
		}
		cout<<endl;
	}
}
void checker(int array[][4], int y,int z)
{
	for(int i=0; i<y;i++)
	{
		smallest = array[i][0];
		for(int j=0;j<z; j++)
		{
			if(smallest>=array[j][i])
			{
				smallest= array[j][i];
			}
		}
		cout<<"The smallest value of column "<<i+1<<" is "<<smallest<<endl;
	}
}
