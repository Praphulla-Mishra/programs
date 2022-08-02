#include<iostream.h>
#include<conio.h>
 void main()
 {
  clrscr();
  int a[3][3],b[3][3],i,j,dig=0,dig2=0;
   for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
       {
       cin>>a[i][j];
       }
     }
       clrscr();
       for(i=0;i<3;i++)
       {
	for(j=0;j<3;j++)
	{

	 cout<<a[i][j]<<" ";
	}
	cout<<endl;
       }
	  cout<<"\n\n";

	 for(i=0;i<3;i++)
	 {
	  for(j=0;j<3;j++)
	  {
	    if(i==j)
	     {
	     dig=dig+a[i][j];
	     }
	     if((i+j)==2)
	     {
	     dig2=dig2+a[i][j];
	     }
	     }

	   }
	  cout<<endl;
	  cout<<"sum of 1st diagonal = "<<dig<<endl;
	  cout<<"sum of 2nd diagonal = "<<dig2<<endl;
	  cout<<"sum of both diagonal = "<<dig+dig2;




     getch();
 }