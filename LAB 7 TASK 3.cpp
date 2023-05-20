#include<iostream>
using namespace std;
int main()
{
	int table,a, i;
	cout<<"ENTER THE NUMBER"<<endl;
	cin>>table;
	for (i=1; i<=10; i++)
	{
		a=table*i;
		cout<<table<<"*"<<i<<"="<<a<<endl;
	}
}
