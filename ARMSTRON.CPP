#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n,r,s,x;
for(n=1;n<=1000;n++)
{
s=0;
x=n;
while(x!=0)
{
r=x%10;
s=s+r*r*r;
x=x/10;
}
if(s==n)
{
cout<<s<<endl;
}
}
getch();
}