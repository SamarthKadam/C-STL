#include<iostream>
#include<map>
#include<list>
using namespace std;
class node{
public:
	int data;
	node *nodeL;
	node *nodeR;
	node(int e)
	{
		data=e;
		nodeL=NULL;
		nodeR=NULL;
	}
};
void Vertical(node *ptr,map<int,list<int>>& m,int d)
{
	if(ptr==NULL)
	{
		return;
	}

	// cout<<ptr->data;
	m[d].push_back(ptr->data);
	Vertical(ptr->nodeL,m,d-1);
	Vertical(ptr->nodeR,m,d+1);
	return;
}
int main()
{
	map<int,list<int>> m;
	int d=0;
	node *root=new node(5);
	root->nodeL=new node(8);
	root->nodeR=new node(9);
	root->nodeL->nodeL=new node(4);
	root->nodeL->nodeR=new node(7);
	root->nodeL->nodeL->nodeL=new node(3);
	root->nodeL->nodeL->nodeR=new node(2);
	root->nodeR->nodeL=new node(6);
	root->nodeR->nodeR=new node(1);
	Vertical(root,m,d);

	for(auto p:m)
	{
		cout<<p.first<<"->";
		for(auto q:p.second)
		{
			cout<<q;
		}
		cout<<endl;
	}

	return 0;
}