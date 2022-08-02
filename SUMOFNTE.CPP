#include<iostreama.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,k,a;
cin>>a;
for(i=1;i<=a;i++)
{
cout<<"(";
for(j=1;j<=i;j++)
{
cout<<j<<"+";
}
cout<<"\b)";
}
getch();
}