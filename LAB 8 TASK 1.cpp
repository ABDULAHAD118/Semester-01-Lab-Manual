#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the height"<<endl;
    cin>>a;
    cout<<"Enter the width "<<endl;
    cin>>b;
    for(int i=1; i<=a; i++)
    {
        for(int j=1; j<=b;j++)
        {
            if(i == 1 || i == a)
            {
                cout<<"*";
            }
            else if(j == 1 || j == b)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
