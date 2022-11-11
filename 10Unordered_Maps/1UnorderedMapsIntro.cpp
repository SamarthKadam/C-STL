
#include<iostream>
#include<unordered_map>          /// maps are datastructure used to store key value pairs.It stores
using namespace std;     //data in lexigraphical form that is in self balancing binary search tree
int main()
{
	//1>
	unordered_map<string,int> m;
	m.insert(make_pair("Apple",22));
    //2>
	pair<string,int> p;
	p.first="Orange";
	p.second=39;
	m.insert(p);

	//3>
	m["Banana"]=28;


   ///For searching we have find function
	string s="Orange";
	auto it=m.find(s);
	if(it!=m.end())
	{
		cout<<"Your fruit "<<s<<" price is"<<m[s]<<endl;
	}
	else{
		cout<<"Your fruit is not present"<<endl;
	}


	///For finding wheather element is present or not that is count it return 0 or 1

	if(m.count(s))
	{
		cout<<"Your fruit "<<s<<"is present"<<endl;
	}
	else{
		cout<<"Your fruit is not present"<<endl;
	}

   
   //Even we can update the pair 
	m["Apple"]+=10;

   ///For removing the we have erase method
	m.erase("Orange");




	for(auto it=m.begin();it!=m.end();it++)
	{
		cout<<"Key:"<<it->first<<" "<<"Value:"<<it->second<<endl;;
	}

   m.insert(make_pair("Guava",32));

   cout<<endl;
    for(auto x:m)
    {
    	cout<<x.first<<":"<<x.second<<endl;
    }

	return 0;
}