// #include<iostream>
// #include<math.h>
// using namespace std;
// long long print(long long X)
// {
// 	   int x;
// 	long long num=0;
// 	long long res=0;
// 	int count=0;
// 	while(X>0)
// 	{
// 		count++;
// 		x=X%2;
// 		num=num*10+x;
// 		X=X/2;
// 	}
// 	int mul=32-count;

//  	while(num>0)
// 	{
// 		x=num%10;
// 		res=res+x*pow(2,mul);
// 		num=num/10;
// 		mul++;
// 	}
// 	return res;
// }
// int main()
// {
// 	int n;
// 	cin>>n;
//  cout<<print(n)<<endl;
// 	return 0;
// }

#include<iostream>
#include<unordered_map>
using namespace std;
class Student{
public:
	string firstname;
	string lastname;
	string rollno;

	Student(string f,string l,string r)
	{
		firstname=f;
		lastname=l;
		rollno=r;
	}
	bool operator==(const Student &s)const{
		return rollno==s.rollno?true:false;
	}

};
class HashFn{
public:
	size_t operator()(const Student &s)const{
		return s.firstname.length()+s.lastname.length();
	}

};
int main()
{
	unordered_map<Student,int,HashFn> student_map;
	Student s1("Prateek","Narang","010");
	Student s2("Rahul","Kumar","023");
	Student s3("Prateek","Gupta","030");
	Student s4("Rahul","Kumar","120");


  student_map[s1]=20;
  student_map[s2]=34;
  student_map[s3]=43;
  student_map[s4]=49;

  for(auto it:student_map)
  {
  	cout<<"First name "<<it.first.firstname<<" Marks:"<<it.second<<endl;
  }
  return 0;
}