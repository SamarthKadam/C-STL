#include<iostream>
#include<queue>
using namespace std;
int main()
{
	// priority_queue<int> pq; ///This is default max heap
	priority_queue<int,vector<int>,greater<int>> pq; //This is to set min heap
	int n;
	cin>>n;

	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		pq.push(x);         ///this takes log(n) time
	}

	while(!pq.empty())
	{
		cout<<pq.top()<<" ";
		pq.pop();
	}
	return 0;

}
