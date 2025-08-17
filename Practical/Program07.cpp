#include <iostream> 
using namespace std;
int main()
{
	int num1, num2;
	cout<<"Enter Your First Number : ";
	cin>>num1;
	cout<<"Enter Your Second Number : ";
	cin>>num2;
	float a = num1; float b = num2;
	
	//Arithmetic Operator
	cout<<"Arithmetic Operator :\n";
	cout<<"Addition : "<<num1+num2<<"\nSubtraction : "<<num1-num2<<"\nMultiplication : "<<num1*num2<<"\nDivision : "<<a/b<<"\nModulus : "<<num1%num2;
	
	//Relational Operator
	cout<<"Relational Operator :\n";
	if (num1 == num2) cout<<"First Number is equal to Second Number\n";
	if (num1 != num2) cout<<"First Number is not equal to Second Number\n";
	if (num1 > num2) cout<<"First Number is greater than Second Number\n";
	if (num1 < num2) cout<<"First Number is less than Second Number\n";
	if (num1 >= num2) cout<<"First Number is greater than or equal to Second Number\n";
	if (num1 <= num2) cout<<"First Number is less than or equal to Second Number\n";
	
	//Logical Operator
	//&& Logical And
	cout<<endl;
	cout<<"Logical And Result is : "<<(num1 < num2 && num2 == num1)<<endl; 
	
	cout<<endl;
	
	//|| Logical Or
	cout<<"Logical Or Result is : "<<(num1 < num2 || num2 == num1)<<endl; 
	
	cout<<endl;
	
	//!() Logical Not
	cout<<"Logical Not Result is : "<<!(num1 < num2 || num2 == num1)<<endl; 

	//Bitwise Operator
	//&& Bitwise And
	cout<<endl;
	cout<<"Bitwise And Result is : "<<(num1 & num2)<<endl; 
	
	cout<<endl;
	
	//|| Bitwise Or
	cout<<"Bitwise Or Result is : "<<(num1 | num2)<<endl; 
	
	cout<<endl;
	
	//!() Bitwise XOR 
	cout<<"Bitwise XOR Result is : "<<(num1 ^ num2)<<endl; 

	//!() Bitwise not 
	cout<<"Bitwise not Result is : "<<~num1<<endl; 
	
	return 0;
}