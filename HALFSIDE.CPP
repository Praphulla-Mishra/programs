#include<iostream.h>
#include<conio.h>
void main()
 {
  clrscr();
  int a[6]={1,2,3,4,5,6},i,c=0;
   for(i=0;i<6/2;i++)
    {
     c=a[i];
     a[i]=a[i+3];
     a[i+3]=c;
    }
    for(i=0;i<6;i++)
     {
     cout<<a[i];
     }
  getch();
 }