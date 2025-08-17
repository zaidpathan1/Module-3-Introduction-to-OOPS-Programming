#include <iostream> 
#include <cstdlib> 
using namespace std;
int main()
{
	int randomNum = rand() % 101;
	int num=102;
	
		
	while(randomNum != num)
	{
		cout<<"Guess the number : ";
		cin>>num;
		if(randomNum > num)
		{
			cout<<"Wrong! Guess is smaller than the number"<<endl;
		}
		else if(randomNum < num){
			cout<<"Wrong! Guess is larger than the number"<<endl;
		}
		else {
			break;
		}
	}
	cout<<"Correct Guess"<<endl<<"The number is "<<randomNum;
	
	return 0; 
}