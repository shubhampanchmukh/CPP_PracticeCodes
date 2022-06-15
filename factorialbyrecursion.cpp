#include<iostream>
using namespace std;

 
       int fact(int n)
       {
	   
	   if (n<=1)
	   return 1;
	   else 
	   return  n*fact(n-1); 	
 	}
	 int main()
	 {
int n;
cout<<"Enter the number whose factorial is to be find :"<<endl;
cin>>n;
cout<<" factorial of "<<n<<" is"<<endl<<fact(n);
return 0;
 	
 	
 }
