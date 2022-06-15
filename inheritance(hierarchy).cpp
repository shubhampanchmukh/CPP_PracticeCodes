#include<iostream>
using namespace std;
 class vehicle 
  {
 	 protected :
	   int noofwheels= 6;
	   char  engno[10]= "abc123";
 };
    
    class car : public vehicle
{		  
    	public :
    	char color[10]="red";
    		
	};
	 class audi : public vehicle
	 {
	 	    private :
	 	 	char  regno[20] = "xyz123";
	 	 	public :
	 	 	void printdetails()
	 	 	{
			  cout<<" The details are :";
	 	 	cout<<"\n No of wheels are :"<<noofwheels;
	 	 	cout<<"\n  eng no is :"<<engno;
	 	 	cout<<"\n Reg no  is :"<<regno;
	 	 }
	 };
	 int main()
	 { audi a;
	  a.printdetails();
	  car c;
	  cout<<"\n color is :"<<c.color;
	 }
