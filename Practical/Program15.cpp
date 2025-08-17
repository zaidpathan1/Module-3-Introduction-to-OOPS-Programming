#include <iostream> 
using namespace std;
int main()
{
	int i,sum = 0;
    float avg;
    cout<<"Enter the number of array characters : ";
    cin>>i;
	int arr[i];

    for(int j=0;j<i;j++){
        cout<<"Enter the array number "<<j+1<<" : ";
        cin>>arr[j];
        sum += arr[j];
    }
	avg = sum/(i);

    cout<<"Sum of the array is : "<<sum<<endl;
    cout<<"Average of the array is : "<<avg<<endl;

	return 0; 
}