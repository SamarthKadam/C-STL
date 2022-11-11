#include<iostream>
#include<set>
using namespace std;
int main()
{
	int arr[]={1,2,3,4,5,5,6,9,9};

	set<int> s;

    int n=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++)
	{
		s.insert(arr[i]);
	}


	///for deleteing
	s.erase(2);
	auto iter=s.find(9);
	s.erase(iter);


	for(auto it=s.begin();it!=s.end();it++)
	{
		cout<<*it<<" ";
	}
	return 0;
}