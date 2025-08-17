#include <iostream> 
#include <string>
using namespace std;

class BankAccount
{
private:
    float balance = 64324.24;
public:
   void deposit(float a)
   {
        balance += a;
   }
   void withdraw(float a)
   {
        if(balance<a){
            cout<<"Insufficient balance for the given with";
        }
        else {
            balance += a;
        }
   }
};



int main()
{
	BankAccount ab;
    int a, b;
    cout<<"Enter Your choice:"<<endl<<"1. withdraw"<<endl<<"2. deposit";  
    cin>>a;

    switch(a){
        case 1:
            cout<<"Enter the amount you want to withdraw"; 
            cin>>b;
            ab.withdraw(b);
            break;
        case 2:
            cout<<"Enter the amount you want to deposit"; 
            cin>>b;
            ab.deposit(b);
            break;
        default:
            cout<<"Wrong Choice";
            break;
    }
	
    
    
    
	return 0; 
}