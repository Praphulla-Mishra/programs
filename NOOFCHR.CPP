#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
 clrscr();
 char a[20],n;
 int c=0,i;
 gets(a);
  cin>>n;
  for(i=0;i<strlen(a);i++)
  {
  if(a[i]==n)
   {
    c++;
   }
  }
  cout<<c;
 getch();
}
