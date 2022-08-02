#include<iostream.h>
#include<conio.h>
 void main()
 {
  clrscr();
  int a[3][3],i,j;
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
	   cout<<"\n\n\n";
       for(i=0;i<3;i++)
       {
	for(j=0;j<=i;j++)
	{

	 cout<<a[i][j]<<" ";
	}
	cout<<endl;
       }

	  cout<<"\n\n";
	for(i=0;i>3;i++)
	 {
	  for(j=i;j<3;j--)
	   {
	   cout<<a[i][j]<<"   ";
	   }
	   cout<<endl;
	 }
	for(i=0;i<3;i++)
	 {
	  for(j=i;j<3;j++)
	   {




	   if(i==1)
	   {
	    cout<<"  ";
	    }
	    if(i==2)
	     {
	     cout<<"    ";
	     }
	     cout<<a[i][j]<<" ";
	     }
	     cout<<endl;
	 }

     getch();
  }