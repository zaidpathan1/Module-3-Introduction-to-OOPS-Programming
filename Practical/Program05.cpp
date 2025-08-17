#include<iostream>
#include<cmath>
using namespace std;
#define PI 3.14

int main() 
{
	int num1, num2;
	float num3,num4;
	const double av = 23.3223; 
	cout<<"Enter the value of interger Numbers :";
	cin>>num1>>num2;
	cout<<"Enter the value of Decimal Numbers :";
	cin>>num3>>num4;

	cout<<"Sum of Two Integer number is : "<<num1+num2<<endl;
	cout<<"Difference of Two Decimal number is : "<<fabs(num3-num4)<<endl;
	cout<<"PI value is : "<<PI<<endl;
	cout<<"const value is : "<<av;
	return 0;
	
}
