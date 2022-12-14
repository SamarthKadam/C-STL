#include<iostream>
#include<queue>
using namespace std;
class Person{
public:
	string name;
	int age;

	Person(string n,int a)
	{
		name=n;
		age=a;
	}

};
class PersonCompare{
public:
	bool operator()(Person A, Person B){
		return A.age>B.age;    //< this gives the max heap and > gives min heap
	}
};
int main()
{

	int n;
	cin>>n;
	priority_queue<Person,vector<Person>,PersonCompare> pq;
	for(int i=0;i<n;i++)
	{
	 string name;
	 int age;

	 cin>>name>>age;
	 Person p(name,age);
	 pq.push(p);
	}

	int k=3;
	for(int i=0;i<k;i++)
	{
		Person temp=pq.top();
		cout<<temp.age<<" ";
		pq.pop();
	}
}
