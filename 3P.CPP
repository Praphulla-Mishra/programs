#include<iostream.h>
#include<conio.h>
#include<stdio.h>
 struct student
    {
	 char nm[20];
	 int marks;
    };
      void main()
       {
	clrscr();
	int i,max,min;
	   student s[3];
	   cout<<"Enter the name and marks of 20 students\n";
	      for(i=0;i<3;i++)
	   {
	    gets(s[i].nm);
	    cin>>s[i].marks;
	   }
	      for(i=0;i<3;i++)
	   {
	    if(s[i].marks>max)
	     {
	      max=s[i].marks;
	     }

	   }
	   for(i=0;i<3;i++)
	    {
	     if(s[i].marks<min)
	      {
	       min=s[i].marks;
	      }
	    }
	   cout<<"max marks-"<<max;


	    cout<<"\nmin marks-"<<min;
	getch();
       }