#include<iostream>
using namespace std;
 main()
{
	int number,check=0,i;
	cout<<"Enter Number To check = ";
	cin>>number;
	for(i=1;i<=number;i++)
	{
		if(number%i==0)
		{
			check++;
		}
	}
	if(check==2)
	{
		cout<<"Number is Prime ... "<<endl;
	}
	else
	{
		cout<<"Number is not Prime... "<<endl;
	}
}
