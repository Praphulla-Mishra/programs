#include <stdio.h>
#include<conio.h>
#include<iostream.h>
void main()
{
    int n, i, j, t;
    int arr[64];
     clrscr();
    cout<<"Enter number of elements\n";
    cin>>n;
    for (i=0;i<n;i++)
    {
	cin>>arr[i];
    }

    for (i=0;i<=n;i++)
    {
	    j = i;
	    while ( j > 0 && arr[j-1] > arr[j])
	    {
		t     = arr[j];
		arr[j]   = arr[j-1];
		arr[j-1] = t;
		j--;
	    }
    }
    cout<<"Sorted list in ascending order:\n";
    for (i = 0; i<n;i++)
    {
	cout<<arr[i]<<" ";
    }
    getch();
}