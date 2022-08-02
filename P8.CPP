#include<iostream.h>
#include<conio.h>
#include<stdio.h>
  class book
 {
   private:
   int bno,price,totcost,n;
   char title[25];
       void total_cost()
	  {
	     totcost=n*price;
	  }
   public:

	  void ask()
	   {
	    cout<<"Book no.-";
	    cin>>bno;
	    cout<<"\nTitle-";
	    gets(title);
	    cout<<"\nPrice-";
	    cin>>price;
	    cout<<"\nNo. of copies-";
	    cin>>n;
	   }
	    void show()
	    {
	     cout<<"Book no-"<<bno;
	     cout<<"\nTitle-"<<title;
	     cout<<"\nPrice-"<<price;
	     cout<<"\nNo. of copies-"<<n;
	     total_cost();
	     cout<<"\nTotal cost-"<<totcost;
	    }
 };
  void main()
    {
     clrscr();
     book b1;
     b1.ask();
     b1.show();
     getch();
    }