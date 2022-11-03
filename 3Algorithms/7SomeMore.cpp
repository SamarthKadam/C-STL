#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int a=12;
	int b=23;

	swap(a,b);

	cout<<max(a,b)<<endl;
	cout<<min(a,b)<<endl;

    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);

    reverse(arr,arr+n); ////reverse the array from start to end location

    for(int i=0;i<n;i++)
    {
    	cout<<arr[i]<<endl;
    }

	return 0;
}
