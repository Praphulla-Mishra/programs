#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

void main()
{
 clrscr();
 char a[8];
 gets(a);
 if(strcmp(a,"password")==0)
{
cout<<"login sucessful";
}
else
{
cout<<"wrong password";
}
 getch();
}
