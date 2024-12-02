#include<stdio.h>                                        //Header Files
#include<conio.h>
#include<graphics.h>
void age();                                            // function decleration
void main()
{
 clrscr();
 int gdriver=DETECT,gm; 					// to call driver
 initgraph(&gdriver,&gm,"C://TC//BGI");                                                 //to show path
 setbkcolor(GREEN);                                        //to set background colour
 settextstyle(7,0,5);					                             //to set font style
 outtextxy(5,10,"Chronological Age Finder ");				
 printf("\n\n\n\n\n\n");
 age();								//function call
 printf("\n\nThankyou");
 getch();
}
void age()						//function Definition
{
 int n,b,y,r1,r2,r3,r4,r5,r6,r7;
 printf("Guess Any number:-\n");
 scanf("%d",&n);
    r1=n*2;
    r2=r1+5;
    r3=r2*50;
 printf("Please Select\n press 1 - (if your birthday has been passed) \n press 2 - (if Not)\n");
 scanf("%d",&b);
 if(b==1)
 {
  r4=r3+1774;
  printf("Enter Your Birth Year:- ");
  scanf("%d",&y);
  r5=r4-y;
  r6=r5%100;
  r7=r5/100;
  cleardevice();
  printf("Guess number is : %d\n",r7);
  printf("\nYour age is : %d",r6);
 }
 else
 {
  r4=r3+1773;
  printf("Enter Your Birth year:- ");
  scanf("%d",&y);
  r5=r4-y;
  r6=r5%100;
  r7=r5/100;
  cleardevice();
  printf("Guess Number is : %d\n",r7);
  printf("\nYour age is : %d",r6);
 }
}
