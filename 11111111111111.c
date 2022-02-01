#include<stdio.h>
#include<conio.h>
#include <windows.h>
#include<ctype.h>
#include<stdlib.h>
#include<time.h>
#include<dos.h>

void displayscore()
 {
 char name[20];
 float s;
 FILE *f;
 system("cls");
 f=fopen("score.txt","r");
 fscanf(f,"%s%f",&name,&s);
 printf("\n\n\t\t ");
 printf("\n\n\t\t %s has secured the Highest Score %.2f",name,s);
 printf("\n\n\t\t ");
 fclose(f);
 getch();
 }




void writescore(float score, char plnm[20])
 {
 float sc;
 char nm[20];
 FILE *f;
 system("cls");
 f=fopen("score.txt","r");
 fscanf(f,"%s%f",&nm,&sc);
 if (score>=sc)
  { sc=score;
    fclose(f);
    f=fopen("score.txt","w");
    fprintf(f,"%s\n%.2f",plnm,sc);
    fclose(f);
  }
 }
int main()
     {
     int countq,countr;
     int r,i;
     int pa;int nq[6];int w;
     float score;
     char choice;
     char playername[20];
     time_t initialtime,finaltime;
     system("cls");
     //randomize();
     mainhome:
     system("cls");
     puts("\n\t\t 10 PUZZLE\n\n") ;
     puts("\n\t\t-------------------------------");
     puts("\n\t\t Enter 'S' to start game       ");
     printf("\n\t\t-------------------------------\n\n\t\t  ");
     choice=toupper(getch());




     if(choice=='S'){
     system("cls");

     printf("\n\n\n\t\t\tEnter your name...");
     printf("\n\t\t\t(only one word)\n\n\t\t\t");
     gets(playername);

     home:
     system("cls");
     initialtime=time(NULL);
     countq=countr=0;
     i=1;
     start:
     srand ( time(NULL) );
     r=rand()%10+1;
     nq[i]=r;
     for (w=0;w<i;w++)
 if (nq[w]==r) goto start;

     switch(r)
  {
  case 1:
  printf("\n\nThink the next letter for ?");
  printf("\n\nZ\tS G\n\nM D I\tF E H ?\n\n");
  countq++;
  if (toupper(getch())=='G')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
        {printf("\n\nWrong!!!");break;}
        break;

  case 2:
  printf("\n\n\nWhich number repace the question mark");
  //printf("time period is same?");
  printf("\n\n7 4 9 12\t1 1 4 4\n\n6 2 5 ?\n\n");
  countq++;
  if (toupper(getch())=='9')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
        printf("\n\nWrong!!!");
  break;

  case 3:
  printf("\n\n\nSuppose there are 800core people in the world.If you do fingers together with their left hand,how much do you think?");
  //printf("\n\nA.Richard Nikson\tB.Abraham Linkon\n\nC.John F. Kennedy\tD.George Washington\n\n");
  countq++;
  if (toupper(getch())=='0')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
        {printf("\n\nWrong!!! ");break;}


  case 4:
  printf("\n\n\Find the relation between those letter?");
  printf("\n\nFFAF=81\tB.CFAB=63\n\nC.ABAZ=25\tD.OABC=?\n\n");
  countq++;
  if (toupper(getch())=='9')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
        {printf("\n\nWrong!!!");break;}


  case 5:
  printf("\n\n\nThinking the number of question mark?");
  printf("\n\n? 5 26 677\n\n");
  countq++;
  if (toupper(getch())=='2')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
        {printf("\n\nWrong!!!");break;}

  case 6:
  printf("\n\n\nLook the number carefull and find the number for question mark.?");
  printf("\n\n6 1 5  \t3 9 10  \n\n4 3 ?\n\n");
  countq++;
  if (toupper(getch())=='5' )
   {printf("\n\nCorrect!!!");countr++; break;}
  else
        {printf("\n\nWrong!!! The correct answer is B.2nd");break;}


  case 7:
  printf("\n\n\nFind it?");
  printf("\n\nCircle+Circle=?\tCircle+Triangle=4\n\nTriangle+Rectangle=7\tRectangle+Square=9\n\n");
  countq++;
  if (toupper(getch())=='2')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
        {printf("\n\nWrong!!!");break;}


  case 8:
  printf("\n\n\nCan you find the the mistake?");
  printf("\n\n123456789\n\n");
  countq++;
  if (toupper(getch())=='the')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
        {printf("\n\nWrong!!!");break;}


  case 9:
  printf("\n\n\nFind the letter");
  printf("\n\n3333=L\t4444=P\n\n5555=T\t\t6666=?\n\n");
  countq++;
  if (toupper(getch())=='x')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
        {printf("\n\nWrong!!!");break;}


  case 10:
  printf("\n\n\nFind the letter?");
  printf("\n\nA.36=J\tB.46=T\n\nC.56=?\n\n");
  countq++;
  if (toupper(getch())=='D')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
        {printf("\n\nWrong!!!");break;}


 }
 i++;
 if (i<=5) goto start;
 finaltime=time(NULL);
 score=(float)countr/countq*100-difftime(finaltime,initialtime)/3;
 if (score<0) score=0;
 printf("\n\n\nYour Score: %.2f",score);
 if (score==100) printf("\n\nEXCELLENT!!! KEEP IT UP");
 else if (score>=80 && score<100) printf("\n\nVERY GOOD!!");
 else if (score>=60 &&score<80) printf("\n\nGOOD! BUT YOU NEED TO Work Hard MORE.");
 else if (score>=40 && score<60) printf("\n\nSATISFACTORY RESULT, BUT THIS MUCH IS MUCH SUFFICIENT.");
 else printf("\n\nYOU ARE VERY POOR IN G.K.,WORK HARD");
 puts("\n\nNEXT PLAY?(Y/N)");
 if (toupper(getch())=='Y')
  goto home;
 else
  {
  writescore(score,playername);
  goto mainhome;
  }
 }
     else
 {
 printf("\n\n\t\t  Enter the right key\n\n\t\t  ");
 Sleep(700);
 goto mainhome;
 }
 return 0;
}
