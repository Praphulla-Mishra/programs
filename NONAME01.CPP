#include<iostream.h>
#include<conio.h>
void main()
{
int i,j,k,l;
clrscr();
for(i=1;i<60;i++)
 {
 gotoxy(3+i,1);
 cout<<"-";
 }
 for(j=1;j<25;j++)
 {
 gotoxy(3,1+j);
 cout<<"|";
 }
 for(k=1;k<60;k++)
 {
 gotoxy(0,k);
 cout<<"-";
 }
 getch();
}