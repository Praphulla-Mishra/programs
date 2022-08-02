#include<iostream.h>
#include<conio.h>
#include<math.h>
  void main()
    {
     int n,r,s,x;
     clrscr();
      for(n=1;n<=1000;n++)
      {
       s=0;
       x=n;
	while(x!=0)
	 {
	 r=x%10;
	 s=s+pow(r,3);
	 x=x/10;
	 }
	 if(s==n)
	 {
	  cout<<n;
	  cout<<endl;
	 }
      }
     getch();
    }