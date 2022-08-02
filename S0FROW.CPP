#include<iostream.h>
#include<conio.h>
 void main()
 {
  clrscr();
  int a[3][3],i,j,r=0;
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
	 r=r+a[i][j];
	}
	cout<<"="<<r;
	cout<<endl;
	r=0;
       }
       cout<<"\n\n";

     getch();
 }