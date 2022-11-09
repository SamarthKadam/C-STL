// #include<iostream>        
// #include<vector>
// using namespace std;
// vector<int> maxSlidingWindow(vector<int>& nums,int k)
// {
// 	vector<int> answer;

//     int max;
// 	for(int i=0;i<nums.size()-k+1;i++)
// 	{
// 		max=nums[i];
// 		for(int j=i+1;j<k+i;j++)
// 		{
// 			if(nums[j]>max)
// 			{
// 				max=nums[j];
// 			}

// 		}
// 		answer.push_back(max);
// 	}
// 	return answer;

// }
// int main()
// {
// 	int n;
// 	cin>>n;

// 	int k;
// 	cin>>k;

// 	vector<int> v;

// 	for(int i=0;i<n;i++)
// 	{
// 		int x;
// 		cin>>x;
// 		v.push_back(x);
// 	}
//  	maxSlidingWindow(v,k);
// }
//This is the naive approach this would result into tle



#include<iostream>        
#include<vector>
#include<deque>
using namespace std;
vector<int> maxSlidingWindow(vector<int>& nums,int k)
{
    deque<int> Q;
    int n=nums.size();

    int i;
	for( i=0;i<k;i++)
	{
		while(!Q.empty()&& nums[i]>nums[Q.back()])
		{
			Q.pop_back();
		}
		Q.push_back(i);
	}

	for(;i<n;i++)
	{
		cout<<nums[Q.front()]<<",";

		while(!(Q.empty()) && Q.front()<=i-k)
			Q.pop_front();

		while(!(Q.empty()) &&nums[i]>=nums[Q.back()])
		{
			Q.pop_back();
		}
		Q.push_back(i);
	}

	cout<<nums[Q.back()];

}
int main()
{
	int n;
	cin>>n;

	int k;
	cin>>k;

	vector<int> v;

	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		v.push_back(x);
	}
 	maxSlidingWindow(v,k);
}