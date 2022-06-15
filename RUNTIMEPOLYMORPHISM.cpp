#include<iostream>
using namespace std;
 class animal
  {
  	public :
  		void eat()
  	{
			cout<<" Eating...";}
  		
  };
  
  class dog : public animal
  {
  	public : 
  	void eat()
  	{cout<<" Eating bread";}
  	
  };
  
  
  int main(void)
  {
  	animal d = dog();
  	  
  	  d.eat();
  	  cout<<endl;
  	
  }
