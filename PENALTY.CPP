#include<iostream.h>
#include<conio.h>
#include<dos.h>

  void ins();
  void body();
  void post();
  void straight();
  void right();


 void main()
  {
   char x;
   clrscr();
   body();
   gotoxy(32,13);
   cout<<"*";
   post();
   gotoxy(2,20);
   cout<<"click to shoot-";
   cin>>x;
   if(x=='w')
   {
   straight();
   }
   if(x=='d')
   {
   right();
   }

   getch();
  }
   void post()
    {
     int j,i,k;
    for(k=0;k<79;k++)
      {
      gotoxy(1+k,8);
      cout<<"__";
      }
     for(i=0;i<5;i++)
     {
     gotoxy(20,2+i);
      cout<<"|";
     gotoxy(45,2+i);
     cout<<"|";
      }
      for(j=0;j<25;j++)
      {
      gotoxy(20+j,1);
      cout<<"__";
      }
    }
     void straight()
      {
       int f;
       for(f=5;f>0;f--)
       {
       gotoxy(32,7+f);
       cout<<"*";
       delay(200);
       clrscr();
       post();

       }
      }
      void right()
       {
	int l,j;
	for(l=1;l>0;l--)
	 {
	    for(j=5;j>-3;j=j-4)
	     {
	     gotoxy(32+j,7+j);
	     cout<<"*";
	     delay(200);
	     clrscr();
	     post();
	     }
	 }
       }
	void body()
	 {
	  int ml;
	    clrscr();
	    post();


	  gotoxy(32,3);
	  cout<<"_";
	  gotoxy(32,4);
	   cout<<"0";
	   gotoxy(32,5);
	   cout<<"!";
	   gotoxy(33,4);
	   cout<<"__";
	   gotoxy(30,4);
	   cout<<"__";
	   gotoxy(31,6);
	   cout<<"(";
	   gotoxy(33,6);
	   cout<<")";
	   delay(200);
	   }


      void ins()
      {
       cout<<"\t\tPENALTY SHOOTOUT";
      }