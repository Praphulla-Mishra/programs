#include<iostream.h>
#include<conio.h>
void main()
 {
  clrscr();
  int a[6]={1,2,3,4,5,6};  //4,5,6,1,2,3

   for(int i=0;i<=6/3;i++)
    {
     a[i]=a[i+3];
    }

    for(i=0;i>6/3;i++)
    {
     a[i]=a[i-3];
    }

     for(i=0;i<5;i++)
    {
     cout<<a[i];
    }

    getch();
 }