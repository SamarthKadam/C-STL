#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int arr[]={1,23,23,23,55,72,334};
	int key=23;
	int n=sizeof(arr)/sizeof(arr[0]);


	bool present=binary_search(arr,arr+n,key);
	if(present)
	{
		cout<<"Element is present"<<endl;
		auto lb=lower_bound(arr,arr+n,key);
		cout<<"Lower bound of 23 is "<<lb-arr<<endl;
		///lower_bound would return element >=key


		auto ub=upper_bound(arr,arr+n,key);
		cout<<"Upper bound of 23 is "<<ub-arr<<endl;
		///upper_bound would return element >key

         
         //If you need to find the frequency of numbers in sorted array
		 cout<<"Frequency of 23 is "<<ub-lb<<endl;


	}
	else{
		cout<<"Element is not present"<<endl;
	}

	return 0;
}