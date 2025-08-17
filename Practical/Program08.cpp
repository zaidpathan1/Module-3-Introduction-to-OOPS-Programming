#include <iostream> 
using namespace std;
int main()
{
	int score;
	cout<<"Enter the student's score : ";
	cin>>score;
		
	if(score > 90)
	{
		cout<<"Student has A grade.";
	}
	else if(score <= 90 && score > 75)
	{
		cout<<"Student has B grade.";
	}
	else if(score <= 75 && score > 50)
	{
		cout<<"Student has C grade.";
	}
	else
	{
		cout<<"Student has D grade.";
	}
	
	return 0; 
}