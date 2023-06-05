#include<conio.h>
#include<iostream>
using namespace std;

void board();
void change();
void playercall();
void win();

int flag=0;
char a[10]={'0','1','2','3','4','5','6','7','8','9'};
int user=0;
int temp=0;
int check;
int count=0;

int main()
{
	cout<<"Tic-Tak-tak Game.."<<endl;
	cout<<"Player 1 = 'X' "<<endl;
	cout<<"Player 2 = 'O' "<<endl;
	board();
	playercall();
	getch();
	return 0;
}

void board()
{
	cout<<a[1]<<"|"<<a[2]<<"|"<<a[3]<<endl;
	cout<<"------"<<endl;
	cout<<a[4]<<"|"<<a[5]<<"|"<<a[6]<<endl;
	cout<<"------"<<endl;
	cout<<a[7]<<"|"<<a[8]<<"|"<<a[9]<<endl;
}

void win()
{	
	int i;
	//player 1
	//row
	for(i=1;i<=9;i += 3)
	{
		if((a[i]=='X')&&(a[i+1]=='X')&&(a[i+2]=='X'))
		{
			cout<<"PLAYER 1 WINS";
			flag++;
		}
	}
	//COLUMN
	for(i=1;i<=3;i++)
	{
		if((a[i]=='X')&&(a[i+3]=='X')&&(a[i+6]=='X'))
		{
			cout<<"PLAYER 1 WINS";
			flag++;
		}
	}
	//CROSS
	if((a[1]=='X')&&(a[5]=='X')&&(a[9]=='X'))
	{
		cout<<"PLAYER 1 WINS";
		flag++;
	}
	else if((a[3]=='X')&&(a[5]=='X')&&(a[7]=='X'))
	{
		cout<<"PLAYER 1 WINS";
		flag++;
	}
	//PLAYER 2
	//row
	for(i=1;i<=9;i += 3)
	{
		if((a[i]=='O')&&(a[i+1]=='O')&&(a[i+2]=='O'))
		{
			cout<<"PLAYER 2 WINS";
			flag++;
		}
	}
	//COLUMN
	for(i=1;i<=9;i += 3)
	{
		if((a[i]=='O')&&(a[i+3]=='O')&&(a[i+6]=='O'))
		{
			cout<<"PLAYER 2 WINS";
			flag++;
		}
	}
	//CROSS
	if((a[1]=='O')&&(a[5]=='O')&&(a[9]=='O'))
	{
		cout<<"PLAYER 2 WINS";
		flag++;
	}
	else if((a[3]=='O')&&(a[5]=='O')&&(a[7]=='O'))
	{
		cout<<"PLAYER 2 WINS";
		flag++;
	}
}

void change()
{
	if((a[user]=='X') || (a[user]=='O'))
	{
		cout<<"Invalid move"<<endl;
		check=1;
	}
	else if((user>9)||(user<1))
	{
		cout<<"Invalid move"<<endl;
		check=1;
	}
	else
	{
		system("CLS");
		if(temp==1)
		{
			a[user]='X';
			board();
		}
		else
		{
			a[user]='O';
			board();
		}
		win();
	}
	if(count>=9 && flag==0)
	{
		cout<<"That's a Draw ... Try Again..";
	}
}

void playercall()
{
	int i;
	for(i=0;i<9;i++)
	{
		if(check==1)
		{
			i--;
			check -= 1;
			count -= 1;
			if(temp==0)
			{
				temp=1;
			}
			else
			{
				temp=0;
			}
		}
		if(temp==0)
		{
			cout<<"Player 1 :: ";
			cin>>user;
			temp=1;
			count += 1;
			change();
		}
		if(temp==1)
		{
			cout<<"Player 2 ::";
			cin>>user;
			temp=0;
			count += 1;
			change();
		}
		if(flag==1)
		{
			break;
		}
	}
}
