#include<iostream>
using namespace std;
class Fn{
public:
	void operator()(string s){
		cout<<"Having fun in "<<s<<endl;
	}
};
int main()
{
	Fn f; //Constructor
	f("Javascript"); ///Overload Operater/ function call where f is object
	///It is called functional object
	return 0;

}
