#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  int a,b;
  char ans='n';
  do{
  cin>>a;
  cin>>b;
  cout<<a+b;
  cout<<"\n do you wanna continue\nenter your choice(y/n)\n";
  cin>>ans;
  }while(ans=='y'||'Y');
 getch();
}