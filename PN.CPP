 #include<iostream.h>
 #include<conio.h>
 void main()
 {
 clrscr();
 int a,b,c,d=0,e=0;
 do{
 cin>>a;
 if(a<0)
 {
 d=d+a;
 }
 if(a>0)
 {
 e=e+a;
 }
 }while(a!=0);
 cout<<"-ve="<<d<<endl<<"+ve="<<e;
 getch();
 }