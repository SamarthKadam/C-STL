#include<iostream>
#include<string>
using namespace std;
int main()
{
	// string s;
	// string s1("Hello world");
	// string s2="hello world";
	// string s3(s1);


	// char arr[]={'a','b','c','\0'};  ///should include terminating char

	// string s4(arr);

	// cout<<s1<<s2<<s3<<s4<<endl;


 //    if(s.empty())
 //    {
 //    	cout<<"String s is empty"<<endl;
 //    }

 //    string s5;
 //    s5.append("I love");
 //    s5+=" C++";
 //    cout<<s5<<endl;


 //    s5.clear();
 //    cout<<s5<<endl;

 //    string s6="Mango";
 //    string s7="Apple";

 //    cout<<s7.compare(s6)<<endl;

 //    //Also overloaded supported

 //    if(s6>s7)
 //    {
 //    	cout<<"Lexigrophically s6 is > s7"<<endl;
 //    }

 //    string sent="Hello world this is earth";
 //    string w="world";
 //    int indx=sent.find(w);
 //    cout<<indx<<endl;

 //    sent.erase(indx,w.length());
 //    cout<<sent<<endl;


   string s="Helloworld";

   for(int i=0;i<s.size();i++)
   {
   	cout<<s[i];
   }
   cout<<endl;

   for(auto i=s.begin();i<s.end();i++)
   {
   	cout<<*i;
   }
   cout<<endl;

   for(char c:s)
   {
   	cout<<c;
   }

	return 0;
}