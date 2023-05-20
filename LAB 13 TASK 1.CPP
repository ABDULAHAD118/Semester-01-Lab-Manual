#include<iostream>
using namespace std;
int main()
{
	int a=4;
	double b=2.08;
	char c='A';
	int *a1=&a;
	double *b1=&b;
	char *c1=&c;
	cout<<"The address of interger is "<<&a<<endl;
	cout<<"The address of double is "<<&b<<endl;
	cout<<"The address of char is "<<&c<<endl;
	cout<<"The address of integer pointer is "<<&a1<<endl;
	cout<<"The address of double pointer is "<<&b1<<endl;
	cout<<"The address of char pointer is "<<&c1<<endl;
	cout<<"size"<<endl;
	cout<<"The size of integer is "<<sizeof(a)<<endl;
	cout<<"The size of double is "<<sizeof(b)<<endl;
	cout<<"The size of char is "<<sizeof(c)<<endl;
	cout<<"The size of integer pointer is "<<sizeof(a1)<<endl;
	cout<<"The size of double pointer is "<<sizeof(b1)<<endl;
	cout<<"The size of char pointer is "<<sizeof(c1)<<endl;
	cout<<"Value"<<endl;
	cout<<"The value of integer is "<<a<<endl;
	cout<<"The value of double is "<<b<<endl;
	cout<<"The value of char is "<<c<<endl;
	system("pause");
}