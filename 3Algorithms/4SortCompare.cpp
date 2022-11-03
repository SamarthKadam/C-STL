#include<iostream>
#include<algorithm>
using namespace std;
bool compare(int a,int b)
{
	return a>b;
}

void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n,bool (&compare)(int a ,int b))
{
    int i, j;
    for (i = 0; i < n - 1; i++)
 
        // Last i elements are already in place
        for (j = 0; j < n - i - 1; j++)
            if (compare(arr[j],arr[j+1]))
            {
                swap(&arr[j], &arr[j + 1]);
            }
}
 
int main()
{
	int arr[]={192,23,23,23,55,72,334};
	int n=sizeof(arr)/sizeof(arr[0]);


	// bubbleSort(arr,arr+n,compare);
	bubbleSort(arr,n,compare);

	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}

	return 0;
}