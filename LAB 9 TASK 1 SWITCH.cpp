#include<iostream>
using namespace std;
int main()
{
	int division,subject,marks;
	cout<<"Enter the division(1st, 2nd, 3rd)"<<endl;
	cin>>division;
	cout<<"Enter the number of subject which failed"<<endl;
	cin>>subject;
	switch(division)
	{
		case 1:
		if(subject>3)
		{
			cout<<"No Grace Marks";
		}
		else if(subject<=3)
		{
			marks = subject * 5;
			cout<<"The grace marks of "<<subject<<" subject is "<<marks;
		}
		break;
		case 2:
			if(subject>2)
			{
				cout<<"No Grace Marks";
			}
			else if (subject<=2)
			{
				marks = subject * 4;
				cout<<"The grace marks of "<<subject<<" subject is "<<marks;
			}
		break;
		case 3:
			if(subject > 1)
			{
				cout<<"No grace marks";
			}
			else if(subject ==1)
			{
				cout<<"The grace marks of 1 subject is 5";
			}
		break;
		default:
			cout<<"Invalid input";
		}
}

