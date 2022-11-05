#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool compare(string s1,string s2)
{
	if(s1.length()==s2.length())
	{
		return s1<s2;
	}

	return s1.length()<s2.length();
}
int main()
{
	// string s;
	// getline(cin,s); ////also you can use cin, this is another way of inputing
	// cout<<s<<endl;

	string s[100];
	int n;
	cin>>n;
	cin.get();

	for(int i=0;i<n;i++)
	{
		getline(cin,s[i]);
	}

	sort(s,s+n,compare);


	for(int i=0;i<n;i++)
	{
		cout<<s[i]<<endl;
	}


	return 0;
}