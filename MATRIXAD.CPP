#include<iostream.h>
#include<conio.h>
 void main()
 {
  clrscr();
  int a[3][3],b[3][3],c[3][3],i,j;
   for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
       {
       cin>>a[i][j];
       }
     }
     for(i=0;i<3;i++)
      {
       for(j=0;j<3;j++)
	{
	 cin>>b[i][j];
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

	  cout<<b[i][j]<<" ";
	  }
	  cout<<endl;
	}
	  cout<<"\n\n";
	for(i=0;i<3;i++)
	 {
	 for(j=0;j<3;j++)
	 {
	  c[i][j]=a[i][j]+b[i][j];
	 }
	 }
	 for(i=0;i<3;i++)
	 {
	  for(j=0;j<3;j++)
	  {
	  cout<<c[i][j]<<" ";
	  }
	  cout<<endl;
	 }


     getch();
 }