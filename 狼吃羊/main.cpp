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
//ˢ�µ�ͼ
void AC()
{

    int i=0,j=0;
    for(i=0; i<7; i++)
        for(j=0; j<7; j++)
        {
            if(map1[i][j]==0)
                cout<<"    |";
            if(map1[i][j]==1)
                cout<<"ǽ00|";
            if(map1[i][j]>10&&map1[i][j]<26)
                cout<<"��"<<map1[i][j]<<"|";
            if(map1[i][j]>30)
                cout<<"��"<<map1[i][j]-20<<"|";
            if(j==6)
                cout<<endl<<"___________________________________"<<endl;
        }

}
void yangzou()
{
    cout<<"��������ȷ�����ƶ�ָ���������ı�ţ������������δ֪����"<<endl<<endl;
    for(;;)
    {

        cin>>q>>c;
        if(q<11||q>25||(c!='i'&&c!='j'&&c!='k'&&c!='l'))
            cout<<"��������ȷ��ָ��"<<endl;
        else
        {
            for(int i=0; i<7; i++)
                for(int j=0; j<7; j++)
                {
                    if(map1[i][j]==q)//�ҵ���ǰ���λ��
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
                    cout<<"�޷��ƶ������ٴ�����ָ��"<<endl;

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
                    cout<<"�޷��ƶ������ٴ�����ָ��"<<endl;


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
                    cout<<"�޷��ƶ������ٴ�����ָ��"<<endl;

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
                    cout<<"�޷��ƶ������ٴ�����ָ��"<<endl;

            }
        }
    }


}
void langzou()
{
    cout<<"��������ȷ�����ƶ�ָ����������δ֪����"<<endl<<endl;
    for(; ;)
    {
        cout<<"��ܰ��ʾ����Ҫ�������ʱ����������+z+��Ӧ�ƶ����򣻲���Ҫ����ʱ����z��Ϊx"<<endl;
        cin>>q>>cc>>c;
        if(cc=='x')
        {
            if(q<11||q>13||(c!='w'&&c!='a'&&c!='s'&&c!='d'))
                cout<<"��������ȷ��ָ��"<<endl;
            else
            {
                for(int i=0; i<7; i++)
                    for(int j=0; j<7; j++)
                    {
                        if(map1[i][j]==q+20)//�ҵ���ǰ�ǵ�λ��
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
                        cout<<"�޷��ƶ������ٴ�����ָ��"<<endl;

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
                        cout<<"�޷��ƶ������ٴ�����ָ��"<<endl;


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
                        cout<<"�޷��ƶ������ٴ�����ָ��"<<endl;

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
                        cout<<"�޷��ƶ������ٴ�����ָ��"<<endl;
                }
            }
        }
        else if(cc=='z')
        {
            if(q<11||q>13||(c!='w'&&c!='a'&&c!='s'&&c!='d'))
                cout<<"��������ȷ��ָ��"<<endl;
            else
            {
                for(int i=0; i<7; i++)
                    for(int j=0; j<7; j++)
                    {
                        if(map1[i][j]==q+20)//�ҵ���ǰ�ǵ�λ��
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
                        cout<<"�޷��ƶ������ٴ�����ָ��"<<endl;
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
                        cout<<"�޷��ƶ������ٴ�����ָ��"<<endl;
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
                        cout<<"�޷��ƶ������ٴ�����ָ��"<<endl;
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
                        cout<<"�޷��ƶ������ٴ�����ָ��"<<endl;
                }

            }
        }
        else cout<<"��������ȷ��ָ��"<<endl;

    }

}
int main()
{
    cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"Сʱ���Сͬ��������������У��ǳ�����Ϸ�壬��Ϸ�Ĺ��򣺲������ǣ�������ֻ����ǰ"<<endl;
    cout<<"�������������ң���һ����������ǰ��һ�������Ƕ��棬�������û���Ͻ����ţ�����пյ���"<<endl;
    cout<<"�ǾͿ��������յ�����ǰ�����ˡ���ˣ���������С�ģ�ÿ��ǰ��һ�����������һ��Ҫ��"<<endl;
    cout<<"�����ÿ��һ������Ҫ�����Χ�ǵ�λ�ã�����һֱ��Χס�ǣ������Ƕ�һ��Ϊ��ʤ����"<<endl;
    cout<<"������ǰ�ߣ���С�ı��ǳԵ����������Ⱥ���п��ܱ���ȫ�Ե�����ʱ����ȫʤ��û��ƽ��֮"<<endl;
    cout<<"�֣�ֻ��ʤ����Ҫô����Χס�ǣ�Ҫô���ǳԵ����е���"<<endl;
    cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"����˵�����Ƿ�ʹ�� w a s d �������������ƶ������ƶ�ǰ��Ҫ�������ǵı�ţ��ܽ��г���"<<endl;
    cout<<"����ʱ��Ӱ�z ����3����Ҫ�Ե��Ϸ������谴3zw     ��ʹ�� i j k l �����ƶ�"<<endl;
    cout<<"������,��������ı���Լ����߷��� i j k l "<<endl;
    AC();
    for(;;)
    {
        yangzou();
        AC();
        langzou();
        AC();
        cout<<"------------------------------------------------------------------------------------------------------------------"<<endl;
        cout<<"�����ұȽ�����û�����ж�ʤ���ĳ�������ʤ�������Լ��жϡ���������over  ��ʯ�� �ƿ�1804  22��  Fire"<<endl;
        cout<<"------------------------------------------------------------------------------------------------------------------"<<endl;

    }
    return 0;
}
