#include<iostream>
#include<map>          //Here in mutlipmaps you can have duplicates of keys
using namespace std;     
int main()
{

  multimap<char,string> m;
  int n;
  cin>>n;

  for(int i=0;i<n;i++)
  {
  	char ch;
  	string s;
  	cin>>ch>>s;
  	m.insert(make_pair(ch,s));

  }	
  

  ///Erases the element from the maps
  //auto it=m.begin();
  //m.erase(it);

  for(auto it=m.begin();it!=m.end();it++)
  {
  	cout<<it->first<<" "<<it->second<<endl;
  }




  auto it=m.lower_bound('b');
  auto it2=m.upper_bound('d');
  cout<<"Using upper_bound and lower_bound"<<endl;
  // cout<<it->first<<" "<<it->second;

  for(auto i=it;i!=it2;i++)
  {
  	cout<<i->first<<i->second<<endl;
  }

  auto del=m.find('d');
  m.erase(del);

  cout<<"After deleting d"<<endl;

    for(auto it=m.begin();it!=m.end();it++)
  {
  	cout<<it->first<<" "<<it->second<<endl;
  }


  return 0;
}