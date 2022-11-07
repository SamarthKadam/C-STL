#include<iostream>        //Implementation of stack using queue
#include<queue>
using namespace std;
int n;
void pushStack(int elem,queue<int>& q1,queue<int>& q2)
{
	if(q2.size()==0)
	{
	if(q1.size()==n)
	{
		cout<<"Stack is full"<<endl;
	}
	else{
	q1.push(elem);
     }
    }
    else if(q1.size()==0){
    	if(q2.size()==n)
	{
		cout<<"Stack is full"<<endl;
	}
	else{
	q2.push(elem);
     }
    }
}
int popStack(queue<int>& q1,queue<int>& q2)
{
	int x=-1;
	if(q1.size()==0 && q2.size()==0)
	{
		cout<<"Stack is empty"<<endl;;
		return x;
	}

	if(q2.size()==0)
	{
	for(int i=0;i<q1.size()-1;i++)
	{
		q2.push(q1.front());
		q1.pop();
	}

    x=q1.front();
    q1.pop();
    }
    else{
    	for(int i=0;i<q2.size()-1;i++)
	{
		q1.push(q2.front());
		q2.pop();
	}

    x=q2.front();
    q2.pop();
    }
	return x;
}
int main()
{
	cin>>n;
	queue<int> q1;
	queue<int> q2;
	pushStack(99,q1,q2);
	pushStack(100,q1,q2);
      cout<<"The popped item is "<<popStack(q1,q2)<<endl;
      cout<<"The popped item is "<<popStack(q1,q2)<<endl;
    cout<<"The popped item is "<<popStack(q1,q2)<<endl;

	return 0;
}