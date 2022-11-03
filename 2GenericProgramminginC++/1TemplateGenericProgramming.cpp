#include<iostream>
using namespace std;

template<typename T>
int search(T arr[],int n,T k)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]==k)
		{
			return i;
		}
	}
	return -1;
}
int main(){

	// int arr[]={1,2,3,4,5,56};
	// int n=sizeof(arr)/sizeof(arr[0]);
	// int k=4;

 // cout<<search(arr,n,k)<<endl;

	float arr[]={1.5,2.2,3.43,4.38,5.8,5.7};
	int n=sizeof(arr)/sizeof(arr[0]);
	float k=5.7;

 cout<<search(arr,n,k)<<endl;

	return 0;
}