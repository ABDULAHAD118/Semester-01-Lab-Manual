#include <iostream>
using namespace std;
int main()
{
	const int days = 7;
	int temp[days], sum=0;
	for(int i = 0 ; i < days ; i++)
	{
		cout<<"Enter the temperature "<<i+1<<endl;
		cin>>temp[i];
	}
	for(int j = 0 ; j < days ; j++)
	{
		sum=sum+temp[j];
	}
	float avg = sum/days;
	cout<<"The average of 7 days temperature is "<<avg;
	return 0;
}
