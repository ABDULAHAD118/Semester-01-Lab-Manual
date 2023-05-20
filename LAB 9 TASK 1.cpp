#include <iostream>
using namespace std;
int getmarks();
void getgrace(int ,int);
int main()
{
	getmarks();
	return 0;
}
int getmarks()
{
	int division,subject;
	cout<<"Enter your divsion: "<<endl;
	cin>>division;
	cout<<"Enter number of subject you failed: "<<endl;
	cin>>subject;
	getgrace(division, subject);
}
void getgrace(int division, int subject)
{
	if(division == 1)
	{
		if(subject > 3)
		{
			cout<<"No grace marks will awarded"<<endl;
		}
		else if(subject<=3)
		{
			cout<<"5 Marks will be awarded"<<endl;
		}
	}
	else if(division == 2)
		{
			if (subject >2 )
			{
				cout<<"No grace marks will be awarded"<<endl;
			}
			else if(subject <=2)
			{
				cout<<"4 Marks will be awarded "<<endl;
			}
		}
	else if(division ==3)
	{
		if (subject > 1)
		{
			cout<<"No garce marks will awarded"<<endl;
		}
		else if(subject == 1)
		{
			cout<<"5 Grace marks will awarded"<<endl;
		}
	}
	else
		cout<<"Invalid input"<<endl;
}

