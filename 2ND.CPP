#include<iostream.h>
#include<conio.h>
#include<stdio.h>
 struct employee
  {
    char nm[20],add[30];

    float sal;
  };
  struct perks
  {
   float da,hra,netsal;
  };
   void main()
    {
     clrscr();
     employee e;
     perks p;
     cout<<"Enter name-";
     gets(e.nm);
     cout<<"Enter address-";
     gets(e.add);
     cout<<"Enter Salary-";
     cin>>e.sal;
     p.da=(e.sal*20)/100;
     p.hra=(e.sal*25)/100;
     p.netsal=p.da+p.hra+e.sal;
     cout<<"\nNet Salary is-";
     cout<<p.netsal;
     getch();
    }