#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
void main()
 {
  clrscr();
  char s1[20],s2[20];
  cout<<"1st statement - ";
  gets(s1);
  cout<<"2nd statement - ";
  gets(s2);
  if(strcmp(s1,s2)==0)
   {
    cout<<"they are equal";
   }
   else
    {
     cout<<"they are not equal";
    }
  getch();
 }