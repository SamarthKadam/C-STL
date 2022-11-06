#include<iostream>
#include<stack>
using namespace std;
int main()
{
	stack<int> s;
	int n=5;
	for(int i=0;i<n;i++)
	{
		s.push(i);
	}

	while(!s.empty())
	{
		cout<<s.top()<<" ";
		s.pop();
	}
}