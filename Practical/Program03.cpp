#include<iostream>
#include<string>
using namespace std;

class rectangle {
	public:
		int length, width;

		rectangle (int l, int b)
		{
			
			length = l;
			width = b;
		}
		int area()
		{
			return length*width;
		}
};

int main() 
{
	int a,b;
	cout<<"Enter the value of length :";
	cin>>a;
	cout<<"Enter the value of width :";
	cin>>b;
	rectangle ab(a,b);
	cout<<"Area of the rectangle is : "<<ab.area();
	return 0;
	
}
