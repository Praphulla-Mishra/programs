#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
 {
   int a[3][3],b[3][3],c[3][3],i,j,flag=0;
   clrscr();
   for(i=0;i<3;i++)
    {
     for(j=0;j<3;j++)
      {
      cin>>a[i][j];
      }
    }
  for(i=0;i<3;i++)
    {
     for(j=0;j<3;j++)
      {
      cin>>b[i][j];
      }
    }
    for(i=0;i<3;i++)
    {
     for(j=0;j<3;j++)
      {
	cout<<a[i][j]<<" ";
      }
       cout<<endl;
    }
    for(i=0;i<3;i++)
    {
     for(j=0;j<3;j++)
      {
      cout<<b[i][j]<<" ";
      }
      cout<<endl;
    }
    for(i=0;i<3;i++)
     {
     for(j=0;j<3;j++)
      {
      if(a[i][j]!=b[i][j])
       {
	 flag=0;
       }
       else
       {
       flag=1;
       }
      }
    }
    if(flag==1)
    {
    cout<<"matrix are equal";
    }
    else
    {
    cout<<"matrix are not equal";
    }
     getch();

 }