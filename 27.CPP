#include<iostream.h>
#include<conio.h>
void main()
{
   clrscr();
   int c, first, last, middle, n, search, array[100];
   cout<<"Enter number of elements:\n";
   cin>>n;
   for (c = 0; c < n; c++)
      cin>>array[c];
   cout<<"Enter the value to find:\n";
   cin>>search;
   first = 0;
   last = n - 1;
   middle = (first+last)/2;
   while (first <= last)
    {
      if (array[middle] < search)
       {
	 first = middle + 1;
	}
      else if (array[middle] == search)
       {
	 cout<<search<<" is present at index\n"<<middle+1;
	 break;
      }
      else
       {
	 last = middle - 1;
      middle = (first + last)/2;
      }
   }
   if (first > last)
    {
      cout<<"Not found! is not present in the list.\n"<<search;
     }
     getch();
}
