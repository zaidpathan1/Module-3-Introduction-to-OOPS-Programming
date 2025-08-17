#include <iostream> 
#include <string>
using namespace std;

class Calculator
{
private:
    int choice;
    float num1, num2, val;
public:
    Calculator(){
        
        cout<<"Enter Your Choice of Arithmetic Function"<<endl<<"1. Sum"<<endl<<"2. Subtract"<<endl<<"3. Multiplication"<<endl<<"4. Division"<<endl;
        cin>>choice;
        cout<<"Enter the first number : ";
        cin>>num1;
        cout<<"Enter the other number : ";
        cin>>num2;
        switch (choice)
        {
        case 1:
            val = sum(num1, num2);
            break;
         case 2:
            val = sub(num1, num2);
            break;
        case 3:
            val = mul(num1, num2);
            break;
        case 4:
            val = div(num1, num2);
            break;
        default:
        cout<<"Wrong Choice";
            break;
        }
        cout<<"Final Output is : "<<val;
	
    }
        float sum(float a, float b)
        {
            return a+b;
        }
        float sub(float a, float b)
        {
            return a-b;
        }
        float mul(float a, float b)
        {
            return a*b;
        }
        float div(float a, float b)
        {
            return a/b;
        }
};



int main()
{
	Calculator ab;
    
	
    
    
    
	return 0; 
}