#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;
int main()
{
	char arr[100]="Today it is rainy day";

	char *ptr=strtok(arr," ");
	cout<<ptr<<endl;

    while(ptr!=NULL)
    {
    	char *ptr=strtok(NULL," ");
    	cout<<ptr<<endl;
    }

	cout<<ptr<<endl;

	return 0;
}