#include<iostream>
#include<list>
using namespace std;

template<typename ForwardIterater,typename T>
ForwardIterater search(ForwardIterater start,ForwardIterater end,T key){
	while(start!=end)
	{
		if(*start==key)
		{
			return start;
		}
		start++;
	}
	return end;
}
int main(){

	list<int> l;
	l.push_back(2);
	l.push_back(5);
	l.push_back(55);

  // cout<<l.begin()<<endl;
  auto it=search(l.begin(),l.end(),6);
  if(it==l.end())
  {
  	cout<<"Not found"<<endl;
  }
  else{
  cout<<*it<<endl;
}

	return 0;
}


///This is the generic way of programming where the underlying datatype doesn't
///matter.stl follow generic paradigm