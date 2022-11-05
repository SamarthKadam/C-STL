
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


bool cmp(pair<int,int> p1,pair<int,int> p2)
{
	int d1=p1.first*p1.first+p1.second*p1.second;
	int d2=p2.first*p2.first+p2.second*p2.second;

	if(d1==d2)
	{
		return p1.first<p2.first;
	}

	return d1<d2;
}

int main()
{
	// pair<int,int> p=make_pair(22,23);

	// cout<<p.first<<endl;
	// cout<<p.second<<endl;

    vector<pair<int,int>> v;

    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
    	int x;
    	int y;
    	cin>>x;
        cin>>y;
        v.push_back(make_pair(x,y));
    }

    sort(v.begin(),v.end(),cmp);

    for(int i=0;i<n;i++)
    {
      	cout<<"Car:"<<v[i].first<<v[i].second<<endl;
    }
	return 0;
}