#include<iostream>
#include<stdlib.h>
using namespace std;

void board();
void change(int user);
void playercall();
void win();

int flag=0;
int temp=0;
int user=0;
char a[10]={'0','1','2','3','4','5','6','7','8','9'};

int main()
{
    cout<<"Tic Tak Toe......"<<endl;
    cout<<"Player 1 = 'X' "<<endl;
    cout<<"Player 2 = 'O' \n"<<endl;
    int i;
    board();
    playercall();
    return 0;
}

void board()
{
    cout<<a[1]<<"\t|"<<"\t"<<a[2]<<"\t|"<<"\t"<<a[3]<<endl;
    cout<<"------------------"<<endl;
    cout<<a[4]<<"\t|"<<"\t"<<a[5]<<"\t|"<<"\t"<<a[6]<<endl;
    cout<<"------------------"<<endl;
    cout<<a[7]<<"\t|"<<"\t"<<a[8]<<"\t|"<<"\t"<<a[9]<<endl;
}

void change(int user)
{
    if(temp==0)
    {
        a[user]='X';
        board();
    }
    else
    {
        a[user]='O';
        board();
    }
}

void win()
{
    //PLAYER 1
    //row
    if((a[1]=='X')&&(a[2]=='X')&&(a[3]=='X'))
    {
        cout<<"Player 1 Wins";
        flag++;
    }
    if((a[4]=='X')&&(a[5]=='X')&&(a[6]=='X'))
    {
        cout<<"Player 1 Wins";
        flag++;
    }
    if((a[7]=='X')&&(a[8]=='X')&&(a[9]=='X'))
    {
        cout<<"Player 1 Wins";
        flag++;
    }
    //COLUMN
    if((a[1]=='X')&&(a[4]=='X')&&(a[7]=='X'))
    {
        cout<<"Player 1 Wins";
        flag++;
    }
    if((a[2]=='X')&&(a[5]=='X')&&(a[8]=='X'))
    {
        cout<<"Player 1 Wins";
        flag++;
    }
    if((a[3]=='X')&&(a[6]=='X')&&(a[9]=='X'))
    {
        cout<<"Player 1 Wins";
        flag++;
    }
    //cross
    if((a[1]=='X')&&(a[5]=='X')&&(a[9]=='X'))
    {
        cout<<"Player 1 Wins";
        flag++;
    }
    if((a[7]=='X')&&(a[5]=='X')&&(a[3]=='X'))
    {
        cout<<"Player 1 Wins";
        flag++;
    }
    //PLAYER 2
    //row
    if((a[1]=='O')&&(a[2]=='O')&&(a[3]=='O'))
    {
        cout<<"Player 2 Wins";
        flag++;
    }
    if((a[4]=='O')&&(a[5]=='O')&&(a[6]=='O'))
    {
        cout<<"Player 2 Wins";
        flag++;
    }
    if((a[7]=='O')&&(a[8]=='O')&&(a[9]=='O'))
    {
        cout<<"Player 2 Wins";
        flag++;
    }
    //column
    if((a[1]=='O')&&(a[4]=='O')&&(a[7]=='O'))
    {
        cout<<"Player 2 Wins";
        flag++;
    }
    if((a[2]=='O')&&(a[5]=='O')&&(a[8]=='O'))
    {
        cout<<"Player 2 Wins";
        flag++;
    }
    if((a[3]=='O')&&(a[6]=='O')&&(a[9]=='O'))
    {
        cout<<"Player 2 Wins";
        flag++;
    }
    //cross
    if((a[1]=='O')&&(a[5]=='O')&&(a[9]=='O'))
    {
        cout<<"Player 2 Wins";
        flag++;
    }
    if((a[7]=='O')&&(a[5]=='O')&&(a[3]=='O'))
    {
        cout<<"Player 2 Wins";
        flag++;
    }
}

void playercall()
{
    int i,j;
    for(i=0;i<9;i++)
    {
        if(temp==0)
        {
            cout<<"PLayer 1 :: ";
            cin>>user;
            change(user);
            temp++;
        }
        else
        {
            cout<<"PLayer 2 :: ";
            cin>>user;
            change(user);
            temp--;
        }
        win();
        if(flag==1)
            break;
    }
}
