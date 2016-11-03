#include<stdio.h>
#include <iostream>
#include<conio.h>
#include<process.h>
#include<stdlib.h>
using namespace std;


int check1(char unit[],char s1,char P1[])
{
	if((unit[1]==unit[2])&&(unit[2]==unit[3])&&(unit[3]==s1))
	  {
			system("cls");
			cout<<"\n\t\t\t";puts(P1);cout<<"\n\n\t Congratulations. You win";
			return(1);
	  }
	if((unit[4]==unit[5])&&(unit[5]==unit[6])&&(unit[6]==s1))
	  {
			system("cls");
			cout<<"\n\t\t\t";puts(P1);cout<<"\n\n\t Congratulations. You win";
			return(1);
	  }
	if((unit[7]==unit[8])&&(unit[8]==unit[9])&&(unit[9]==s1))
	  {
			system("cls");
			cout<<"\n\t\t\t";puts(P1);cout<<"\n\n\t Congratulations. You win";
			return(1);
	  }
	if((unit[1]==unit[4])&&(unit[4]==unit[7])&&(unit[7]==s1))
	  {
			system("cls");
			cout<<"\n\t\t\t";puts(P1);cout<<"\n\n\t Congratulations. You win";
			return(1);
	  }
	if((unit[2]==unit[5])&&(unit[5]==unit[8])&&(unit[8]==s1))
	  {
			system("cls");
			cout<<"\n\t\t\t";puts(P1);cout<<"\n\n\t Congratulations. You win";
			return(1);
	  }
	if((unit[3]==unit[6])&&(unit[6]==unit[9])&&(unit[9]==s1))
	  {
			system("cls");
			cout<<"\n\t\t\t";puts(P1);cout<<"\n\n\t Congratulations. You win";
			return(1);
	  }
	if((unit[1]==unit[5])&&(unit[5]==unit[9])&&(unit[9]==s1))
	  {
			system("cls");
			cout<<"\n\t\t\t";puts(P1);cout<<"\n\n\t Congratulations. You win";
			return(1);
	  }
	if((unit[3]==unit[5])&&(unit[5]==unit[7])&&(unit[7]==s1))
	  {
			system("cls");
			cout<<"\n\t\t\t";puts(P1);cout<<"\n\n\t Congratulations. You win";
			return(1);
	  }
	  return(0);

}

int check2(char unit[],char s2,char P2[])
{
	if((unit[1]==unit[2])&&(unit[2]==unit[3])&&(unit[3]==s2))
	  {
			system("cls");
			cout<<"\n\t\t\t";puts(P2);cout<<"\n\n\t Congratulations. You win";
			return(1);
	  }
	if((unit[4]==unit[5])&&(unit[5]==unit[6])&&(unit[6]==s2))
	  {
			system("cls");
			cout<<"\n\t\t\t";puts(P2);cout<<"\n\n\t Congratulations. You win";
			return(1);
	  }
	if((unit[7]==unit[8])&&(unit[8]==unit[9])&&(unit[9]==s2))
	  {
			system("cls");
			cout<<"\n\t\t\t";puts(P2);cout<<"\n\n\t Congratulations. You win";
			return(1);
	  }
	if((unit[1]==unit[4])&&(unit[4]==unit[7])&&(unit[7]==s2))
	  {
			system("cls");
			cout<<"\n\t\t\t";puts(P2);cout<<"\n\n\t Congratulations. You win";
			return(1);
	  }
	if((unit[2]==unit[5])&&(unit[5]==unit[8])&&(unit[8]==s2))
	  {
			system("cls");
			cout<<"\n\t\t\t";puts(P2);cout<<"\n\n\t Congratulations. You win";
			return(1);
	  }
	if((unit[3]==unit[6])&&(unit[6]==unit[9])&&(unit[9]==s2))
	  {
			system("cls");
			cout<<"\n\t\t\t";puts(P2);cout<<"\n\n\t Congratulations. You win";
			return(1);
	  }
	if((unit[1]==unit[5])&&(unit[5]==unit[9])&&(unit[9]==s2))
	  {
			system("cls");
			cout<<"\n\t\t\t";puts(P2);cout<<"\n\n\t Congratulations. You win";
			return(1);
	  }
	if((unit[3]==unit[5])&&(unit[5]==unit[7])&&(unit[7]==s2))
	  {
			system("cls");
			cout<<"\n\t\t\t";puts(P2);cout<<"\n\n\t Congratulations. You win";
			return(1);
	  }
	  return(0);

}

int main()
{
	char cho;
	cout<<"\n\t\t Tic Tac Toe, Developed by Samarth Modi";
	cout<<"\n\t\t         All Rights Reserved";
	cout<<"\n\t\t     Only for Non Commercial Use";
	cout<<"\n\n\n\t Do You ACCEPT the Terms and Conditions??\n\t Enter y to ACCEPT. Anything else to DECLINE, and exit";
	cout<<"\n\n\t Choice: ";
	cin>>cho;
	if(cho!='y')
	 exit(0);

	char choice;
	do{
	char cell[10],P1[10],P2[10],s1,s2,x[10];
	unsigned int i,p1,p2,flag=0;
	cell[0]='*';

	system("cls");
	gets(x);
	cout<<"\n\n Enter name of Player 1: ";
	gets(P1);
	cout<<"\n Enter name of Player 2: ";
	gets(P2);

	cout<<"\n\n";
	puts(P1);
	cout<<"Enter your Symbol: ";
	cin>>s1;
	cout<<"\n\n";
	puts(P2);
	cout<<"Enter your Symbol: ";
	cin>>s2;

	system("cls");
	for(i=1;i<=9;i++)
	{
		cell[i]=' ';
	}

	cout<<"\n ************************* Welcome to Tic Tac Toe *************************";
	cout<<"\n\n\t\t\t\t"<<"1 | 2 | 3\n\t\t\t\t---------\n\t\t\t\t4 | 5 | 6\n\t\t\t\t---------\n\t\t\t\t7 | 8 | 9";
	cout<<"\n\n Enter your Moves According to the number shown in above Board";
	for(i=1;i<=9;i++)
	{
		p:
		cout<<"\n\n ";
		puts(P1);
		cout<<" : ";
		cin>>p1;
		if(cell[p1]==' ')
			cell[p1]=s1;

		else if((p1<1)||(p1>9))
		  {
				cout<<"\n Invalid move";
				goto p;
		  }

		else
		  {
				cout<<"\n Place already occupied";
				goto p;
		  }
      system("cls");
      cout<<"\n ************************* Welcome to Tic Tac Toe *************************";
	cout<<"\n\n\t\t\t\t"<<"1 | 2 | 3\n\t\t\t\t---------\n\t\t\t\t4 | 5 | 6\n\t\t\t\t---------\n\t\t\t\t7 | 8 | 9";
	cout<<"\n\n Enter your Moves According to the number shown in above Board";


	  flag++;
	  if(check1(cell,s1,P1)==1)
		{
		  cout<<"\n\n\t\t\t\t"<<cell[1]<<" | "<<cell[2]<<" | "<<cell[3]<<"\n\t\t\t\t---------\n\t\t\t\t"<<cell[4]<<" | "<<cell[5]<<" | "<<cell[6]<<"\n\t\t\t\t---------\n\t\t\t\t"<<cell[7]<<" | "<<cell[8]<<" | "<<cell[9];
		  goto s;
		}
	  cout<<"\n\n\t\t\t\t"<<cell[1]<<" | "<<cell[2]<<" | "<<cell[3]<<"\n\t\t\t\t---------\n\t\t\t\t"<<cell[4]<<" | "<<cell[5]<<" | "<<cell[6]<<"\n\t\t\t\t---------\n\t\t\t\t"<<cell[7]<<" | "<<cell[8]<<" | "<<cell[9];
		if(flag>=9)
			goto r;
		q:
		cout<<"\n\n ";
		puts(P2);
		cout<<" : ";
		cin>>p2;
		if(cell[p2]==' ')
			cell[p2]=s2;

		else if((p2<1)||(p2>9))
		  {
				cout<<"\n Invalid move";
				goto p;
		  }

		else
		  {
				cout<<"\n Place Already Occupied. Enter again";
				goto q;
		  }
        system("cls");
        cout<<"\n ************************* Welcome to Tic Tac Toe *************************";
	cout<<"\n\n\t\t\t\t"<<"1 | 2 | 3\n\t\t\t\t---------\n\t\t\t\t4 | 5 | 6\n\t\t\t\t---------\n\t\t\t\t7 | 8 | 9";
	cout<<"\n\n Enter your Moves According to the number shown in above Board";


		flag++;
		if(check2(cell,s2,P2)==1)
		{
		  cout<<"\n\n\t\t\t\t"<<cell[1]<<" | "<<cell[2]<<" | "<<cell[3]<<"\n\t\t\t\t---------\n\t\t\t\t"<<cell[4]<<" | "<<cell[5]<<" | "<<cell[6]<<"\n\t\t\t\t---------\n\t\t\t\t"<<cell[7]<<" | "<<cell[8]<<" | "<<cell[9];
		  goto s;
		}
		cout<<"\n\n\t\t\t\t"<<cell[1]<<" | "<<cell[2]<<" | "<<cell[3]<<"\n\t\t\t\t---------\n\t\t\t\t"<<cell[4]<<" | "<<cell[5]<<" | "<<cell[6]<<"\n\t\t\t\t---------\n\t\t\t\t"<<cell[7]<<" | "<<cell[8]<<" | "<<cell[9];

	 }
	 r:
	 system("cls");
	 cout<<"\n\n\n\n\t\t No One Wins. Match Draw";
	 s:
	 cout<<"\n\n Do you Want to play again?(y/n) : ";
	 cin>>choice;

	 }while(choice=='y'||choice=='Y');
		exit(0);

        return 0;
}
