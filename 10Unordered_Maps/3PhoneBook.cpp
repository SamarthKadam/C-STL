#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;
int main()
{
	unordered_map<string,list<string>> phonebook;

	phonebook["Kajal"].push_back("943382342");
	phonebook["Kajal"].push_back("943422342");
	phonebook["Kajal"].push_back("944232342");

	phonebook["Hrithik"].push_back("343382342");
	phonebook["Hrithik"].push_back("564332342");
	phonebook["Hrithik"].push_back("333382342");

	for(auto c:phonebook)
	{
		cout<<c.first<<":";
		for(auto f:c.second)
		{
			cout<<f<<" ";
		}
		cout<<endl;
	}
	return 0;
}