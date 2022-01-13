#include<conio.h>
#include<iostream>
using namespace std;
main ()
{
	
	for(int a=1;a<=9;a++)
	{
		for(int b=1;b<=16;b++)
		{
			if(a==1 ||a==2 || b==1 ||b==2 ||b==8 ||b==9 ||b==15 ||b==16)
			cout<<"M";
			else cout<<" ";
		}
		{
		cout<<"  ";
		}
		for(int b=19;b<=20;b++)
		{
			if(b==19 ||b==20)
			cout<<"I";
			else cout<<" ";
		}
		{
		cout<<"  ";
		}
		for(int b=24;b<=35;b++)
		{
			if(a==1 ||a==2 ||a==4 ||a==5 ||b==24 || b==25)
			cout<<"F";
			else cout<<" ";
		}
		cout<<endl;
	}

	return 0;
}
