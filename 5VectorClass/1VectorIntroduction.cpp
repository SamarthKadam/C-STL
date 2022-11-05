// #include<iostream>
// #include<cstring>
// #include<algorithm>
// using namespace std;
//  void printTriangle(int n) {

//  	int start=n-1;
//  	int gap=-2;

//    for(int i=0;i<n*2-1;i++)
//    {
//    	if(i<=((n*2)/2)-1)
//    	{
//    		gap=gap+2;
//    		start=start-1;
//    	}
//    	else if(i>n)
//    	{
//    		gap=gap-2;
//    		start=start+1;
//    	}

//    	for(int j=0;j<n*2-1;j++)
//    	{
//    		if(i==0||i==n-1)
//    			cout<<"*";

//    		else if(start==j)
//    		{
//    			int k=0;
//    			while(k<gap)
//    			{
//    				cout<<" ";
//    				k++;
//    			}
//    			j=k-1;
//    		}
//    		else
//    			cout<<"*";

//    	}
//    	cout<<endl;
//    }
// }
// int main()
// {
// 	printTriangle(5);
// }



#include<iostream>
#include<vector>
using namespace std;
int main()
{

	vector<int> a;       //Declaring vector
	vector<int> b(5,10); ///Initializing the array of size 5 with values 10

	for(int i=0;i<b.size();i++)
	{
		cout<<b[i]<<",";
	}


    cout<<endl;
	vector<int>c(b.begin(),b.end());  //Another way of initializing
	cout<<b.size()<<endl;


	vector<int> d{1,2,3,4,5,6}; ///Another way of initialzing
	cout<<d.size()<<endl;



	  ///Iteration among vectors

	for(auto it=d.begin();it!=d.end();it++)
	{
		cout<<*it<<",";
	}
	cout<<endl;

	for(int x:d)
	{
		cout<<x<<",";
	}

   cout<<endl;

	//How to take input of the vector
	vector<int> arr;
	int n=5;

	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		arr.push_back(x);
	}

	for(int x:arr)
	{
		cout<<x<<",";
	}
	cout<<endl;

	//Problem with push_back that is costyly process You can see results below


    cout<<"Comapring of memory"<<endl;
	cout<<arr.capacity()<<endl;
	cout<<b.capacity()<<endl;
	return 0;
}