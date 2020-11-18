#include <iostream>
using namespace std;
int map1[7][7]= {01,01,01,01,01,01,01,
                 01,11,12,13,14,15,01,
                 01,16,17,18,19,20,01,
                 01,21,22,23,24,25,01,
                 01,00,00,00,00,00,01,
                 01,00,31,32,33,00,01,
                 01,01,01,01,01,01,01
                };
int x,y,mlx,mly,myx,myy;
char c;
    /*for(int i=0; i<5; i++)
        for(int j=0; j<5; j++)
        {
if(map1[i][j]==2)
{
    markx=i;
    marky=j;
    break;
}
}*/
int q;
char cc;
//刷新地图
void AC()
{

    int i=0,j=0;
    for(i=0; i<7; i++)
        for(j=0; j<7; j++)
        {
            if(map1[i][j]==0)
                cout<<"    |";
            if(map1[i][j]==1)
                cout<<"墙00|";
            if(map1[i][j]>10&&map1[i][j]<26)
                cout<<"羊"<<map1[i][j]<<"|";
            if(map1[i][j]>30)
                cout<<"狼"<<map1[i][j]-20<<"|";
            if(j==6)
                cout<<endl<<"___________________________________"<<endl;
        }

}
void yangzou()
{
    cout<<"请输入正确的羊移动指令（尤其是羊的标号），避免程序发生未知错误："<<endl<<endl;
    for(;;)
    {

        cin>>q>>c;
        if(q<11||q>25||(c!='i'&&c!='j'&&c!='k'&&c!='l'))
            cout<<"请输入正确的指令"<<endl;
        else
        {
            for(int i=0; i<7; i++)
                for(int j=0; j<7; j++)
                {
                    if(map1[i][j]==q)//找到当前羊的位置
                    {
                        myx=i;
                        myy=j;
                        break;
                    }
                }

            x=myx;
            y=myy;
            if(c=='i')
            {

                if(map1[x-1][y]==0)
                {
                    map1[x-1][y]=q;
                    map1[myx][myy]=0;
                    myx=x-1;
                    myy=y;
                    break;
                }
                else
                    cout<<"无法移动，请再次输入指令"<<endl;

            }
            if(c=='k')
            {

                if(map1[x+1][y]==0)
                {
                    map1[x+1][y]=q;
                    map1[myx][myy]=0;
                    myx=x+1;
                    myy=y;
                    break;
                }
                else
                    cout<<"无法移动，请再次输入指令"<<endl;


            }
            if(c=='j')
            {

                if(map1[x][y-1]==0)
                {
                    map1[x][y-1]=q;
                    map1[myx][myy]=0;
                    myx=x;
                    myy=y-1;
                    break;
                }
                else
                    cout<<"无法移动，请再次输入指令"<<endl;

            }
            if(c=='l')
            {

                if(map1[x][y+1]==0)
                {
                    map1[x][y+1]=q;
                    map1[myx][myy]=0;
                    myx=x;
                    myy=y+1;
                    break;
                }
                else
                    cout<<"无法移动，请再次输入指令"<<endl;

            }
        }
    }


}
void langzou()
{
    cout<<"请输入正确的狼移动指令，避免程序发生未知错误："<<endl<<endl;
    for(; ;)
    {
        cout<<"温馨提示：需要吃羊操作时，输入数字+z+对应移动方向；不需要吃羊时，将z改为x"<<endl;
        cin>>q>>cc>>c;
        if(cc=='x')
        {
            if(q<11||q>13||(c!='w'&&c!='a'&&c!='s'&&c!='d'))
                cout<<"请输入正确的指令"<<endl;
            else
            {
                for(int i=0; i<7; i++)
                    for(int j=0; j<7; j++)
                    {
                        if(map1[i][j]==q+20)//找到当前狼的位置
                        {
                            mlx=i;
                            mly=j;
                            break;
                        }
                    }

                x=mlx;
                y=mly;
                if(c=='w')
                {

                    if(map1[x-1][y]==0)
                    {
                        map1[x-1][y]=q+20;
                        map1[mlx][mly]=0;
                        mlx=x-1;
                        mly=y;
                        break;
                    }
                    else
                        cout<<"无法移动，请再次输入指令"<<endl;

                }
                if(c=='s')
                {

                    if(map1[x+1][y]==0)
                    {
                        map1[x+1][y]=q+20;
                        map1[mlx][mly]=0;
                        mlx=x+1;
                        mly=y;
                        break;
                    }
                    else
                        cout<<"无法移动，请再次输入指令"<<endl;


                }
                if(c=='a')
                {

                    if(map1[x][y-1]==0)
                    {
                        map1[x][y-1]=q+20;
                        map1[mlx][mly]=0;
                        mlx=x;
                        mly=y-1;
                        break;
                    }
                    else
                        cout<<"无法移动，请再次输入指令"<<endl;

                }
                if(c=='d')
                {

                    if(map1[x][y+1]==0)
                    {
                        map1[x][y+1]=q+20;
                        map1[mlx][mly]=0;
                        mlx=x;
                        mly=y+1;
                        break;
                    }
                    else
                        cout<<"无法移动，请再次输入指令"<<endl;
                }
            }
        }
        else if(cc=='z')
        {
            if(q<11||q>13||(c!='w'&&c!='a'&&c!='s'&&c!='d'))
                cout<<"请输入正确的指令"<<endl;
            else
            {
                for(int i=0; i<7; i++)
                    for(int j=0; j<7; j++)
                    {
                        if(map1[i][j]==q+20)//找到当前狼的位置
                        {
                            mlx=i;
                            mly=j;
                            break;
                        }
                    }
                x=mlx;
                y=mly;
                if(c=='w')
                {
                    if(map1[x-1][y]==0&&map1[x-2][y]>10&&map1[x-2][y]<26)
                    {
                        map1[x-2][y]=q+20;
                        map1[mlx][mly]=0;
                        break;
                    }
                    else
                        cout<<"无法移动，请再次输入指令"<<endl;
                }
                if(c=='s')
                {
                    if(map1[x+1][y]==0&&map1[x+2][y]>10&&map1[x+2][y]<26)
                    {
                        map1[x+2][y]=q+20;
                        map1[mlx][mly]=0;
                        break;
                    }
                    else
                        cout<<"无法移动，请再次输入指令"<<endl;
                }
                if(c=='a')
                {
                    if(map1[x][y-1]==0&&map1[x][y-2]>10&&map1[x][y-2]<26)
                    {
                        map1[x][y-2]=q+20;
                        map1[mlx][mly]=0;
                        break;
                    }
                    else
                        cout<<"无法移动，请再次输入指令"<<endl;
                }
                if(c=='d')
                {
                    if(map1[x][y+1]==0&&map1[x][y+2]>10&&map1[x][y+2]<26)
                    {
                        map1[x][y+2]=q+20;
                        map1[mlx][mly]=0;
                        break;
                    }
                    else
                        cout<<"无法移动，请再次输入指令"<<endl;
                }

            }
        }
        else cout<<"请输入正确的指令"<<endl;

    }

}
int main()
{
    cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"小时候和小同伴们玩过，西安叫，狼吃娃游戏棋，游戏的规则：不论是狼，还是羊，只能向前"<<endl;
    cout<<"（可以上下左右）走一步，若羊向前走一步，和狼对面，后面的羊没跟上紧挨着，羊后有空档，"<<endl;
    cout<<"狼就可以跳到空档吃面前的羊了。因此，羊必须格外小心，每向前走一步，后面的羊一定要紧"<<endl;
    cout<<"随其后，每走一步，还要兼顾周围狼的位置，动向。一直到围住狼，不让狼动一下为羊胜利。"<<endl;
    cout<<"若羊向前走，不小心被狼吃掉，后面的羊群就有可能被狼全吃掉，这时，狼全胜。没有平局之"<<endl;
    cout<<"分，只有胜负。要么，羊围住狼，要么，狼吃掉所有的羊。"<<endl;
    cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"操作说明：狼方使用 w a s d 进行上下左右移动，在移动前，要先输入狼的标号；能进行吃羊"<<endl;
    cout<<"操作时需加按z 比如3号狼要吃掉上方的羊，需按3zw     羊方使用 i j k l 进行移动"<<endl;
    cout<<"羊方先走,请输入羊的编号以及行走方向 i j k l "<<endl;
    AC();
    for(;;)
    {
        yangzou();
        AC();
        langzou();
        AC();
        cout<<"------------------------------------------------------------------------------------------------------------------"<<endl;
        cout<<"由于我比较懒，没有做判定胜负的程序，所以胜负你们自己判断。。。。。over  中石大 计科1804  22号  Fire"<<endl;
        cout<<"------------------------------------------------------------------------------------------------------------------"<<endl;

    }
    return 0;
}
