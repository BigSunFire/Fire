#include <iostream>

using namespace std;
char c[5][5];
int banqun=0;///�Ƿ�Ϊ��Ⱥ
int duyi=0;///�Ƿ�Ϊ�����
int yao;///ȷ����Ԫ
void Ifre()
{
    int flag=0;
    for(int i=0; i<4; i++)
    {
        if(c[i][0]==c[i][1])
            flag=1;
        if(c[i][0]==c[i][2])
            flag=1;
        if(c[i][0]==c[i][3])
            flag=1;
        if(c[i][0]==c[i][4])
            flag=1;
        if(c[i][1]==c[i][2])
            flag=1;
        if(c[i][1]==c[i][3])
            flag=1;
        if(c[i][1]==c[i][4])
            flag=1;
        if(c[i][2]==c[i][3])
            flag=1;
        if(c[i][2]==c[i][4])
            flag=1;
        if(c[i][3]==c[i][4])
            flag=1;
        if(flag)
            break;
    }
    for(int j=0; j<4; j++)
    {
        if(c[0][j]==c[1][j])
            flag=1;
        if(c[0][j]==c[2][j])
            flag=1;
        if(c[0][j]==c[3][j])
            flag=1;
        if(c[0][j]==c[4][j])
            flag=1;
        if(c[1][j]==c[2][j])
            flag=1;
        if(c[1][j]==c[3][j])
            flag=1;
        if(c[1][j]==c[4][j])
            flag=1;
        if(c[2][j]==c[3][j])
            flag=1;
        if(c[2][j]==c[4][j])
            flag=1;
        if(c[3][j]==c[4][j])
            flag=1;
        if(flag)
            break;
    }
    if(flag)
    {
        cout<<"ĳ��ĳ�д����ظ�Ԫ��"<<endl;
    }
    else
        cout<<"ÿ��ÿ�ж��������ظ�Ԫ��"<<endl;
}
void Ifconnect ()
{
    int ans=0,x,y;
    for(int i=0; i<4; i++)
        for(int j=0; j<4; j++)
            for(int k=0; k<4; k++)
            {
                if(c[i][j]=='a') x=0;
                if(c[i][j]=='b') x=1;
                if(c[i][j]=='c') x=2;
                if(c[i][j]=='d') x=3;
                if(c[i][j]=='e') x=4;
                if(c[j][k]=='a') y=0;
                if(c[j][k]=='b') y=1;
                if(c[j][k]=='c') y=2;
                if(c[j][k]=='d') y=3;
                if(c[j][k]=='e') y=4;
                if(c[x][k]!=c[i][y]) {ans=1;break;}
            }
    if(ans) cout<<"������ɽ���ɣ������ɰ�Ⱥ"<<endl;
    else {cout<<"����ɽ���ɣ����ɰ�Ⱥ"<<endl;banqun=1;}
}
void Isyao()
{
    int ans0=0;
    for(int i=0;i<4;i++)
    {
        if(c[i][0]=='a'&&c[i][1]=='b'&&c[i][2]=='c'&&c[i][3]=='d'&&c[i][4]=='e')
        {
            if(c[0][i]=='a'&&c[1][i]=='b'&&c[2][i]=='c'&&c[3][i]=='d'&&c[4][i]=='e')
            {
                ans0=1;
                yao=i;
                break;
            }
        }
    }
    if(ans0) {cout<<"������Ԫ���Ƕ����"<<endl;duyi=1;}
    else cout<<"��������Ԫ�����Ƕ����"<<endl;
}
///By:Hire or Fire
void Isqun()
{
    char cc;
    int sum=0;
    if(yao==0) cc='a';
    if(yao==1) cc='b';
    if(yao==2) cc='c';
    if(yao==3) cc='d';
    if(yao==4) cc='e';
    for(int i=0;i<4;i++)
        for(int j=0;j<4;j++)
    {
        if(c[i][j]==cc)
        {
            if(c[j][i]==cc)
            {
                sum++;
            }
        }
    }
    if(sum==5) cout<<"ÿ��Ԫ�ض�������Ԫ������Ⱥ"<<endl;
    else cout<<"������Ⱥ"<<endl;

}
int main()
{
    ///��ֵ
    for (int i=0; i<5; i++)
        for(int j=0; j<5; j++)
        {
            if(i==0)
                cout<<"a";
            if(i==1)
                cout<<"b";
            if(i==2)
                cout<<"c";
            if(i==3)
                cout<<"d";
            if(i==4)
                cout<<"e";
            cout<<"*";
            if(j==0)
                cout<<"a=";
            if(j==1)
                cout<<"b=";
            if(j==2)
                cout<<"c=";
            if(j==3)
                cout<<"d=";
            if(j==4)
                cout<<"e=";
            cout<<"( input a,b,c,d,e)";
            cin>>c[i][j];
        }
    ///�ж�ÿ��ÿ���Ƿ����ظ�Ԫ��
    Ifre();
    ///�ж��Ƿ�����ɽ����
    Ifconnect ();
    ///�жϰ�Ⱥ�Ƿ������Ԫ
    if(banqun)
    {
        Isyao();
    }
    ///�ж��Ƕ����ʱ���Ƿ񹹳�Ⱥ
    if(duyi)
    {
        Isqun();///�ж��Ƿ�ÿ��Ԫ�ض�������Ԫ
    }
    return 0;
}

