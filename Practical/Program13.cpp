#include <iostream> 
using namespace std;

int fact(int n);

int main()
{
	int n;
	cout<<"Enter the value : ";
	cin>>n;
	while (n<0)
	{
		cout<<"Please Enter the valid number!";
		cout<<"\n\nEnter the value : ";
		cin>>n;
	}
	cout<<"Factorial of the value is : "<<fact(n);
	return 0;
}

int fact(int n)
{
	if(n==0)
	{
		return 1;
	}
	return fact(n-1) * n;
}