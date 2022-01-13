#include<iostream>
using namespace std;
main()
{
	for (int a=1;a<=5;a++)
	{
		for (int b=4;b>=a;b--)
		{
			cout<<" ";
		}
		for(int b=2;b<=a*2;b++)
		{
			cout<<"*";	
		}
		for(int c=9;c>=a*2;c--)
		{
			cout<<" ";
		}
		for(int d=2;d<=a*2;d++)
		{
			cout<<"*";
		}
	cout<<endl;
	}
	for(int a=1;a<=4;a++)
	{
		for (int b=1;b<=a;b++)
		{
			cout<<" ";
		}
		for(int b=8;b>=a*2;b--)
		{
			cout<<"*";
		}
		for(int c=1;c<=a*2;c++)
		{
			cout<<" ";
		}
		for(int d=8;d>=a*2;d--)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}
