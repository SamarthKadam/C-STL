
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Car{
public:
	string name;
	int x;
	int y;

	Car(string n,int x,int y)
	{
		name=n;
		this->x=x;
		this->y=y;
	}
};
bool compare(Car a,Car b)
{
	int d1=a.x*a.x+a.y*a.y;
	int d2=b.x*b.x+b.y*b.y;
 

    if(d1==d2) return a.name<b.name;
   
	return d1<d2;
}
int main()
{

	int n;
	cin>>n;


    vector<Car> arr;

	for(int i=0;i<n;i++)
	{
		int x,y;
		string name;

		cin>>name>>x>>y;
		Car temp(name,x,y);

		arr.push_back(temp);
	}

	sort(arr.begin(),arr.end(),compare);

	for(int i=0;i<n;i++)
	{
		cout<<arr[i].name<<","<<arr[i].x<<","<<arr[i].y<<endl;
	}
	return 0;
}