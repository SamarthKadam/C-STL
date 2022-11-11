
#include<iostream>
#include<set>
#include<vector>
using namespace std;
int main()
{
	set<pair<int,int>> s;

	s.insert(make_pair(1,2));
	s.insert(make_pair(1,2));
	s.insert(make_pair(2,2));
	s.insert(make_pair(3,2));

   auto it=s.upper_bound(make_pair(1,2));

   cout<<"Upper bound is"<<it->first<<it->second<<endl;

	for(auto it:s)
	{
		cout<<it.first<<" "<<it.second<<endl;
	}

	return 0;
}