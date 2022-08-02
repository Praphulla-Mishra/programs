#include<iostream.h>
#include<conio.h>
void main()
 {
  clrscr();
  int a,i,j,k=0;
  cin>>a;
  for(i=1;i<a;i++)
   {
    cout<<"(";
    for(j=1;j<=i;j++)
     {
      cout<<j<<"+";
      k=k+j;
     }
     cout<<"\b)";
     cout<<"+";
   }

   cout<<"\b="<<k;
  getch();
 }