#include<iostream>
#include<cstdio>
#include<queue>
using namespace std;
void printTopK(priority_queue<int,vector<int>,greater<int>> pq)
{
	while(!pq.empty())
	{
		cout<<pq.top()<<" ";
		pq.pop();
	}
}
int main()
{
	int n;
	cin>>n;

    int max=3;
	int x;
	priority_queue<int,vector<int>,greater<int>> pq;

	for(int i=0;i<n;i++)
	{
		cin>>x;
		if(x==-1)
		{
			printTopK(pq);
		}
		else if(max>pq.size())
        {
				pq.push(x);
        }
        else if(x>pq.top()){
        	pq.pop();
        	pq.push(x);

        }
	}
	return 0;
}