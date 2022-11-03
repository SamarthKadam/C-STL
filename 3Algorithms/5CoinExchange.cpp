#include<iostream>
#include<algorithm>
using namespace std;
 bool compare(int a,int b)
 {
 	return a<=b;
 	//a is array b is money(key)
 }
int main()
{
	int coin[]={1,2,5,10,20,50,100,200,500,2000};
	int n=sizeof(coin)/sizeof(coin[0]);

	int money=450;


	while(money>0)
	{
    auto lb=lower_bound(coin,coin+n,money,compare);
    cout<<coin[lb-coin-1]<<",";
    money=money-coin[lb-coin-1];
    }


	return 0;
}

///Try out some permutation while solving sorted array probl
// of binary search using comparater