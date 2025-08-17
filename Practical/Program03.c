#include<stdio.h>

int area (int l, int b);

int main() 
{
	int a,b;
	printf("Enter the value of length :");
	scanf("%d",&a);
	printf("Enter the value of width :");
	scanf("%d",&b);
    int d = area(a,b);
	printf("Area of the rectangle is : %d", d);
    
	return 0;
	
}

int area (int l, int b)
{
    return l*b;
}
