#include<iostream>
using namespace std;

  class sample
  {
  	public :
  	
  	void func(int x)
  {	cout<<"Value of x is :"<<x<<endl;}
  	
	  void func(double x)
  {	cout<<"Value of x is :"<<x<<endl;}
  	
	  void func(int x,int y)
  	{cout<<"Value of x and y is :"<<x<<", "<<y;}
  
  };
   int main()
   {
   	 sample obj;
   	 obj.func(7);
   	 obj.func(2.4637);
   	 obj.func(24,46);
   	 return 0;
   }
