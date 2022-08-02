#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int a,i,j=0,k=0;l=0;
 cin>>a;
 while(a>0)
 {
   j=a%10;
   k=a/10;
   l=j+l;
 }
 cout<<l;
 getch();
}