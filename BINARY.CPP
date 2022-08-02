#include<iostream.h>
#include<conio.h>
 int arr[100],i=0,j,n;
 void fun();
 void main()
  {
   clrscr();
   cout<<"enter a no.";
   cin>>n;
   while(n>0)
    {
    arr[i]=n%2;
    i++;
    n=n/2;
    }
    cout<<"binary no. is ";
    fun();

      getch();
  }
     void fun()
     {
     for(j=i-1;j>=0;j--)
      {
      cout<<arr[j];
      }
     }
