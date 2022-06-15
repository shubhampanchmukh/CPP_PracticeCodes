#include<iostream>
using namespace std;
int main()
  {
      int a,b,c,add,sub,mult;
      float divide;
      char symbol;
	    
		cout<<" Enter the two numbers"<<endl;
	    cin>>a>>b;
	
	    cout<<" Enter the operation to perform";
		cin>>symbol;
		 
		switch(symbol)
		 
		 {case '+': c= a+b;
		  cout<<" a+b is : "<<c;
		  break;
		  case '-': c= a-b;
		  cout<<" a-b is "<<c;
		  break;
		  case '*': c=a*b;
		  cout<<" a*b is :"<<c;
		  break;
		  case '/': c= a/b;
		  cout<<" a/b is :"<<c;
		  break;
		  default : cout<<" Enter the valid operation";} 	
			      return 0;
    }
