#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	const int index = 10;
	int array1[index] = {1,2,3,4,5,6,7,8,9,10};
	int array2[index] = {};
	cout<<setw(8)<<"Array1"<<setw(8)<<"Array2"<<endl;
	for(int i = 0, j = index-1; i< index, j>=0; i++, j--)
	{
		array2[i] = array1[j];
	}
	for(int k=0; k<index; k++)
	{
		cout<<setw(8)<<array1[k]<<setw(8)<<array2[k]<<endl;
	}
	return 0;
}
