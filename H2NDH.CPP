#include<iostream.h>
#include<conio.h>
void main()
 {
  clrscr();
  int a[5],i,high=a[0],high2=a[0];
   for(i=0;i<5;i++)
   {
   cin>>a[i];
   }
    for(i=0;i<5;i++)
   {
   if(high<a[i])
    {

      high=a[i];
    }
    }
      cout<<high<<endl;
      for(i=0;i<5;i++)
      {

      if(a[i]>high2&&a[i]<high)
       {
       high2=a[i];
       }
       }
       cout<<high2;
  getch();
 }