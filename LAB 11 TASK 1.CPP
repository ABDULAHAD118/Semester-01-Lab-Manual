#include<iostream>
using namespace std;
void calculate(int [], int, int&);
void calculategrade(int, char&);
int main()
{
		int marks[5],  a=0;
		char grade= ' ';
		calculate(marks, 5, a);
		calculategrade(a, grade);
		cout<<"Average of 5 subject  is :"<<a<<endl;
		cout<<"Your grade is :"<<grade<<endl;
		return 0;
}
void calculate( int array[],int x,int& a)
{
	int sum=0;
	for(int i=0; i<x; i++)
	{
	cout<<"Enter the marks "<<i+1<<" of subject"<<endl;
	cin>>array[i];
	sum=sum+array[i];
	
	}
	a=sum/x;
	
}

void calculategrade(int a, char& grade)
{
	if (a>=90)
	{
		grade='A';
	}
	else if (a>=80)
	{
		grade='B';
	}
	else if (a>=70)
	{
		grade='C';
	}
	else if (a>=60)
	{
		grade='D';
	}
	else
	{
		grade='F';
	}
}
