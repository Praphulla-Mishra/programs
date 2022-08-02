#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<ctype.h>
#include<string.h>
void main()
 {
  clrscr();
  char a[50];
  int i,sp=0,chr=0,wrd=1;
  gets(a);
  for(i=0;i<strlen(a);i++)
  {
  if(isspace(a[i]))
   {
      sp++;
   }
   if(isalpha(a[i]))
   {
   chr++;
   }
   if(isspace(a[i]))
    {
      wrd++;
    }

   }
    cout<<"no. of space ="<<sp<<endl;
    cout<<"no.of character ="<<chr<<endl;
    cout<<"no.of word ="<<wrd;
  getch();
 }