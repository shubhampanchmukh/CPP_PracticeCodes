#include<iostream>
using namespace std;
 class vehicle 
  {
 	 public :
	   int  noofwheels=4;
	   char  engno[10]= "abc123";
 };
    
    class car :  public vehicle
    {
    	public :
    		char colour[10]="red";
    		
	};
	 main()
	  {
	  	car c1;
	  	cout<<" colour of car  is :"<<c1.colour;
	  	cout<<"\n noofwheels of car  is :"<<c1.noofwheels;
	  	cout<<"\n engno of car  is :"<<c1.engno;
	  	
	  return 0;
	  }
