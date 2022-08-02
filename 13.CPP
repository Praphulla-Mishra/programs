#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class taxpayer
 {
  private:
   int pan;
   char name[20];
   float taxable,tax,a;

   public:
    void inputdata()
     {
      cin>>pan;
      gets(name);
      cin>>taxable;
     }
     void displaydata()
      {
       cout<<pan<<endl<<name<<endl<<taxable<<endl<<tax;
      }
      void compute()
       {
	if(taxable<=60000)
	 {
	   a=taxable*5/100;
	   tax=taxable+a;
	 }
	 if(taxable>60000&&taxable<=150000)
	 {
	   a=taxable*10/100;
	    tax=taxable+a;
	 }if(taxable>=150000&&taxable<500000)
	 {
	   a=taxable*15/100;
	    tax=taxable+a;
	 }if(taxable>=500000)
	 {
	   a=taxable*20/100;
	    tax=taxable+a;
	 }
       }
 };
  void main()
   {
    clrscr();
    taxpayer t;
    t.inputdata();
    t.compute();
    t.displaydata();
    getch();
   }