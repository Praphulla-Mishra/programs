#include<iostream.h>
#include<conio.h>
#include<stdio.h>
 struct employee
      {
	double phno,sal;
	char nm[20];
      };
 struct perks
      {
	double da,hra,netsal;
      };

  void main()
   {
    clrscr();
    int a,b;
    employee e;
    perks p;
    gets(e.nm);
    cin>>e.phno;
    cin>>e.sal;
    a=e.sal*20/100;
    b=e.sal*25/100;
    p.netsal=e.sal+a+b;
    cout<<p.netsal;
    getch();
   }