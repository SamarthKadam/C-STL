// #include<iostream>
// using namespace std;
// void print(int n)
// {
	
//     int value;
//     int red;
// 	for(int i=0;i<n*2-1;i++)
// 	{
// 		red=i;
// 		value=n;

// 		if(i>=n)
// 		{
// 			red=(n-1)-(i%4)-1;
// 		}

// 		for(int j=0;j<n*2-1;j++)
// 		{
// 			if(i==0||i==n*2-2)
// 			{
// 				cout<<n;
// 			}
// 			else{
// 				if(red>0)
// 					{
// 						cout<<value;
// 						red--;
// 						value--;
// 					}
//                 else if(j>=n*2-i-2)
//                 {
//                 	cout<<value;
//                 	value=value+1;
//                 }
// 				else
// 				cout<<value;
// 			}
// 		}
// 		cout<<endl;
// 	}
// }
// int main()
// {
// 	print(4);
// }


#include<iostream>
#include <list>
using namespace std;
int main()
{
	list<pair<int,int>> *l;
	int n;
	cout<<"Enter n"<<endl;
	cin>>n;

	l=new list<pair<int,int>>[n];

	int e;
	cout<<"Enter e"<<endl;
	cin>>e;

	for(int i=0;i<e;i++)
	{
		int x,y,w;
		cin>>x>>y>>w;
		l[x].push_back(make_pair(y,w));
		l[y].push_back(make_pair(x,w));
	}

	for(int i=0;i<n;i++)
	{
		cout<<"LinkedList->"<<i<<"->";
		for(pair<int,int> p:l[i])
		{
			cout<<"("<<p.first<<","<<p.second<<")";
		}
		cout<<endl;
	}

    return 0;
}