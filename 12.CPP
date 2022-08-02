#include<iostream.h>
#include<conio.h>
#include<stdio.h>
 class serial
  {
   private:
    int scode,dur,noep;
    char title[20];

    public:
     serial()
      {
       dur=30;
       noep=10;
      }
      void newserial()
       {
	cin>>scode;
	gets(title);

       }
       void otherentries()
	{
	 cin>>dur;
	 cin>>noep;
	}
       void dispdata()
	{
	 cout<<scode<<endl<<dur<<endl<<noep<<endl<<title;
	}
  };
   void main()
    {
     serial s;
     clrscr();
     s.newserial();
     s.otherentries();
     s.dispdata();
     getch();
    }