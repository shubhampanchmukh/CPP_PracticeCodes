#include<iostream>
#include <iomanip>
using namespace std;
 class Time
 {
 	private :
 		int hh,mm,ss;
 		int seconds;
 		
 		public :
 			void gettime();
 			void convertintoseconds();
 			void displaytime();
 };
  void Time:: gettime()
  { cout<<"Enter time :";
   cout<<"\n Hours ? ";
   cin>>hh;
   cout<<"\n Minutes ? ";
   cin>>mm;
   cout<<"\n Seconds ? ";
   cin>>ss;
   cout<<"\nThe time is ="<< setw(2) << setfill('0') << hh << ":"
                             << setw(2) << setfill('0') << mm << ":"
                             << setw(2) << setfill('0') << ss << endl;
  }
  void Time :: convertintoseconds()
  {
  	seconds = (hh*3600+mm*60+ss);
  }
  void Time :: displaytime()
  { cout<<"\nTime in total seconds  :"<<seconds;
  }
  
  int main()
  { Time t;
  t.gettime();
  t.convertintoseconds();
  t.displaytime();
  return 0;
  }
