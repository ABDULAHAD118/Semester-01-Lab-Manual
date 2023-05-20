#include<iostream>
using namespace std;
int main()
{
	char grade;
	cout<<"ENTER THE GRADE OF STUDENT (A, B, C, D, F)"<<endl;
	cin>>grade;
	switch(grade)
	{
	case 'A':
		cout<<"Excellent"<<endl;
		break;
	case 'B':
		cout<<"Very Good"<<endl;
		break;
	case 'C':
		cout<<"Good"<<endl;
		break;
	case 'D':
		cout<<"Poor"<<endl;
		break;
	case 'F':
		cout<<"Fail"<<endl;
		break;
	default:
		cout<<"Invaild Input"<<endl;
		break;
}
	return 0;
}
