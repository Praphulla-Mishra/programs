#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<ctype.h>
void main()
{
 clrscr();
 char a[20];
 int i;
 gets(a);
 for(i=0;i<20;i++)
 {
  if(isupper(a[i]))
  {
   a[i]=tolower(a[i]);
  }
  else if(islower(a[i]))
  {
   a[i]=toupper(a[i]);
  }
 }
 cout<<a;
 getch();
}
