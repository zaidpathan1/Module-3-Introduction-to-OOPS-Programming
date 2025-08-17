#include <iostream> 

using namespace std;
int main()
{
	int num;
	cout<<"Guess the number : ";
	cin>>num;
	cout<<"Table of number "<<num;

	for(int i=1;i<=10;i++)
	{
		
		cout<<num<<" X "<<i<<" = "<<i*num<<endl;
		
	}
	
	return 0; 
}