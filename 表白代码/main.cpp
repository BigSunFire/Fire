#include<bits/stdc++.h>
#include<windows.h>
#include <time.h>
#include <conio.h>///����̨�������ͷ�ļ�
using namespace std;
int flag=0;
int xx0=1,yy0=0;
int yy1=12,yy2=13,yy3=14;
int yyy1=9,yyy2=10;
int mo=0;///ģʽ
int coutx=0;
int end0=0;
int end1=0;
void HideCursor(){CONSOLE_CURSOR_INFO cursor_info = {1, 0};SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);}
int color(int c) 	///SetConsoleTextAttribute��API���ÿ���̨����������ɫ�ͱ���ɫ�ĺ���
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);        ///����������ɫ
    return 0;
}
int map0[2][12]={
0,0,1,0,0,2,0,0,3,0,0,0,
11,0,0,0,0,0,0,0,0,0,0,0};
void prin()
{
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<12;j++)
        {
            if(map0[i][j]==0)
            {
                color(0);
                cout<<"  ";
            }
            if(map0[i][j]==1&&flag>0)
            {
                color(9);
                cout<<"��";
            }
            if(map0[i][j]==2&&flag>1)
            {
                color(3);
                cout<<"��";
            }
            if(map0[i][j]==3&&flag>2)
            {
                color(4);
                cout<<"��";
            }
            if(map0[i][j]==4)
            {
                color(13);
                cout<<"ү";
            }
            if(map0[i][j]==5)
            {
                color(13);
                cout<<"��";
            }
            if(map0[i][j]==6)
            {
                color(13);
                cout<<"��";
            }
            if(map0[i][j]==7)
            {
                color(13);
                cout<<"��";
            }                                                                                                                                                                                                                                                                                                if(map0[i][j]==8){color(13);cout<<"��";} if(map0[i][j]==9){color(13);cout<<"��";} if(map0[i][j]==10){color(13);cout<<"��";}
            if(map0[i][j]==11)
            {
                color(8);
                cout<<"��";
            }
            if(map0[i][j]==12)
            {
                color(8);
                cout<<"��";
            }
            if(map0[i][j]==13)
            {
                color(8);
                cout<<"��";
            }
            if(map0[i][j]==14)
            {
                color(13);
                cout<<"��";
            }
            if(map0[i][j]==15)
            {
                color(13);
                cout<<"ʯ";
            }
            if(map0[i][j]==16)
            {
                color(13);
                cout<<"��";
            }
        }
        cout<<endl;
    }
}
void coutt()
{
    cin>>mo;
    while(mo<0||mo>5)
    {
        cin>>mo;
    }
}
void mov()
{
    if(map0[xx0-1][yy0]>0) flag++;
    if(yy0<11)
    {
        yy0++;
        if(flag==0)
        {
            map0[xx0][yy0]=11;
            map0[xx0][yy0-1]=0;
        }
        if(flag==1)
        {
            map0[xx0][yy0]=12;
            map0[xx0][yy0-1]=0;
        }
        if(flag==2)
        {
            map0[xx0][yy0]=13;
            map0[xx0][yy0-1]=0;
        }
    }
    if(yy0==11)
    {
        map0[xx0][yy0]=0;
        end0=1;
    }
}
void mov2()
{
    if(mo==0)
    {
        ///map0[1][y1]=14;
        yy3=yy3-3;
        yy2=yy2-2;
        yy1=yy1-1;
        map0[1][yy1]=16;
        map0[1][yy2]=15;
        map0[1][yy3]=14;
        if(yy2+2<12)
        {
            map0[1][yy1+1]=0;
            map0[1][yy2+2]=0;
            map0[1][yy3+3]=0;
        }
        if(yy3==2) {end1=1;map0[1][yy1]=16;map0[1][yy2]=15;map0[1][yy3]=14;}
    }
    if(mo==1)
    {
        ///map0[1][8]=4;
        ///color(13);cout<<"ceshi"<<yy2<<endl;
        ///Sleep(5000);
        yyy1=yyy1-1;
        yyy2=yyy2-2;
        map0[1][yyy2]=4;
        ///color(13);cout<<"ceshi"<<yy2<<endl;
        map0[1][yyy1]=4;
        ///color(13);cout<<"ceshi"<<yy2<<endl;
        map0[1][yyy1+1]=0;
        map0[1][yyy2+2]=0;
        ///color(13);cout<<"ceshi"<<yy2<<endl;
        if(yyy2==4) {end1=1;map0[1][yyy2]=4;map0[1][yyy1]=4;}
        ///color(13);cout<<"ceshi"<<end1<<endl;
        ///Sleep(5000);
    }
    if(mo==2)
    {
        ///map0[1][8]=4;
        yyy1=yyy1-1;
        yyy2=yyy2-2;
        map0[1][yyy2]=5;
        map0[1][yyy1]=5;
            map0[1][yyy1+1]=0;
            map0[1][yyy2+2]=0;
        if(yyy2==4) {end1=1;map0[1][yyy2]=5;map0[1][yyy1]=5;}
    }
    if(mo==3)
    {
        yyy1=yyy1-1;
        yyy2=yyy2-2;
        map0[1][yyy2]=6;
        map0[1][yyy1]=6;
            map0[1][yyy1+1]=0;
            map0[1][yyy2+2]=0;
        if(yyy2==4) {end1=1;map0[1][yyy2]=6;map0[1][yyy1]=6;}
    }
    if(mo==4)
    {
        yyy1=yyy1-1;
        yyy2=yyy2-2;
        map0[1][yyy2]=7;
        map0[1][yyy1]=7;
            map0[1][yyy1+1]=0;
            map0[1][yyy2+2]=0;
        if(yyy2==4) {end1=1;map0[1][yyy2]=7;map0[1][yyy1]=7;}
    }
    if(mo==5)
    {
        ///map0[1][y1]=14;
        yy3=yy3-3;
        yy2=yy2-2;
        yy1=yy1-1;
        map0[1][yy1]=10;
        map0[1][yy2]=9;
        map0[1][yy3]=8;
        if(yy2+2<12)
        {
            if(map0[1][yy1+1]==10) map0[1][yy1+1]=0;
            if(map0[1][yy2+2]==9) map0[1][yy2+2]=0;
            if(map0[1][yy3+3]==8) map0[1][yy3+3]=0;
        }
        if(yy3==2) {end1=1;map0[1][yy1]=10;map0[1][yy2]=9;map0[1][yy3]=8;}
    }
}
///By:Hire or Fire
int main()
{
    cout << "������Ҫ��׵Ķ���0 ��ʯ��1 үү��2 ���̣�3 ���裻4 �ְ֣�"<<endl;
    coutt();
    system("cls");
    HideCursor();
    while(!end0)
    {
         prin();
         mov();
         Sleep(1000);
         system("cls");
    }
    while(!end1)
    {
       prin();
       mov2();
       Sleep(1000);
       system("cls");
    }
    prin();
    Sleep(1000);
    return 0;
}
