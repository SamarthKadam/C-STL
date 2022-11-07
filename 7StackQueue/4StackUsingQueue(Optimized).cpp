#include<iostream>        //Implementation of stack using queue
#include<queue>
using namespace std;
template<typename T>
class stack{
	queue<T> q1,q2;
public:
	void push(T elem)
	{
		q1.push(elem);

	}
	void pop()
	{

        if(q1.empty())
        return;

		while(q1.size()>1)
		{
			q2.push(q1.front());
			q1.pop();
		}
		q1.pop();

		swap(q1,q2);
	}
	int top()
	{
		T x;
		while(q1.size()>1)
		{
			q2.push(q1.front());
			q1.pop();
		}
		x=q1.front();
		q1.pop();
		q2.push(x);
		swap(q1,q2);
		return x;

	}
	int size()
	{
		return q1.size()+q2.size();
	}
	bool empty()
	{
		return size()==0;
	}
};

int main()
{

	stack<int> s;
	s.push(2);
	s.push(4);
	s.push(6);

	while(!(s.empty()))
	{
		cout<<s.top()<<",";
		s.pop();
	}
	return 0;
}