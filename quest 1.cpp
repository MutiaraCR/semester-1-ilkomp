#include<iostream>
using namespace std;
void bilangan(int n)
{

	if(n==1)
	{	cout<<"satu";	}
	else if(n==2)
	{	cout<<"dua";	}
	else if(n==3)
	{	cout<<"tiga";	}
	else if(n==4)
	{	cout<<"empat";	}
	else if(n==5)
	{	cout<<"lima";	}
	else if(n==6)
	{	cout<<"enam";	}
	else if(n==7)
	{	cout<<"tujuh";	}
	else if(n==8)
	{	cout<<"delapan";	}
	else if(n==9)
	{	cout<<"sembilan";	}
	else if(n>=10)
	{	cout<<"Lebih dari 9";	}
	
	exit(n);
}

int main()
{
	int n;
	cin>>n;
	bilangan(n);
}
