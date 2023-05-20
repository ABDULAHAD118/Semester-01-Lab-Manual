
#include <iostream>
using namespace std;
int factorial(int& z, int& k);
int main()
{
	int a,input=1;
	cout<<"Enter the number to get factorial: "<<endl;
	cin>>a;
	factorial(a,input);
	cout<<"The factorial of "<<a<<" is "<<input<<endl;
	return 0;
}
int factorial(int& z, int& k)
{
	for(int i=z; i>=1; i--)
	{
		k*=i;
	}
}
