#include <iostream> 
#include <string>
using namespace std;
int main()
{
	string ab;
    string cd="";
    cout<<"Enter A String : ";
    cin>>ab;

    for(int i = ab.length() - 1; i >= 0; --i)
    {
        cd +=ab[i];
    }
    if (cd==ab){
        cout<<"String is Palindrome";
    }
    else {cout<<"String is not Palindrome";}
	return 0; 
}