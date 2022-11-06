
#include<iostream>
#include <list>
using namespace std;
int main()
{
	list<string> l{"kiwi","banana","Apple","Cider","Vinegar"};
	cout<<l.size()<<endl;
	
    ///removing the element from the list
	// l.remove("Apple");
	auto ite=l.begin();
	ite++;
	ite++;

    l.erase(ite);
    
   // auto it=l.begin();
   // it++;
   // it++;
   // l.insert(it,"Guava");




    for(string x:l)
    {
    	cout<<x<<"-->";
    }

    return 0;
}
///Same follows with the forward_list <template> l;
//the only difference is you cannot traverse anywhere using this ds;
//Same methods apply here like push_back(),push_front(),front(),back() and etc;