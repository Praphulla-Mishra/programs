#include<fstream.h>
#include<conio.h>
#include<string.h>
 void main()
  {
   clrscr();
    char a[20];
    int c=0;
    fstream f;
    f.open("story.txt",ios::in);
    while(!f.eof())
     {
      f>>a;
      if(strcmpi(a,"a")==0)
       {
	c++;
       }

     }
     f.close();
     cout<<c;
   getch();
  }