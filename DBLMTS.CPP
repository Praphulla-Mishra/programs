#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
 {
   int a[3][3],b[3][3],i,j;
   clrscr();
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
      b[i][j]=2*a[i][j];
      }

    }
    for(i=0;i<3;i++)
     {
     for(j=0;j<3;j++)
      {
       cout<<b[i][j]<<"  ";
       }
       cout<<endl;
      }

     getch();

 }