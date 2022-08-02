#include<iostream.h>
#include<conio.h>
void main()
{
    clrscr();
    int size, a[50], i, j,min,minpos,t;
    cout<<"Enter Array Size : ";
    cin>>size;
    cout<<"Enter Array Elements : ";
     for(i=0; i<size; i++)
	cin>>a[i];

    for(i=0;i<size;i++)
     {
       min=a[i];
       minpos=i;
       for(j=i+1;j<size;j++)
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




    for(i=0; i<size; i++)
	cout<<a[i]<<" ";
    getch();
}
