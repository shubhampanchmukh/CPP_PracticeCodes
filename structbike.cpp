#include<iostream>
using namespace std;
  struct bike
  {
  int lno;
  char drivername[20];
  float miles;
};
   main()
  
   {  bike b1;
    cout<<"Enter the details: \n1.license no. is : \t";
    cin>>b1.lno;
    cout<<"\n2. Name of the driver is : \t";
    cin>>b1.drivername;
    cout<<"\n3. miles covered is : \t";
    cin>>b1.miles;
    cout<<"\n1. license no. is :"<<b1.lno;
    cout<<"\n2. Name of the driver is :"<<b1.drivername;
    cout<<"\n3. miles covered is:"<<b1.miles;
     return 0;
    
   	}
