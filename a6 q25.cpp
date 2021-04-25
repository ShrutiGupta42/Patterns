//isoceles triangle pattern of stars
#include<iostream>
using namespace std;

int main()
{
	int i, j,s;
	
	for(i=1; i<=5; i++)
	{
		for(s=5; s>=i; s--)
		{
		   cout<<" ";
		}
		for( j=0; j<i; j++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
	
	return 0;
}
