#include <iostream>
#include<iomanip>
using namespace std;
int  main()
{
	int  num,square, cube, i;
	cout<<"NUM "<<setw(10)<<"SQUARE"<<setw(10)<<" CUBE"<<endl;
	for (i=0; i<=9; i++)
	{
		num=i;
		square=i*i;
		cube = i*i*i;
		cout<<num<<setw(10)<<square <<setw(10)<<cube<<endl;
		
	}
	return 0;
}
