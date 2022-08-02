#include<iostream.h>
#include<conio.h>
 void main()
  {
      int f;
       for(f=5;f>0;f--)
       {
       gotoxy(32,7+f);
       cout<<"*";
       delay(200);
       clrscr();
       body();
       post();
       }
  }