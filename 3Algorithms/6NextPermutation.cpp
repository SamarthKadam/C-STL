#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int arr[]={1,2,3,4};
	int n=sizeof(arr)/sizeof(arr[0]);
    
    rotate(arr,arr+2,arr+n);/// This rotates the array that is from 2 to n+2
    next_permutation(arr,arr+n); ///It finds the lexixographical next permutat
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}

	return 0;
}
