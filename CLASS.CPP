#include<iostream.h>
#include<conio.h>
#include<stdio.h>

 class student
 {
  private:
	int bookno,bookprice;
	char booktitle[20];
   public:
	void take()
	 {
	  cin>>bookno>>bookprice;
	  gets(name);
	 }
	 void show()
	 {
	  cout<<bookno<<endl;
	  cout<<bookprice<<endl;
	  cout<<name;
	 }
 };
	void main()
	 {
	  student c1,c2;
	  clrscr();
	  c1.take();
	  c2.take();
	  c1.show();
	  c2.show();
	  getch();
	 }