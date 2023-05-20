#include<iostream>
using namespace std;
int main()
{
	int number, remainder = 1, value = 0, result;
	cout<<"Enter a number"<<endl;
	cin>>number;
	int number1 = number;
	while(number1 != 0)
	{
		remainder = number1 % 10;
		number1 = number1/10;
		value = (value*10 + remainder);
		cout<<value<<endl;
	}
	if(value == number)
	{
		cout<<"The number is Palindrome";
		
	}
	else{
		cout<<"The number is not Palindrome";
	}
	return 0;
}
