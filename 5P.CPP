#include<iostream.h>
#include<conio.h>
#include<stdio.h>

 class worker
  {
   private:
    char nm[20];
    int hr,wgr;
    float totwg;
     void calcwg()
      {
	totwg=hr*wgr;
      }
    public:
     void in_data()
      {
	gets(nm);
	cin>>hr>>wgr;
      }
      void out_data(float totwg)
       {
	cout<<nm<<endl<<hr<<endl<<wgr<<endl<<totwg;
       }
  };
   void main()
    {
     clrscr();
     worker w1,w2,w3;
     w1.in_data();
     w2.in_data();
     w1.out_data();
     w2.out_data();
     getch();
    }