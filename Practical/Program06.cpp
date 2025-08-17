#include <iostream> 
using namespace std; 

int main() { 

	// Implicit Type
	int a = 5; 
	double b = 2.5; 
	double result = a + b;
	cout << result;  

	// Explicit Type
	double pi = 3.14159; 
	int intPi = static_cast<int>(pi); 
	cout << intPi;

	return 0; 
}