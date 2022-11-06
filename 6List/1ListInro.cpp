//List represent doubly linked list
#include<iostream>
#include <list>
using namespace std;
int main()
{
	list<int> l{5,2,3,4,1};

	///size property
	// cout<<l.size()<<endl;


    ///here sort and reverse methods are applied on list
	l.sort();
	l.reverse();

   list<int> l1;
   int n=3;
   

   ///Inputing the elements is same as that of vector even front and back works
   // well

   for(int i=0;i<n;i++)
   {
   	int x;
   	cin>>x;
   	l1.push_back(x);
   }

   l1.push_front(0);

	// for(int x:l1)
	// {
	// 	cout<<x;
	// }
	cout<<endl;


      //we cant do this in case of list instead follow below approach
	// for(int i=0;i<l1.size();i++)
	// {
	// 	cout<<l1[i]<<endl;
	// }

	for(auto it=l1.begin();it!=l1.end();it++)
	{
		cout<<*it;
	}
	cout<<endl;




}