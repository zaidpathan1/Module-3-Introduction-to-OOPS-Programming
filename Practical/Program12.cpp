#include <iostream> 

float sum(float a, float b);
float sub(float a, float b);
float mul(float a, float b);
float div(float a, float b);

using namespace std;
int main()
{
    int con =1, choice;
    float num1, num2, val=0;
    
	
    cout<<"Enter the first number : ";
    cin>>num1;
    while(con==1){
        cout<<"Enter Your Choice of Arithmetic Function"<<endl<<"1. Sum"<<endl<<"2. Subtract"<<endl<<"3. Multiplication"<<endl<<"4. Division"<<endl;
        cin>>choice;
        cout<<"Enter the other number : ";
        cin>>num2;
        switch (choice)
        {
        case 1:
            val = sum(num1, num2);
            num1 = val;
            break;
         case 2:
            val = sub(num1, num2);
            num1 = val;
            break;
        case 3:
            val = mul(num1, num2);
            num1 = val;
            break;
        case 4:
            val = div(num1, num2);
            num1 = val;
            break;
        default:
            break;
        }
        cout<<"Do you want to continue? Press 1 to continue. "<<endl;
        cin>>con;
	}
    cout<<"Final Output is : "<<val;
	return 0; 
    
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