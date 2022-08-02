#include<iostream.h>
#include<conio.h>
void main()
{
    clrscr();
    int size, a[50],i,j,t;
    cout<<"Enter Array Size : ";
    cin>>size;

    cout<<"Enter Array Elements : ";
    for(i=0;i<size;i++)
     {
      cin>>a[i];
     }

      for(i=0;i<size;i++)
       {
	for(j=0;j<size;j++)
	 {
	  if(a[j]>a[j+1])
	   {
	    t=a[j];
	    a[j]=a[j+1];
	    a[j+1]=t;
	   }
	 }
       }
    for(i=0; i<size; i++)
	cout<<a[i]<<" ";
    getch();
}
