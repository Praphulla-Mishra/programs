#include<iostream.h>
#include<conio.h>
#include<stdio.h>
 struct student
      {
	int roll,em,cm,mm;
	char nm[20];
	float per;
      };
      void main()
    {
     clrscr();
     int i,per[3],n=0,f=0,max=0,max2=0;
     student s[3];
     cout<<"enter roll,name,marks in eng,comp.,maths\n";
	for(i=0;i<3;i++)
	{
	cin>>s[i].roll;
	gets(s[i].nm);
	cin>>s[i].em;
	cin>>s[i].cm;
	cin>>s[i].mm;
	s[i].per=(s[i].em+s[i].cm+s[i].mm)/3;
	}
	 for(i=0;i<3;i++)
	 {
	 cout<<s[i].per;
	 cout<<endl;
	 }
	 for(i=0;i<3;i++)
	 {
	  if(s[i].per>=75)
	   {
	     n++;
	   }
	   if(s[i].per<33)
	    {
	     f++;
	    }
	 }
	  cout<<"NO. of students passed with distinction-"<<n<<endl;
	  cout<<"NO. of students failed-"<<f<<endl;


	   for(i=0;i<3;i++)
	 {
	  if(max<s[i].per)
	   {
	     max=s[i].per;
	   }
	 }

	  for(i=0;i<3;i++)
	 {
	   if(max>s[i].per&&max2<s[i].per)
	   {
	     max2=s[i].per;
	   }

	}
	for(i=0;i<3;i++)
	   {
	    if(s[i].per==max)
	     {
		cout<<s[i].roll;
		cout<<s[i].nm;
		cout<<s[i].em;
		cout<<s[i].cm;
		cout<<s[i].mm;
	     }
	   }

	    for(i=0;i<3;i++)
	   {
	    if(s[i].per==max2)
	     {
		cout<<s[i].roll;
		cout<<s[i].nm;
		cout<<s[i].em;
		cout<<s[i].cm;
		cout<<s[i].mm;
	     }
	   }
     getch();
    }