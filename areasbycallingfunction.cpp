#include<iostream>
using namespace std;
void circle();
void rectangle();
void square();
main()
 {  
     int choice;
     do{
	 
      cout<<"\nEnter the choice : \n1.circle  \n2.rectangle \n3.square \n4.exit \n";
      cout<<"you choose :\n";
      cin>>choice;
      
      	switch(choice)
      	{ 
      	   case 1 : circle();
      	    break ;
      	   case 2 : rectangle();
      	   break;
      	   case 3 : square();
      	   break;
      	   case 4 : exit(0);
      	   break;
      	   default : "enter valid choice \n";
        }
}  while(choice<4);
		 
}
 	      
		    void circle()
 	   { int r;
 	    cout<<"Enter the radius of circle : \n";
 	    cin>>r;
 	    float area;
 	    area=  (3.14*r);
 	    cout<<"The area of circle is : \n"<<area<<endl;
 	    }
 	      
		     void rectangle()
 	   { int l,b;
 	    cout<<"Enter the length and breadth of reactangle : \n";
 	    cin>>l>>b;
 	    float area;
 	    area=  (l*b);
 	    cout<<"The area of reactangle is : \n"<<area;
 	    }
 	    
 	        void square()
 	   { int l;
 	    cout<<"Enter the lenghth of square : \n";
 	    cin>>l;
 	    float area;
 	    area=  (l*l);
 	    cout<<"The area of square is : \n"<<area;
 	    }
