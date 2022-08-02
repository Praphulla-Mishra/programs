#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
 {
  clrscr();
  char a[20],b[20],i;
  gets(a);
  gets(b);
   if(strlen(a)>strlen(b))
   {
    strcpy(b,a);
   }
   if(strlen(b)>strlen(a))
   {
    strcpy(a,b);

   }
   cout<<a<<b;

  getch();
 }