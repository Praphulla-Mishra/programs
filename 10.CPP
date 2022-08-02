#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 char a,b,c,d;
 for(a='D';a>='A';a--)
 {
 for(b='A';b<=a;b++)
 cout<<b;
 for(c=a;c<'D';c++)
 cout<<"  ";
 for(d=a;d>='A';d--)
 cout<<d;cout<<endl;
 }


 getch();
}