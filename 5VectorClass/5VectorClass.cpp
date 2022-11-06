
#include<iostream>
#include "5Vector.h"
using namespace std;
int main()
{
	vector<char> v;

	v.push_back(65);
	v.push_back(66);
	v.push_back(67);
	v.push_back(58);
	v.pop_back();

	// cout<<v.size()<<endl;

	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<endl;
	}

	return 0;
}