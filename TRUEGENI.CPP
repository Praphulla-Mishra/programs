#include<fstream.h>
#include<conio.h>
#include<dos.h>
#include<stdio.h>
char name[20];
int sc=0,st=0,sw=0,dl;
class game
{
 private:



   int i,j,k,l;
   int a1,a2,a3,a4,a5;
   int b1,b2,b3,b4,b5;
   int c1,c2,c3,c4,c5;


 public:


 void des()
  {
  gotoxy(25,1);
 cout<<"TRUE GENIUS - THE QUIZ GAME";
 for(i=1;i<70;i++)
 {
  gotoxy(3+i,2);
  cout<<"___";
 }
 for(j=1;j<23;j++)
 {
  gotoxy(3,2+j);
  cout<<"|";
 }
 for(k=1;k<70;k++)
 {
  gotoxy(3+k,24);
  cout<<"___";
 }
 for(l=1;l<23;l++)
 {
  gotoxy(75,2+l);
  cout<<"|";
 }

 }
  void load()
  {
  gotoxy(30,10);
  cout<<"LOADING...";
  gotoxy(17,12);
  cout<<"|||||";
  delay(1000);
  cout<<"||||||||||";
  delay(300);
  cout<<"|||||||";
  delay(300);
  cout<<"|||||||||||";
  delay(500);
  cout<<"|||||";
  clrscr();
  }
  void rule()
  {
    clrscr();
   des();
   gotoxy(25,10);
   cout<<"Welcome to true genious ";
   gotoxy(5,12);
   cout<<"The objective of this game is to test your knowledge through quiz";
   gotoxy(5,14);
   cout<<"You have 5 questions and 4 options in each difficulty level";
   gotoxy(15,19);
   cout<<"Press any key to continue";
   getch();
   clrscr();
  }

  void ask()
  {

   gotoxy(20,10);
   cout<<"ENTER YOUR NAME-";
   gets(name);
   clrscr();
   gotoxy(20,11);
   cout<<"best of luck "<<name;
  }
  void diflvl()
  {

   gotoxy(20,15);
   cout<<"SELECT DIFFICULTY LEVEL...";
   gotoxy(20,16);
   cout<<"1.EASY";
   gotoxy(20,17);
   cout<<"2.MEDIUM";
   gotoxy(20,18);
   cout<<"3.HARD";
   gotoxy(20,19);
   cout<<"ENTER YOUR CHOICE-";
   cin>>dl;
   clrscr();
   des();
   switch(dl)
    {
     case 1:

     gotoxy(20,10);

    cout<<"you opt for easy level";
    getch();
    clrscr();
    des();
    gotoxy(15,5);
    cout<<"Q1) Hitler party which came into power in 1933 is known as";
    gotoxy(15,7);
    cout<<"1. Labour Party";
    gotoxy(15,8);
    cout<<"2.Nazi";
    gotoxy(15,9);
    cout<<"3.Democratic Party";
    gotoxy(15,10);
    cout<<"4.ku-klux-kln";
    gotoxy(15,11);
    cout<<"YOUR ANSWER IS-";
    cin>>a1;
    gotoxy(25,15);
    switch(a1)
     {
     case 1:cout<<"WRONG ANSWER";
     break;
     case 2:cout<<"RIGHT ANSWER"; sc++;
     break;
     case 3:cout<<"WRONG ANSWER";
	     break;
     case 4:cout<<"WRONG ANSWER";
     }
     getch();
     clrscr();
     des();
     gotoxy(15,5);
     cout<<"Guru Gobind Singh was";
     gotoxy(15,7);
     cout<<"1.the 10th guru of sikhs";
     gotoxy(15,8);
     cout<<"2.founder of Khalsa";
     gotoxy(15,9);
     cout<<"3.author of Dasam Granth";
     gotoxy(15,10);
     cout<<"4.All of the above";
     gotoxy(15,12);
     cout<<"YOUR ANSWER IS-";
     cin>>a2;
     gotoxy(25,15);
     switch(a2)
     {
     case 1:cout<<"WRONG ANSWER";

     break;
     case 2:cout<<"WRONG ANSWER";
     break;
     case 3:cout<<"WRONG ANSWER";
     break;
     case 4:cout<<"RIGHT ANSWER";
		     sc++;
     }
     getch();
     clrscr();
     des();
     gotoxy(15,5);
     cout<<"Filaria is caused ";
     gotoxy(15,7);
     cout<<"1.Bacteria";
     gotoxy(15,8);
     cout<<"2.Mosquito";
     gotoxy(15,9);
     cout<<"3.Protozoa";
     gotoxy(15,10);
     cout<<"4.Virus";
     gotoxy(15,12);
     cout<<"YOUR ANSWER IS-";
     cin>>a3;
     gotoxy(25,15);
     switch(a3)
     {
     case 1:cout<<"WRONG ANSWER";
     break;
     case 2:cout<<"RIGHT ANSWER";sc++;
     break;
     case 3:cout<<"WRONG ANSWER";
     break;
     case 4:cout<<"WRONG ANSWER";
     }
      getch();
      clrscr();
     des();
     gotoxy(15,5);
     cout<<"scareware is ";
     gotoxy(15,7);
     cout<<"1.fake antivirus";
     gotoxy(15,8);
     cout<<"2.fake virus";
     gotoxy(15,9);
     cout<<"3.system file";
     gotoxy(15,10);
     cout<<"4.game";
     gotoxy(15,12);
     cout<<"YOUR ANSWER IS-";
     cin>>a4;
     gotoxy(25,15);
     switch(a4)
     {
     case 1:cout<<"RIGHT ANSWER";sc++;
     break;
     case 2:cout<<"WRONG ANSWER";
     break;
     case 3:cout<<"WRONG ANSWER";
     break;
     case 4:cout<<"WRONG ANSWER";
     }
     getch();
     clrscr();
     des();
     gotoxy(15,5);
     cout<<"The process of taking food into the body is called";
     gotoxy(15,7);
     cout<<"1.Absorption";
     gotoxy(15,8);
     cout<<"2.Assimilation";
     gotoxy(15,9);
     cout<<"3.Ingestion";
     gotoxy(15,10);
     cout<<"4.Ingestion";
     gotoxy(15,12);
     cout<<"YOUR ANSWER IS-";
     cin>>a5;
     gotoxy(25,15);
     switch(a5)
     {
     case 1:cout<<"WRONG ANSWER";
     break;
     case 2:cout<<"WRONG ANSWER";
     break;
     case 3:cout<<"WRONG ANSWER";
     break;
     case 4:cout<<"RIGHT ANSWER";sc++;
     getch();
     }
      gotoxy(25,17);
     cout<<"your score is - "<<sc;
	 break;
     case 2:

     gotoxy(20,10);

    cout<<"you opt for medium level";
    getch();
    clrscr();
    des();
    gotoxy(15,5);
    cout<<"Q1) Which bank is the Banker of the Banks??";
    gotoxy(15,7);
    cout<<"1.UBI";
    gotoxy(15,8);
    cout<<"2.RBI";
    gotoxy(15,9);
    cout<<"3.PNB ";
    gotoxy(15,10);
    cout<<"4.SBI";
    gotoxy(15,11);
    cout<<"YOUR ANSWER IS-";
    cin>>b1;
    gotoxy(25,15);
    switch(b1)
     {
     case 1:cout<<"WRONG ANSWER";
     break;
     case 2:cout<<"RIGHT ANSWER";st++;
     break;
     case 3:cout<<"WRONG ANSWER";
     break;
     case 4:cout<<"WRONG ANSWER";
     }
     getch();
     clrscr();
     des();
     gotoxy(15,5);
     cout<<" Which country is the largest producer of Bauxite?";
     gotoxy(15,7);
     cout<<"1. South Africa";
     gotoxy(15,8);
     cout<<"2.North America";
     gotoxy(15,9);
     cout<<"3.India";
     gotoxy(15,10);
     cout<<"4. Australia";
     gotoxy(15,12);
     cout<<"YOUR ANSWER IS-";
     cin>>b2;
     gotoxy(25,15);
     switch(b2)
     {
     case 1:cout<<"WRONG ANSWER";

     break;
     case 2:cout<<"WRONG ANSWER";
     break;
     case 3:cout<<"WRONG ANSWER";
     break;
     case 4:cout<<"RIGHT ANSWER";st++;
     }
     getch();
     clrscr();
     des();
     gotoxy(15,5);
     cout<<"Which was the first English ship that came to India?";
     gotoxy(15,7);
     cout<<"1.Blue dragon";
     gotoxy(15,8);
     cout<<"2.Green Dragon";
     gotoxy(15,9);
     cout<<"3.Red Dragon";
     gotoxy(15,10);
     cout<<"4.White Dragon";
     gotoxy(15,12);
     cout<<"YOUR ANSWER IS-";
     cin>>b3;
     gotoxy(25,15);
     switch(b3)
     {
     case 1:cout<<"WRONG ANSWER";
     break;
     case 2:cout<<"WRONG ANSWER";
     break;
     case 3:cout<<"RIGHT ANSWER";st++;
     break;
     case 4:cout<<"WRONG ANSWER";
     }
      getch();
      clrscr();
     des();
     gotoxy(15,5);
     cout<<"In which animal is respiration done by skin?";
     gotoxy(15,7);
     cout<<"1.Rabbit";
     gotoxy(15,8);
     cout<<"2. Tortoise";
     gotoxy(15,9);
     cout<<"3.Frog";
     gotoxy(15,10);
     cout<<"4.Fish";
     gotoxy(15,12);
     cout<<"YOUR ANSWER IS-";
     cin>>b4;
     gotoxy(25,15);
     switch(b4)
     {
     case 1:cout<<"WRONG ANSWER";
     break;
     case 2:cout<<"WRONG ANSWER";
     break;
     case 3:cout<<"RIGHT ANSWER";st++;
     break;
     case 4:cout<<"WRONG ANSWER";
     }
     getch();
     clrscr();
     des();
     gotoxy(15,5);
     cout<<" Which planet is known as the Earth’s twin?";
     gotoxy(15,7);
     cout<<"1.Jupiter";
     gotoxy(15,8);
     cout<<"2.Mars";
     gotoxy(15,9);
     cout<<"3.Venus";
     gotoxy(15,10);
     cout<<"4.Saturn";
     gotoxy(15,12);
     cout<<"YOUR ANSWER IS-";
     cin>>b5;
     gotoxy(25,15);
     switch(b5)
     {
     case 1:cout<<"WRONG ANSWER";
     break;
     case 2:cout<<"WRONG ANSWER";
     break;
     case 3:cout<<"RIGHT ANSWER";st++;
     break;
     case 4:cout<<"WRONG ANSWER";
     getch();
     }
      gotoxy(25,17);
     cout<<"your score is - "<<st;
	   break;
     case 3:

     gotoxy(20,10);

    cout<<"you opt for hard level";
    getch();
    clrscr();
    des();
    gotoxy(15,5);
    cout<<"Q1) Which is a land locked sea??";
    gotoxy(15,7);
    cout<<"1.Caribbean Sea";
    gotoxy(15,8);
    cout<<"2.Aral Sea";
    gotoxy(15,9);
    cout<<"3.Red Sea";
    gotoxy(15,10);
    cout<<"4.South China Sea";
    gotoxy(15,11);
    cout<<"YOUR ANSWER IS-";
    cin>>b1;
    gotoxy(25,15);
    switch(c1)
     {
     case 1:cout<<"WRONG ANSWER";
     break;
     case 2:cout<<"RIGHT ANSWER";sw++;
     break;
     case 3:cout<<"WRONG ANSWER";

     break;
     case 4:cout<<"WRONG ANSWER";
     }
     getch();
     clrscr();
     des();
     gotoxy(15,5);
     cout<<"Who is called Father of Economics?";
     gotoxy(15,7);
     cout<<"1.Aristotle";
     gotoxy(15,8);
     cout<<"2.Einstein";
     gotoxy(15,9);
     cout<<"3.Adam Smith";
     gotoxy(15,10);
     cout<<"4.Geoffrey Chaucer";
     gotoxy(15,12);
     cout<<"YOUR ANSWER IS-";
     cin>>c2;
     gotoxy(25,15);
     switch(c2)
     {
     case 1:cout<<"WRONG ANSWER";

     break;
     case 2:cout<<"WRONG ANSWER";
     break;
     case 3:cout<<"RIGHT ANSWER";  sw++;
     break;
     case 4:cout<<"WRONG ANSWER";
     }
     getch();
     clrscr();
     des();
     gotoxy(15,5);
     cout<<" Entomology studies what?";
     gotoxy(15,7);
     cout<<"1.Insects";
     gotoxy(15,8);
     cout<<"2.The origin and history of technical and scientific terms";
     gotoxy(15,9);
     cout<<"3.Behavior of human beings";
     gotoxy(15,10);
     cout<<"4.The formation of rocks";
     gotoxy(15,12);
     cout<<"YOUR ANSWER IS-";
     cin>>c3;
     gotoxy(25,15);
     switch(c3)
     {
     case 1:cout<<"RIGHT ANSWER"; sw++;
     break;
     case 2:cout<<"WRONG ANSWER";
     break;
     case 3:cout<<"WRONG ANSWER";
     break;
     case 4:cout<<"WRONG ANSWER";
     }
      getch();
      clrscr();
     des();
     gotoxy(15,5);
     cout<<"Mahatma Gandhi founded the ______ newspaper in 1903 at South Africa.";
     gotoxy(15,7);
     cout<<"1.Indian Opinion";
     gotoxy(15,8);
     cout<<"2.Harijan";
     gotoxy(15,9);
     cout<<"3.India News";
     gotoxy(15,10);
     cout<<"4.Indian Speaker";
     gotoxy(15,12);
     cout<<"YOUR ANSWER IS-";
     cin>>c4;
     gotoxy(25,15);
     switch(c4)
     {
     case 1:cout<<"RIGHT ANSWER";sw++;
     break;
     case 2:cout<<"WRONG ANSWER";
     break;
     case 3:cout<<"WRONG ANSWER";
     break;
     case 4:cout<<"WRONG ANSWER";
     }
     getch();
     clrscr();
     des();
     gotoxy(15,5);
     cout<<" The country which is also known as country of copper is?";
     gotoxy(15,7);
     cout<<"1.Chile";
     gotoxy(15,8);
     cout<<"2.Albania";
     gotoxy(15,9);
     cout<<"3.Albania";
     gotoxy(15,10);
     cout<<"4.Zambia";
     gotoxy(15,12);
     cout<<"YOUR ANSWER IS-";
     cin>>c5;
     gotoxy(25,15);
     switch(c5)
     {
     case 1:cout<<"WRONG ANSWER";
     break;
     case 2:cout<<"WRONG ANSWER";
     break;
     case 3:cout<<"WRONG ANSWER";
     break;
     case 4:cout<<"RIGHT ANSWER";sw++;
     getch();
     }
      gotoxy(25,17);
     cout<<"your score is - "<<sw;

    }

  }

};
void main()
{
 clrscr();
 game g;
 fstream f;
 g.des();
 g.load();
 g.des();
 g.rule();
 g.des();
 g.ask();
 g.des();
 g.diflvl();
 f.open("score.txt",ios::app);
 f<<"\nPLAYER NAME-";
 f.write((char*)&name,sizeof(name));
 if(dl==1)
 {
 f<<"SCORE-"<<sc;
 }
 else if(dl==2)
 {
 f<<"SCORE-"<<st;
 }
else if(dl==3)
 {
 f<<"SCORE-"<<sw;
 }

 f.close();
 getch();
}