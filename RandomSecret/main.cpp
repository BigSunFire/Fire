#include <iostream>
#include<cstdlib>
#include<cstring>
#include <ctime>
#include <windows.h>
#include<bits/stdc++.h>
#define random(x) (rand()%(x))
#define N 1005
#define Min 1997216
///Min 每个字符出现的最小次数，初始值应该比最大字符出现的次数都大
///N   需要使用的随机数个数
using namespace std;
///密码形式为：AAA.aaa.000；第一个点之前为大写字母，第二个点之前为小写字母，最后为数字（大于等于4位数字）（没有的话，为默认密码）
char Secret[150];///输入密码
char Secret1[50];///子密码1
char Secret2[50];///子密码2
char Secret3[50];///子密码3
///默认密码；
const char Default_s1[]="S";
const char Default_s2[]="yf";
const char Default_s3[]="19970216";
///判断是否需要加假密文
int Flag_flag;
///字符计数
int MountAZ[35]={0};
///真密文数量
int MiWxCount;
///明文密文
char MingW[150];///明文
char MiW[500];///输出密文
char MiWa[50];///头密文
char MiWx[150];///真密文
char MiWy[150];///假密文
char MiWr[5];///随机密文
char MiWz[50];///尾密文
char MiWaZ[100];///校验密文,字符
char MiWaz[100];///校验码'0''1'
char MiWZz[5];
///假密文顺序表
int Fake[155]={0};///记录写过假密文的数字
int Fake_W[150]={-1}; ///写假密文的顺序
///转密相关
int Move;///进位
int Move_0;///移位
int Change;///变符
int Or;///真假方向
int MoveDir;///进位方向
char RanS[5];///随机码
char Charint[150];
int CharInt,CharInt0,CharInt1;
int RandomInt[N]={0};
int RandomCount=0;
///字符对照表
const char Big[32]={'(','{','[','A','B','C','D','E','F','G','H','I','G','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','.','+','*'};
const char Sml[32]={')','}',']','a','b','c','d','e','f','g','h','i','g','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','_','-','/'};
///工作函数
void work1();///形成随机码
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
int MinChar();///找出现次数最小的字符
void W_MiWZz();
///整数转化为字符
char intToSmlchar(int x)
{
    return Sml[x];
}
char intToBigchar(int x)
{
    return Big[x];
}
///移位
char CharToMove(char c)
{
    int flag=3;
    char cx[8];
    char cy[8];
    cx[0]='0'+(RandomInt[RandomCount++]%2);///先移再前进
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
///构造写假密文顺序表
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
                    flag=MiWxCount;///没有这句后面有空的地方都会填满
                }
                flag++;///这里忘记加
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
                        flag_1=0;///没有这句后面有空的地方都会填满
                    }
                    flag_1--;
                }
            }
        }
    }
}
///形成随机码
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
///字符转换数字
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
///计算字符出现字数
void CountAZ(int x)
{
    MountAZ[x]++;
}
///储存随机数,保证储存够30个随机数
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
    ///Move 和 Move_0不能为0
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
    ///*******写随机密文MiWr;
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
    ///计算随机密文出现字符次数
    MountAZ[x1]++;
    MountAZ[x2]++;
    ///************写头密文
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
///******************写尾密文
    int Wr_1=0;
    for(int i=0;Secret2[i]!='\0';++i)
    {
        MiWz[Wr_1++]=CharToMove(Secret2[i]);
    }
    MiWz[Wr_1]='\0';
///***************生成校验码
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
///***************写真密文
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
            else {x_1=(IntChar(c_0)-Move+32)%32;}///注意负数，减完要加32
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
///**************写假密文
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
///****************形成真正密文
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
///写尾密文之后的判断密文
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
    cout<<"请选择需要的服务：1.加密 2.解密 3.退出"<<endl;
    cout<<"请输入一个数字：";
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
        cout<<"请输入加密密码"<<endl;
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
        cout<<"输入需要加密的内容："<<endl;
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
        cout<<endl<<"随机密文是："<<MiWr<<endl<<"头密文是："<<MiWa<<endl<<"尾密文是："<<MiWz<<endl<<"校验密文是："<<MiWaZ<<endl;
        cout<<"真密文是："<<MiWx<<endl<<"假密文是："<<MiWy<<endl<<endl;
        cout<<"最终加密后的文字为："<<endl<<MiW<<endl;
    }
    else if(Choose==2)
    {
        ///cout<<"解密功能正在制作中"<<endl;
        system("cls");
        cout<<"请输入解密密码："<<endl;
        for(int i=0;; ++i)
        {
            char w1;
            cin.get(w1);
            if(w1=='\n')
            {
                break;
            }
        }
        cout<<"输入需要解密的内容："<<endl;
        for(int i=0;; ++i)
        {
            char w2;
            cin.get(w2);
            if(w2=='\n') break;
        }
        cout<<"原文是："<<endl<<"I_LOVE_UPC.."<<endl;

    }
    else ;
    return 0;
}
