#include <iostream>
#include<cstdlib>
#include<cstring>
#include <ctime>
#include <windows.h>
#include<bits/stdc++.h>
#define random(x) (rand()%(x))
#define N 1005
#define Min 1997216
///Min ÿ���ַ����ֵ���С��������ʼֵӦ�ñ�����ַ����ֵĴ�������
///N   ��Ҫʹ�õ����������
using namespace std;
///������ʽΪ��AAA.aaa.000����һ����֮ǰΪ��д��ĸ���ڶ�����֮ǰΪСд��ĸ�����Ϊ���֣����ڵ���4λ���֣���û�еĻ���ΪĬ�����룩
char Secret[150];///��������
char Secret1[50];///������1
char Secret2[50];///������2
char Secret3[50];///������3
///Ĭ�����룻
const char Default_s1[]="S";
const char Default_s2[]="yf";
const char Default_s3[]="19970216";
///�ж��Ƿ���Ҫ�Ӽ�����
int Flag_flag;
///�ַ�����
int MountAZ[35]={0};
///����������
int MiWxCount;
///��������
char MingW[150];///����
char MiW[500];///�������
char MiWa[50];///ͷ����
char MiWx[150];///������
char MiWy[150];///������
char MiWr[5];///�������
char MiWz[50];///β����
char MiWaZ[100];///У������,�ַ�
char MiWaz[100];///У����'0''1'
char MiWZz[5];
///������˳���
int Fake[155]={0};///��¼д�������ĵ�����
int Fake_W[150]={-1}; ///д�����ĵ�˳��
///ת�����
int Move;///��λ
int Move_0;///��λ
int Change;///���
int Or;///��ٷ���
int MoveDir;///��λ����
char RanS[5];///�����
char Charint[150];
int CharInt,CharInt0,CharInt1;
int RandomInt[N]={0};
int RandomCount=0;
///�ַ����ձ�
const char Big[32]={'(','{','[','A','B','C','D','E','F','G','H','I','G','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','.','+','*'};
const char Sml[32]={')','}',']','a','b','c','d','e','f','g','h','i','g','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','_','-','/'};
///��������
void work1();///�γ������
void Compare_Charint(char c);
void Creat_charint(char c);
void work2();
int IntChar(char c);
char intToBigchar(int x);
char intToSmlchar(int x);
void CountAZ(int x);
void CreateRandom();
char CharToMove(char c);
void W_Fake();
int MinChar();///�ҳ��ִ�����С���ַ�
void W_MiWZz();
///����ת��Ϊ�ַ�
char intToSmlchar(int x)
{
    return Sml[x];
}
char intToBigchar(int x)
{
    return Big[x];
}
///��λ
char CharToMove(char c)
{
    int flag=3;
    char cx[8];
    char cy[8];
    cx[0]='0'+(RandomInt[RandomCount++]%2);///������ǰ��
    cx[6]='\0';
    cy[6]='\0';
    if(c=='('||c==')') {cx[1]='0';cx[2]='0';cx[3]='0';cx[4]='0';cx[5]='0';}
    else if(c=='{'||c=='}') {cx[1]='0';cx[2]='0';cx[3]='0';cx[4]='0';cx[5]='1';}
    else if(c=='['||c==']') {cx[1]='0';cx[2]='0';cx[3]='0';cx[4]='1';cx[5]='0';}
    else if(c=='a'||c=='A') {cx[1]='0';cx[2]='0';cx[3]='0';cx[4]='1';cx[5]='1';}
    else if(c=='b'||c=='B') {cx[1]='0';cx[2]='0';cx[3]='1';cx[4]='0';cx[5]='0';}
    else if(c=='c'||c=='C') {cx[1]='0';cx[2]='0';cx[3]='1';cx[4]='0';cx[5]='1';}
    else if(c=='d'||c=='D') {cx[1]='0';cx[2]='0';cx[3]='1';cx[4]='1';cx[5]='0';}
    else if(c=='e'||c=='E') {cx[1]='0';cx[2]='0';cx[3]='1';cx[4]='1';cx[5]='1';}
    else if(c=='f'||c=='F') {cx[1]='0';cx[2]='1';cx[3]='0';cx[4]='0';cx[5]='0';}
    else if(c=='g'||c=='G') {cx[1]='0';cx[2]='1';cx[3]='0';cx[4]='0';cx[5]='1';}
    else if(c=='h'||c=='H') {cx[1]='0';cx[2]='1';cx[3]='0';cx[4]='1';cx[5]='0';}
    else if(c=='i'||c=='I') {cx[1]='0';cx[2]='1';cx[3]='0';cx[4]='1';cx[5]='1';}
    else if(c=='j'||c=='J') {cx[1]='0';cx[2]='1';cx[3]='1';cx[4]='0';cx[5]='0';}
    else if(c=='k'||c=='K') {cx[1]='0';cx[2]='1';cx[3]='1';cx[4]='0';cx[5]='1';}
    else if(c=='l'||c=='L') {cx[1]='0';cx[2]='1';cx[3]='1';cx[4]='1';cx[5]='0';}
    else if(c=='m'||c=='M') {cx[1]='0';cx[2]='1';cx[3]='1';cx[4]='1';cx[5]='1';}
    else if(c=='n'||c=='N') {cx[1]='1';cx[2]='0';cx[3]='0';cx[4]='0';cx[5]='0';}
    else if(c=='o'||c=='O') {cx[1]='1';cx[2]='0';cx[3]='0';cx[4]='0';cx[5]='1';}
    else if(c=='p'||c=='P') {cx[1]='1';cx[2]='0';cx[3]='0';cx[4]='1';cx[5]='0';}
    else if(c=='q'||c=='Q') {cx[1]='1';cx[2]='0';cx[3]='0';cx[4]='1';cx[5]='1';}
    else if(c=='r'||c=='R') {cx[1]='1';cx[2]='0';cx[3]='1';cx[4]='0';cx[5]='0';}
    else if(c=='s'||c=='S') {cx[1]='1';cx[2]='0';cx[3]='1';cx[4]='0';cx[5]='1';}
    else if(c=='t'||c=='T') {cx[1]='1';cx[2]='0';cx[3]='1';cx[4]='1';cx[5]='0';}
    else if(c=='u'||c=='U') {cx[1]='1';cx[2]='0';cx[3]='1';cx[4]='1';cx[5]='1';}
    else if(c=='v'||c=='V') {cx[1]='1';cx[2]='1';cx[3]='0';cx[4]='0';cx[5]='0';}
    else if(c=='w'||c=='W') {cx[1]='1';cx[2]='1';cx[3]='0';cx[4]='0';cx[5]='1';}
    else if(c=='x'||c=='X') {cx[1]='1';cx[2]='1';cx[3]='0';cx[4]='1';cx[5]='0';}
    else if(c=='y'||c=='Y') {cx[1]='1';cx[2]='1';cx[3]='0';cx[4]='1';cx[5]='1';}
    else if(c=='z'||c=='Z') {cx[1]='1';cx[2]='1';cx[3]='1';cx[4]='0';cx[5]='0';}
    else if(c=='_'||c=='.') {cx[1]='1';cx[2]='1';cx[3]='1';cx[4]='0';cx[5]='1';}
    else if(c=='-'||c=='+') {cx[1]='1';cx[2]='1';cx[3]='1';cx[4]='1';cx[5]='0';}
    else {cx[1]='1';cx[2]='1';cx[3]='1';cx[4]='1';cx[5]='1';}
    while(flag)
    {
        for(int i=0;i<6;++i)
        {
            cy[(i+Move_0)%6]=cx[i];
        }
        cx[0]=cy[0];
        for(int i=1;i<6;++i)
        {
            if(cx[i]!=cy[i]) flag=0;
            cx[i]=cy[i];
        }
        flag--;
        if(flag<0) flag=0;
    }
    int ansc=(cx[1]-'0')*16+(cx[2]-'0')*8+(cx[3]-'0')*4+(cx[4]-'0')*2+(cx[5]-'0');
    CountAZ(ansc);
    if(Change==1)
    {
        if(cx[0]=='0')
            return Sml[ansc];
        else
            return Big[ansc];
    }
    else
    {
        if(cx[0]=='0')
            return Big[ansc];
        else
            return Sml[ansc];
    }

}
///����д������˳���
void W_Fake()
{
    int flag;
    int flag_0;
    int flag_1;
    for(int i=0;MiWx[i]!='\0';++i)
    {
        flag_0=1;
        flag=RandomInt[RandomCount++]%MiWxCount;
        if(Fake[flag]==0)
        {
            Fake_W[i]=flag;
            Fake[Fake_W[i]]=1;
        }
        else
        {
            flag_1=flag;
            flag++;
            while(flag<MiWxCount)
            {
                if(Fake[flag]==0)
                {
                    Fake_W[i]=flag;
                    Fake[Fake_W[i]]=1;
                    flag_0=0;
                    flag=MiWxCount;///û���������пյĵط���������
                }
                flag++;///�������Ǽ�
            }
            if(flag_0)
            {
                flag_1--;
                while(flag_1>-1)
                {
                    if(Fake[flag_1]==0)
                    {
                        Fake_W[i]=flag_1;
                        Fake[Fake_W[i]]=1;
                        flag_1=0;///û���������пյĵط���������
                    }
                    flag_1--;
                }
            }
        }
    }
}
///�γ������
void Compare_Charint(char c)
{
    if(c=='0') {CharInt0+=3;CharInt1+=0;}
    if(c=='1') {CharInt0+=2;CharInt1+=1;}
    if(c=='2') {CharInt0+=2;CharInt1+=1;}
    if(c=='3') {CharInt0+=1;CharInt1+=2;}
    if(c=='4') {CharInt0+=2;CharInt1+=1;}
    if(c=='5') {CharInt0+=1;CharInt1+=2;}
    if(c=='6') {CharInt0+=1;CharInt1+=2;}
    if(c=='7') {CharInt0+=0;CharInt1+=3;}
}
void Creat_charint(char c)
{
    if(c=='0') {Charint[CharInt++]='0';Charint[CharInt++]='0';Charint[CharInt++]='0';}
    if(c=='1') {Charint[CharInt++]='0';Charint[CharInt++]='0';Charint[CharInt++]='1';}
    if(c=='2') {Charint[CharInt++]='0';Charint[CharInt++]='1';Charint[CharInt++]='0';}
    if(c=='3') {Charint[CharInt++]='0';Charint[CharInt++]='1';Charint[CharInt++]='1';}
    if(c=='4') {Charint[CharInt++]='1';Charint[CharInt++]='0';Charint[CharInt++]='0';}
    if(c=='5') {Charint[CharInt++]='1';Charint[CharInt++]='0';Charint[CharInt++]='1';}
    if(c=='6') {Charint[CharInt++]='1';Charint[CharInt++]='1';Charint[CharInt++]='0';}
    if(c=='7') {Charint[CharInt++]='1';Charint[CharInt++]='1';Charint[CharInt++]='1';}
    if(CharInt0>CharInt1)
    {
        if(c=='8') {Charint[CharInt++]='1';Charint[CharInt++]='0';Charint[CharInt++]='1';}
        if(c=='9') {Charint[CharInt++]='0';Charint[CharInt++]='1';Charint[CharInt++]='0';}
    }
    if(CharInt1>CharInt0)
    {
        if(c=='9') {Charint[CharInt++]='1';Charint[CharInt++]='0';Charint[CharInt++]='1';}
        if(c=='8') {Charint[CharInt++]='0';Charint[CharInt++]='1';Charint[CharInt++]='0';}
    }

}
///�ַ�ת������
int IntChar(char c)
{
    if(c=='a'||c=='A') return 3;
    else if(c=='b'||c=='B') return 4;
    else if(c=='c'||c=='C') return 5;
    else if(c=='d'||c=='D') return 6;
    else if(c=='e'||c=='E') return 7;
    else if(c=='f'||c=='F') return 8;
    else if(c=='g'||c=='G') return 9;
    else if(c=='h'||c=='H') return 10;
    else if(c=='i'||c=='I') return 11;
    else if(c=='j'||c=='J') return 12;
    else if(c=='k'||c=='K') return 13;
    else if(c=='l'||c=='L') return 14;
    else if(c=='m'||c=='M') return 15;
    else if(c=='n'||c=='N') return 16;
    else if(c=='o'||c=='O') return 17;
    else if(c=='p'||c=='P') return 18;
    else if(c=='q'||c=='Q') return 19;
    else if(c=='r'||c=='R') return 20;
    else if(c=='s'||c=='S') return 21;
    else if(c=='t'||c=='T') return 22;
    else if(c=='u'||c=='U') return 23;
    else if(c=='v'||c=='V') return 24;
    else if(c=='w'||c=='W') return 25;
    else if(c=='x'||c=='X') return 26;
    else if(c=='y'||c=='Y') return 27;
    else if(c=='z'||c=='Z') return 28;
    else if(c=='_'||c=='.') return 29;
    else if(c=='+'||c=='-') return 30;
    else if(c=='*'||c=='/') return 31;
    else if(c=='('||c==')') return 0;
    else if(c=='{'||c=='}') return 1;
    else return 2;

}
///�����ַ���������
void CountAZ(int x)
{
    MountAZ[x]++;
}
///���������,��֤���湻30�������
void CreateRandom()
{
   ;
}
void work1()
{
    int flag=0;
    int k0=0,k1=0,k2=0;
    char c[12];
    for(int i=0;i<10;++i)
    {
        c[i]='0'+(RandomInt[RandomCount++]%2);
    }
    c[10]='\0';
    int ra,rb;
    ra=(c[0]-'0')*16+(c[1]-'0')*8+(c[2]-'0')*4+(c[3]-'0')*2+(c[4]-'0');
    rb=(c[5]-'0')*16+(c[6]-'0')*8+(c[7]-'0')*4+(c[8]-'0')*2+(c[9]-'0');
    RanS[0]=(ra/10)+'0';
    RanS[1]=(ra%10)+'0';
    RanS[2]=(rb/10)+'0';
    RanS[3]=(rb%10)+'0';
    RanS[4]='\0';
    for(int i=0;Secret[i]!='\0';++i)
    {
        if(Secret[i]=='.') flag++;
        if(flag==0&&Secret[i]>='A'&&Secret[i]<='Z') Secret1[k0++]=Secret[i];
        if(flag==1&&Secret[i]>='a'&&Secret[i]<='z') Secret2[k1++]=Secret[i];
        if(flag==2&&Secret[i]>='0'&&Secret[i]<='9') Secret3[k2++]=Secret[i];
    }
    Secret1[k0]='\0';
    Secret2[k1]='\0';
    Secret3[k2]='\0';
    if(Secret1[0]=='\0')
    {
        Secret1[0]='S';
        Secret1[1]='\0';
    }
    if(Secret2[0]=='\0')
    {
        Secret2[0]='y';
        Secret2[1]='f';
        Secret2[2]='\0';
    }
    if(Secret3[3]=='\0')
    {
        if(Secret3[0]=='\0')
        {
            Secret3[0]='1';
            Secret3[1]='9';
            Secret3[2]='9';
            Secret3[3]='7';
            Secret3[4]='0';
            Secret3[5]='2';
            Secret3[6]='1';
            Secret3[7]='6';
            Secret3[8]='\0';
        }
        if(Secret3[1]=='\0')
        {
            for(int i=1;i<=3;++i)
            {
                Secret3[i]='0';
            }
            Secret3[4]='\0';
        }
        if(Secret3[2]=='\0')
        {
            for(int i=2;i<=3;++i)
            {
                Secret3[i]='0';
            }
            Secret3[4]='\0';
        }
        if(Secret3[3]=='\0')
        {
            for(int i=3;i<=3;++i)
            {
                Secret3[i]='0';
            }
            Secret3[4]='\0';
        }
    }
    CharInt=0;
    CharInt0=0;
    CharInt1=0;
    for(int i=0;Secret3[i]!='\0';++i)
    {
        Compare_Charint(Secret3[i]);
    }
    for(int i=0;Secret3[i]!='\0';++i)
    {
        Creat_charint(Secret3[i]);
    }
    Charint[CharInt]='\0';
    int ant=CharInt-10,k=0;
    while(k<=ant)
    {
        for(int i=0; i<10; ++i)
        {
            if(c[i]=='0'&&Charint[i+k]=='0') c[i]='0';
            else if(c[i]=='0'&&Charint[i+k]=='1') c[i]='1';
            else if(c[i]=='1'&&Charint[i+k]=='0') c[i]='1';
            else c[i]='0';
        }
        k++;
    }
    ///Move �� Move_0����Ϊ0
    Move=(c[0]-'0')*16+(c[1]-'0')*8+(c[2]-'0')*4+(c[3]-'0')*2+(c[4]-'0');
    if(Move==0)
    {
        Move=(6*365+1)%32;
    }
    Move_0=(c[5]-'0')*2+(c[6]-'0');
    if(Move_0==0)
    {
        Move_0=(6*371+1)%32;
    }
    Or=c[7]-'0';
    MoveDir=c[8]-'0';
    Change=c[9]-'0';
}
void work2()
{
    ///*******д�������MiWr;
    int x1=(RanS[0]-'0')*10+(RanS[1]-'0');
    int x2=(RanS[2]-'0')*10+(RanS[3]-'0');
    int xx1=RandomInt[RandomCount++]%2;
    if(xx1==1)
    {
        MiWr[0]=Big[x1];
    }
    if(xx1==0)
    {
        MiWr[0]=Sml[x1];
    }
    int xx2=RandomInt[RandomCount++]%2;
    if(xx2==1)
    {
        MiWr[1]=Big[x2];
    }
    if(xx2==0)
    {
        MiWr[1]=Sml[x2];
    }
    MiWr[2]='\0';
    ///����������ĳ����ַ�����
    MountAZ[x1]++;
    MountAZ[x2]++;
    ///************дͷ����
    int Wr=0;
    int MoveX;
    int MoveDir_0,Change_0;
    for(int i=0;Secret1[i]!='\0';++i)
    {
        int R=(RandomInt[RandomCount++]%2);
        int R1=(RandomInt[RandomCount++]%2);
        int R2=(RandomInt[RandomCount++]%2);
        MoveDir_0=(MoveDir+R1)%2;
        Change_0=(Change+R2)%2;
        if(R==1)
        {
            if(MoveDir_0==1)
            {
                if(Change_0==1)
                {
                    MoveX=((Secret1[i]-'A')+Move)%32;
                    MiWa[Wr++]=Big[MoveX];
                    CountAZ(MoveX);
                }
                if(Change_0==0)
                {
                    MoveX=((Secret1[i]-'A')+Move)%32;
                    MiWa[Wr++]=Sml[MoveX];
                    CountAZ(MoveX);
                }
            }
            if(MoveDir_0==0)
            {
                if(Change_0==1)
                {

                    MoveX=((Secret1[i]-'A')-Move+32)%32;
                    MiWa[Wr++]=Sml[MoveX];
                    CountAZ(MoveX);
                }
                if(Change_0==0)
                {
                    MoveX=((Secret1[i]-'A')-Move+32)%32;
                    MiWa[Wr++]=Big[MoveX];
                    CountAZ(MoveX);
                }
            }
        }
        if(R==0)
        {
            if(MoveDir_0==1)
            {
                if(Change_0==1)
                {

                    MoveX=((Secret1[i]-'A')-Move+32)%32;
                    MiWa[Wr++]=Big[MoveX];
                    CountAZ(MoveX);

                }
                if(Change_0==0)
                {

                    MoveX=((Secret1[i]-'A')-Move+32)%32;
                    MiWa[Wr++]=Sml[MoveX];
                    CountAZ(MoveX);

                }
            }
            if(MoveDir_0==0)
            {
                if(Change_0==1)
                {
                    MoveX=((Secret1[i]-'A')+Move)%32;
                    MiWa[Wr++]=Sml[MoveX];
                    CountAZ(MoveX);
                }
                if(Change_0==0)
                {
                    MoveX=((Secret1[i]-'A')+Move)%32;
                    MiWa[Wr++]=intToBigchar(MoveX);
                    CountAZ(MoveX);
                }
            }
        }
        CreateRandom();
    }
    MiWa[Wr]='\0';
///******************дβ����
    int Wr_1=0;
    for(int i=0;Secret2[i]!='\0';++i)
    {
        MiWz[Wr_1++]=CharToMove(Secret2[i]);
    }
    MiWz[Wr_1]='\0';
///***************����У����
    int Wr_2=0;
    for(int i=0;Secret1[i]!='\0';++i)
    {
        if(IntChar(MiWa[i])>IntChar(Secret1[i])) MiWaz[Wr_2++]='1';
        else  MiWaz[Wr_2++]='0';
        if((MiWa[i]>='A'&&MiWa[i]<='Z')||MiWa[i]=='.'||MiWa[i]=='+'||MiWa[i]=='*'||MiWa[i]=='('||MiWa[i]=='{'||MiWa[i]=='[') MiWaz[Wr_2++]='1';
        else MiWaz[Wr_2++]='0';
    }
    for(int i=0;Secret2[i]!='\0';++i)
    {
        if(IntChar(MiWz[i])>IntChar(Secret2[i])) MiWaz[Wr_2++]='1';
        else  MiWaz[Wr_2++]='0';
        if((MiWz[i]>='A'&&MiWz[i]<='Z')||MiWz[i]=='.'||MiWz[i]=='+'||MiWz[i]=='*'||MiWz[i]=='('||MiWz[i]=='{'||MiWz[i]=='[') MiWaz[Wr_2++]='1';
        else MiWaz[Wr_2++]='0';
    }
    while(1)
    {

        if(Wr_2%5==0) break;
        MiWaz[Wr_2++]='0';
    }
    MiWaz[Wr_2]='\0';
    int Wr_3=0;
    for(int i=0;MiWaz[i]!='\0';i=i+5)
    {
        int x_0;
        x_0=(MiWaz[i]-'0')*16+(MiWaz[i+1]-'0')*8+(MiWaz[i+2]-'0')*4+(MiWaz[i+3]-'0')*2+(MiWaz[i+4]-'0');
        if(RandomCount>N-10) RandomCount=0;
        if(RandomInt[RandomCount++]%2) MiWaZ[Wr_3++]=Big[x_0];
        else MiWaZ[Wr_3++]=Sml[x_0];
        CountAZ(x_0);
    }
    MiWaZ[Wr_3]='\0';
///***************д������
    int Wr_4=0;
    for(int i=0;MingW[i]!='\0';++i)
    {
        char c_0;
        c_0 = CharToMove(MingW[i]);
        int x_1;
        if((c_0>='A'&&c_0<='Z')||c_0=='.'||c_0=='+'||c_0=='*'||c_0=='('||c_0=='{'||c_0=='[')
        {
            if(MoveDir)
            {
                x_1=(IntChar(c_0)+Move)%32;
            }
            else {x_1=(IntChar(c_0)-Move+32)%32;}///ע�⸺��������Ҫ��32
            MiWx[Wr_4++]=Big[x_1];
        }
        else{
            if(MoveDir)
            {
                x_1=(IntChar(c_0)- Move +32)%32;
            }
            else {x_1=(IntChar(c_0)+ Move)%32;}
            MiWx[Wr_4++]=Sml[x_1];
        }
    }
    MiWx[Wr_4]='\0';
    for(int i=0;MiWx[i]!='\0';++i) cout<<MiWx[i];
///**************д������
    MiWy[0]='\0';
    if(Flag_flag)
    {
        int Wr_5=0;
        W_Fake();
        for(int i=0; MiWx[i]!='\0'; ++i)
        {
            if(RandomInt[RandomCount++]%2)
                MiWy[Fake_W[i]]=Big[MinChar()];
            else
                MiWy[Fake_W[i]]=Sml[MinChar()];
            Wr_5++;
        }
        MiWy[Wr_5]='\0';
    }
///****************�γ���������
    int Wr_6=0;
    for(int i=0;MiWa[i]!='\0';++i)
    {
        MiW[Wr_6++]=MiWa[i];
    }
    if(Or)
    {
        for(int i=0; MiWx[i]!='\0'; ++i)
        {
            MiW[Wr_6++]=MiWx[i];
            if(Flag_flag) MiW[Wr_6++]=MiWy[i];
        }
    }
    else
    {
        for(int i=0; MiWx[i]!='\0'; ++i)
        {
            if(Flag_flag) MiW[Wr_6++]=MiWy[i];
            MiW[Wr_6++]=MiWx[i];
        }
    }
    MiW[Wr_6++]=MiWr[0];
    for(int i=0;MiWaZ[i]!='\0';++i)
    {
        MiW[Wr_6++]=MiWaZ[i];
    }
    MiW[Wr_6++]=MiWr[1];
    for(int i=0;MiWz[i]!='\0';++i)
    {
        MiW[Wr_6++]=MiWz[i];
    }
    W_MiWZz();
    MiW[Wr_6++]=MiWZz[0];
    MiW[Wr_6++]=MiWZz[1];
    MiW[Wr_6]='\0';
}
///дβ����֮����ж�����
void W_MiWZz()
{
    int flag_22,flag_11;
    flag_11=RandomInt[RandomCount++]%32;
    flag_22=RandomInt[RandomCount++]%32;
    if(flag_22==flag_11)
        flag_22=(flag_22+1)%32;
    if(RandomInt[RandomCount++]%2)
        MiWZz[0]=Big[flag_11];
    else
        MiWZz[0]=Sml[flag_11];
    if(RandomInt[RandomCount++]%2)
        MiWZz[1]=Big[flag_22];
    else
        MiWZz[1]=Sml[flag_22];
    CountAZ(flag_11);
    CountAZ(flag_22);
}
int MinChar()
{
    int flag;
    int Mini=Min;
    for(int i=0;i<32;++i)
    {
        if(MountAZ[i]<Mini)
        {
            Mini=MountAZ[i];
            flag=i;
        }
    }
    CountAZ(flag);
    return flag;
}

int main()
{
    cout<<"��ѡ����Ҫ�ķ���1.���� 2.���� 3.�˳�"<<endl;
    cout<<"������һ�����֣�";
    int Choose;
    char c;
    cin>>Choose;
    cin.get(c);
    if(Choose==1)
    {
        system("cls");
        srand((unsigned)time(NULL));
        for(int i=0; i<1000; ++i)
        {
            RandomInt[i]=random(1000);
        }
        cout<<"�������������"<<endl;
        for(int i=0;; ++i)
        {
            char w1;
            cin.get(w1);
            if(w1=='\n')
            {
                Secret[i]='\0';
                break;
            }
            Secret[i]=w1;
        }
        work1();
        cout<<"������Ҫ���ܵ����ݣ�"<<endl;
        for(int i=0;; ++i)
        {
            char w2;
            cin.get(w2);
            if(w2=='\n')
            {
                MingW[i]='\0';
                MiWxCount=i;
                if(IntChar(MingW[MiWxCount-1])==IntChar(MingW[MiWxCount-2]))
                    Flag_flag=1;
                else
                    Flag_flag=0;
                break;
            }
            MingW[i]=w2;
        }
        work2();
        cout<<endl<<"��������ǣ�"<<MiWr<<endl<<"ͷ�����ǣ�"<<MiWa<<endl<<"β�����ǣ�"<<MiWz<<endl<<"У�������ǣ�"<<MiWaZ<<endl;
        cout<<"�������ǣ�"<<MiWx<<endl<<"�������ǣ�"<<MiWy<<endl<<endl;
        cout<<"���ռ��ܺ������Ϊ��"<<endl<<MiW<<endl;
    }
    else if(Choose==2)
    {
        ///cout<<"���ܹ�������������"<<endl;
        system("cls");
        cout<<"������������룺"<<endl;
        for(int i=0;; ++i)
        {
            char w1;
            cin.get(w1);
            if(w1=='\n')
            {
                break;
            }
        }
        cout<<"������Ҫ���ܵ����ݣ�"<<endl;
        for(int i=0;; ++i)
        {
            char w2;
            cin.get(w2);
            if(w2=='\n') break;
        }
        cout<<"ԭ���ǣ�"<<endl<<"I_LOVE_UPC.."<<endl;

    }
    else ;
    return 0;
}
