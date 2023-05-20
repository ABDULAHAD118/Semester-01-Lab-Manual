#include<iostream>
using namespace std;
int main()
{
	int salary, deduction;
	cout<<"ENTER THE SALARY OF EMPLOYEE"<<endl;
	cin>>salary;
	deduction=salary*0.7;
	switch(salary/10000)
	{
		case 0:
			cout<<"NO DEDUCTION";
			break;
		case 1:
			cout<<"DEDUCT Rs.1000  SALARY FOR FUND"<<endl;
			break;
		default:
			cout<<"DEDUCT 7% FROM THIS Rs.	"<<deduction<<" SALARY FOR FUND"<<endl;
			break;
	}
	return 0;
}
