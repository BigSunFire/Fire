#include <iostream>

using namespace std;
char c[5][5];
int banqun=0;///是否为半群
int duyi=0;///是否为独异点
int yao;///确定幺元
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
        cout<<"某行某列存在重复元素"<<endl;
    }
    else
        cout<<"每行每列都不存在重复元素"<<endl;
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
    if(ans) cout<<"不满足可结合律，不构成半群"<<endl;
    else {cout<<"满足可结合律，构成半群"<<endl;banqun=1;}
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
    if(ans0) {cout<<"存在幺元，是独异点"<<endl;duyi=1;}
    else cout<<"不存在幺元，不是独异点"<<endl;
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
    if(sum==5) cout<<"每个元素都存在逆元，构成群"<<endl;
    else cout<<"不构成群"<<endl;

}
int main()
{
    ///赋值
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
    ///判断每行每列是否有重复元素
    Ifre();
    ///判断是否满足可结合律
    Ifconnect ();
    ///判断半群是否存在幺元
    if(banqun)
    {
        Isyao();
    }
    ///判断是独异点时，是否构成群
    if(duyi)
    {
        Isqun();///判断是否每个元素都存在逆元
    }
    return 0;
}

