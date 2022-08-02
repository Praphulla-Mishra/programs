#include<iostream.h>
#include<conio.h>
#include<stdio.h>
 class worker
      {
	private:
	 char wname[20];
	 float hewrk,wgrate;
	 float totwage;
	  float calcwg()
	   {
	    totwage=hewrk*wgrate;
	     return totwage;
	   }
	   public:
	   void in_data();
	   void out_data();
       };
	void worker::in_data()
	 {
	  cout<<"Enter the worker name-";
	  gets(wname);
	  cout<<"Enter hours worked-";
	  cin>>hewrk;
	  cout<<"Enter wage per hour-";
	  cin>>wgrate;
	     calcwg();
	 }
	  void worker::out_data()
	    {
	       cout<<"worker name-"<<wname<<endl;
	       cout<<"Hours worked-"<<hewrk<<endl;
	       cout<<"wage per hour-"<<wgrate<<endl;
		cout<<"Total wage-"<<totwage<<endl;
	    }

	    void main()
	     {
	      clrscr();
	      worker obj;
	      obj.in_data();
	      obj.out_data();
	      getch();

	     }