#include<iostream>
using namespace std;
class student
{
	private :
		int regno;
		int marks[5];
		char name[20];
		char grade;
	public :
	    enterdetails();
	    char calculategrade()
		{
           int sum ;
		   for( int i=0;i<5;i++)
		   {
					   		
           sum= sum +i; 
		   }
           
		    if (sum>400)
		    grade='S';
			else if ( sum>300)
			grade='A';
			else if ( sum>200)
			grade='B';
			else if ( sum>100)
			grade ='C';
			else
		
				grade ='F';  		

			return grade;	
		}
		displaydetails();
			
		
};
  student:: enterdetails()
  {
   cout<<"Enter the following deatils :";
   cout<<"\n1. Reg no is :";
   cin>>regno;
   cout<<"\n2. Enter the marks of 5 subjects";
   for (int i=0;i<5;i++)
   {
   	cin>>marks[i];
   }
   cout<<"\n3. Name is";
   cin>>name;
}
 student :: displaydetails()
 {
 	cout<<"The details thet you entered are";
 	cout<<"\n1. Reg no is :"<<regno;
 	cout<<"\n2. Name :"<<name;
 	cout<<"\n3. Grade is :"<<grade;
 }
 
 main()
 {
 	student X;
 	X.enterdetails();
 	X.calculategrade();
 	X.displaydetails();
 }
   
   
