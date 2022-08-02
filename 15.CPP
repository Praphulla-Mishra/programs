#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
 {
  clrscr();
  char a[100],b;
  int i,c=0;
  gets(a);
  cin>>b;
  for(i=0;i<strlen(a);i++)
   {
    if(b==a[i])
     {
     c++;
     }
   }
   cout<<c;
  getch();
 }