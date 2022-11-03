#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int arr[]={5,2,34,25,3,21};
	int key=99;
	int n=sizeof(arr)/sizeof(arr[0]);
	auto it=find(arr,arr+n,key);
	///auto detects the datatype automatically

	if(it==arr+n)
	{
		cout<<"Your element not found"<<endl;
	}
	else{
	cout<<it-arr<<endl;
     }


	return 0;
}