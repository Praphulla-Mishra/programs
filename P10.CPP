#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

class travelplan
 {
  private:
   long plancode;
   char place[21];
   int no_t,no_b;

  public:
    travelplan()
     {
      plancode=1001;
      strcpy(place,"Agra");
      no_t=5;
      no_b=1;
     }
     void newplan()
      {
       cout<<"Enter the plan code-";
       cin>>plancode;
       cout<<"\nEnter the place to travel-";
       gets(place);
       cout<<"\nEnter the no. of travellers-";
       cin>>no_t;
       if(no_t>=40)
	{
	no_b=3;
	}
	else if(no_t>=20)
	 {
	  no_b=2;
	 }
	 else
	 {
	 no_b=1;
	 }
       }
     void showplan()
      {
       cout<<"\nPlan code-"<<plancode;
       cout<<"\n Travel place-"<<place;
       cout<<"\nNo. of travellers-"<<no_t;
       cout<<"\n No. of bus-"<<no_b;

      }
 };
   void main()
    {
     clrscr();
     travelplan t;
     t.newplan();
     t.showplan();
     getch();
    }