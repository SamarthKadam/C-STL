
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	vector<int> a{1,2,3,4,5};
	a.reserve(100);
	a.push_back(6); ///Inserting elements
	a.pop_back();   ///Popping elements

	// sort(a.begin(),a.end());  ///All the algorithm methods also work with vectors

    //insert:
    // a.insert(a.begin()+2,99);    This  inserts the value at the specified pos
	// a.insert(a.begin()+2,4,99);  This insert number of values from specified pos
       
    //erase:
    // a.erase(a.begin()+2,a.begin()+3);
    

    ///Then we methods like size and capacity in vectors

    // a.resize(10); //this increase the size and the capacity of the arary


    // a.clear(); //This clear the vectors but does not erase from the memory
    // cout<<"cleared size of the vector is"<<a.size()<<endl;


    // if(d.empty())
    // 	cout<<"the memory is d vector is empty"<<endl;

    cout<<"The front of the vector is"<<a.front()<<endl;
    cout<<"The back of the vector is "<<a.back()<<endl;    


    // To avoid the doubling in the vector while using push_back we can make
    // use of the reserve method in vector

	for(int x:a)
	{
		cout<<x<<",";
	}

   cout<<endl;
   cout<<"The size of the array is "<<a.capacity()<<endl;












	return 0;
}