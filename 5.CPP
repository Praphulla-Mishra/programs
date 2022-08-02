#include<iostream.h>
#include<conio.h>
void main()
{                                  //789
clrscr();
int a,i,c=0,d,e;
cin>>a;
for(i=a;i>0;)
 {
  d=a%10;
  e=a/10;
  c=c+d;
 }

cout<<c;
getch();
}