#include<iostream.h>
#include<conio.h>
#include<dos.h>
void main()
 {
  clrscr();
  int i,j;
  for(j=0;j<6;j++)
  {
  for(i=0;i<30;i=i+5)
  {
  sound(30-i);
  delay(300);
  nosound();
  }
   for(i=0;i<30;i=i+10)
  {
  sound(10+i);
  delay(300);
  nosound();
  }

   for(i=0;i<30;i=i+30)
  {
  sound(100-i);
  delay(300);
  nosound();
  }
   for(i=0;i<2;i=i+1)
  {
  sound(30+i);
  delay(300);
  nosound();
  }
  }
  getch();
 }