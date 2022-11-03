#include<iostream>
#include<algorithm>
using namespace std;
bool compare(int a,int b)
{
	return a>b;
}
int main()
{
	int arr[]={192,23,23,23,55,72,334};
	int n=sizeof(arr)/sizeof(arr[0]);


	sort(arr,arr+n,compare);

	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}

	return 0;
}

///Try to map this is any sort algorithm where you can find compare function