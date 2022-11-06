#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue <int> s;
	int n=5;
	for(int i=0;i<n;i++)
	{
		s.push(i);
	}

	while(!s.empty())
	{
		cout<<s.front()<<" ";
		s.pop();
	}
}