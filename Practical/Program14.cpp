#include <iostream> 
using namespace std;

int globvar = 50;

void func(){
    int locvar = 30;
    cout<<"Local Variable in the Function : "<<locvar<<endl;
	cout<<"Global Variable : "<<globvar<<endl;

	globvar += 10;
	locvar += 10;

	cout<<"Local Variable after increment in the Function : "<<locvar<<endl;
	cout<<"Global Variable after increment : "<<globvar<<endl;
}

int main()
{
	int locvar = 20;
    cout<<"Local Variable in the main : "<<locvar<<endl;
	cout<<"Global Variable : "<<globvar<<endl;
	void func();
	globvar += 10;
	locvar += 10;

	cout<<"Local Variable after increment in the main : "<<locvar<<endl;
	cout<<"Global Variable after increment in the main : "<<globvar<<endl;
	return 0;
}

