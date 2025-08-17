#include <iostream> 
using namespace std;
int main()
{
	int sum = 0;
	int arr[4][3] = {{25, 23, 29}, {35, 13, 39}, {55, 43, 19}, {33, 22, 44}};

    for(int j=0;j<4;j++){
        for(int l=0;l<3;l++){
        sum += arr[j][l];
    }
    }

    cout<<"Sum of the array is : "<<sum<<endl;

	return 0; 
}