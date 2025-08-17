#include <iostream> 

using namespace std;
int main()
{
	

	for(int i=0;i<=10;i++)
	{
		
		cout<<"*";
        for(int j=0;j<i;j++)
        {
            
           if(i!=10) {cout<<" ";}
           else {
            cout<<"*";
           }
            
        }
        if(i>0)
        {
            
            cout<<"*";
            
        }
        cout<<endl;
	}
	
	return 0; 
}