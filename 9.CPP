#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
class bank
 {
  private:
   int acno;
   char nm[20];
   float bal;

   public:
    bank(int acc_no,char*name,float balance)
     {
      acno=acc_no;
      strcpy(nm,name);
      bal=balance;
     }
     void deposit();
     void withdraw();
     void display();
     };

       void bank::deposit()
     {
      int damt1;
      cout<<"Enter deposite amount-";
      cin>>damt1;
      bal+=damt1;
     }
     void bank::withdraw()
     {
       int wamt1;
       cout<<"Enter withdraw amount=";
       cin>>wamt1;
       if(bal>1000)
	{
	 bal-=wamt1;
	}
       else
	{
	 cout<<"\nCannot withdraw amount-";
	}

     }

      void bank::display()
       {
       cout<<"\n Account NO.-"<<acno;
       cout<<"\nName-"<<nm;
       cout<<"\n Balance-"<<bal;
       }



  void main()
   {
    clrscr();
    int acc_no;
    char name[20];
    float balance;
    cout<<"\n Account no.-";
    cin>>acc_no;
    cout<<"\nName-";
    gets(name);
    cout<<"\nBalance-";
    cin>>balance;

     bank b1(acc_no,name,balance);
     b1.deposit();
     b1.withdraw();
     b1.display();
     getch();
   }