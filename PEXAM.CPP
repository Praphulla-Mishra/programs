#include<iostream.h>
#include<conio.h>
void main()
 {
  clrscr();
  int a[50],i,j,n,z;
  int min,minpos,t;
  cout<<"ENTER THE SIXE OF ARRAY-";
  cin>>n;
  for(i=0;i<n;i++)
   {
    cin>>a[i];
   }
    cout<<"1.SELECTION SORT\n";
    cout<<"2.INSERTION SORT \n";
    cout<<"3.BUBBLE SORT\n";
    cout<<"ENTER YOUR CHOICE-";
    cin>>z;
    switch(z)
     {
      case 1:   for(i=0;i<n;i++)
     {
       min=a[i];
       minpos=i;
       for(j=i+1;j<n;j++)
	{
	 if(a[j]<min)
	  {
	   min=a[j];
	   minpos=j;
	  }
	}
	t=a[i];
	a[i]=min;
	a[minpos]=t;
     }
     break;



      case 2:    for (i=0;i<=n;i++)
    {
	    j = i;
	    while ( j > 0 && a[j-1] > a[j])
	    {
		t     = a[j];
		a[j]   = a[j-1];
		a[j-1] = t;
		j--;
	    }
    }
	       break;
      case 3:
	      for(i=0;i<n;i++)
	  {
	     for(j=0;j<n;j++)
	    {
	     if(a[j]>a[j+1])
	    {
	     t=a[j];
	     a[j]=a[j+1];
	     a[j+1]=t;
	    }
	 }
       } break;

      default:cout<<"PLEASE ENTER VALID NO.";
     }

   for(i=0;i<n;i++)
   {
    cout<<a[i];
   }

  getch();
 }