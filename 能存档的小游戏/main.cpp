#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
int Map[2][25]={
0,0,0,0,1,0,2,0,3,0,0,0,0,0,0,0,4,0,6,0,0,0,10,0,0,
0,0,0,0,0,0,7,0,7,0,0,0,0,0,0,0,7,0,7,0,1,0,6,0,0///存档点的poi必须是两位数；
};
int wu=10,zhi=10,mei=10,poi=0,id=0;
int flag=0;
int qianli=0,x,ID;
void AC()
{
    for(int i=0;i<=24;i++)
    {
        if(Map[id][i]==0) cout<<"口";
        if(Map[id][i]==1) cout<<"门";
        if(Map[id][i]==2) cout<<"武";
        if(Map[id][i]==3) cout<<"智";
        if(Map[id][i]==4) cout<<"魅";
        if(Map[id][i]==5) cout<<"我";
        if(Map[id][i]==6) cout<<"存";
        if(Map[id][i]==7) cout<<"怪";
        if(Map[id][i]==10&&!flag) cout<<"口";
        if(Map[id][i]==10&&flag) cout<<"终";
        if((i+1)%5==0) cout<<endl;
    }
}
void move0()
{
    Map[id][poi]=5;///规定开始位置
    while(1){
    if(wu>15||zhi>15||mei>15) flag=1;
    AC();
    int mov;
    cout<<"输入1，2，3，5控制方向";
    cin>>mov;
      if(mov!=2&&mov!=5&&mov!=1&&mov!=1&&mov!=3) cout<<"请输入：2，1，3，5";
    if(mov==3)
    {
        if(poi+1>24) ;
        else{
            if(Map[id][poi+1]==0) {Map[id][poi]=0;poi=poi+1;Map[id][poi]=5;}
            else if(Map[id][poi+1]==1) {Map[id][poi]=0;id=(id+1)%2;poi=0;Map[id][poi]=5;}
            else if(Map[id][poi+1]==2) {
                ///武道馆
                system("cls");
                cout<<"欢迎来到武道馆，你的潜力值已经全部转化为武力值"<<endl;
                wu+=qianli;qianli=0;
                cout<<"目前武力值为："<<wu<<endl;
                cout<<"请输入任意数字，确认！"<<endl;
                cin>>x;
            }
            else if(Map[id][poi+1]==3) {
                ///智力学校
                system("cls");
                cout<<"欢迎来到智力学校，你的潜力值已经全部转化为智力值"<<endl;
                zhi+=qianli;qianli=0;
                cout<<"目前智力值为："<<zhi<<endl;
                cout<<"请输入任意数字，确认！"<<endl;
                cin>>x;
            }
            else if(Map[id][poi+1]==4) {
                ///魅力街区
                system("cls");
                cout<<"Hi~小靓妹，欢迎来到休闲街区，你的潜力值已经全部转化为魅力值"<<endl;
                mei+=qianli;qianli=0;
                cout<<"目前魅力值为："<<mei<<endl;
                cout<<"请输入任意数字，确认！"<<endl;
                cin>>x;
            }
            else if(Map[id][poi+1]==6) {
                ///存档点
                if(wu>99) wu=99;
                if(zhi>99) zhi=99;
                if(mei>99) mei=99;
                cout<<"请牢记你的回忆码："<<poi<<id<<wu<<zhi<<mei<<endl;
                cout<<"请输入任意数字，确认！"<<endl;
                cin>>x;
            }
            else if(Map[id][poi+1]==7) {
                ///怪
                system("cls");
                if(wu<qianli) cout<<"你被怪击败了"<<endl;
                else {cout<<"你获得了1点潜力值"<<endl;qianli++;cout<<"目前潜力值为："<<qianli<<endl;}
                cout<<"请输入任意数字，确认！"<<endl;
                cin>>x;
            }
            else if(Map[id][poi+1]==10&&flag) {
                ///终点
                system("cls");
                cout<<"究极BOSS                           你"<<endl;
                cout<<"1000                               100"<<endl;
                cout<<"请使用你的绝技对付它"<<endl;
                cout<<"1.武力绝技        2.智力绝技       3.魅力绝技"<<endl;
                cin>>x;
                while(x!=1&&x!=2&&x!=3)
                {
                    cin>>x;
                }
                if(x==1)
                {
                    cout<<"你使用了武力绝技，究极BOSS受到了伤害，同时BOSS也对你进行了猛烈的进攻"<<endl;
                    cout<<"我太懒了，不想写了，你赢了，BOSS被你打败了。"<<endl;
                }
                if(x==2||x==3)
                {
                    cout<<"你赢了，BOSS不堪一击。"<<endl;
                }

                break;
            }
            else ;
        }
    }
    if(mov==1)
    {
        if(poi-1<0) ;
        else{
            if(Map[id][poi-1]==0) {Map[id][poi]=0;poi=poi-1;Map[id][poi]=5;}
            else if(Map[id][poi-1]==1) {Map[id][poi]=0;id=(id+1)%2;poi=0;Map[id][poi]=5;}
            else if(Map[id][poi-1]==2) {
                ///武道馆
                system("cls");
                cout<<"欢迎来到武道馆，你的潜力值已经全部转化为武力值"<<endl;
                wu+=qianli;qianli=0;
                cout<<"目前武力值为："<<wu<<endl;
                cout<<"请输入任意数字，确认！"<<endl;
                cin>>x;
            }
            else if(Map[id][poi-1]==3) {
                ///智力学校
                system("cls");
                cout<<"欢迎来到智力学校，你的潜力值已经全部转化为智力值"<<endl;
                zhi+=qianli;qianli=0;
                cout<<"目前智力值为："<<zhi<<endl;
                cout<<"请输入任意数字，确认！"<<endl;
                cin>>x;
            }
            else if(Map[id][poi-1]==4) {
                ///魅力街区
                system("cls");
                cout<<"Hi~小靓妹，欢迎来到休闲街区，你的潜力值已经全部转化为魅力值"<<endl;
                mei+=qianli;qianli=0;
                cout<<"目前魅力值为："<<mei<<endl;
                cout<<"请输入任意数字，确认！"<<endl;
                cin>>x;
            }
            else if(Map[id][poi-1]==6) {
                ///存档点
                if(wu>99) wu=99;
                if(zhi>99) zhi=99;
                if(mei>99) mei=99;
                cout<<"请牢记你的回忆码："<<poi<<id<<wu<<zhi<<mei<<endl;
                cout<<"请输入任意数字，确认！"<<endl;
                cin>>x;
            }
            else if(Map[id][poi-1]==7) {
                ///怪
                system("cls");
                if(wu<qianli) cout<<"你被怪击败了"<<endl;
                else {cout<<"你获得了1点潜力值"<<endl;qianli++;cout<<"目前潜力值为："<<qianli<<endl;}
                cout<<"请输入任意数字，确认！"<<endl;
                cin>>x;
            }
            else if(Map[id][poi-1]==10&&flag) {
                ///终点
                system("cls");
                cout<<"究极BOSS                           你"<<endl;
                cout<<"1000                               100"<<endl;
                cout<<"请使用你的绝技对付它"<<endl;
                cout<<"1.武力绝技        2.智力绝技       3.魅力绝技"<<endl;
                cin>>x;
                while(x!=1&&x!=2&&x!=3)
                {
                    cin>>x;
                }
                if(x==1)
                {
                    cout<<"你使用了武力绝技，究极BOSS受到了伤害，同时BOSS也对你进行了猛烈的进攻"<<endl;
                    cout<<"我太懒了，不想写了，你赢了，BOSS被你打败了。"<<endl;
                }
                if(x==2||x==3)
                {
                    cout<<"你赢了，BOSS不堪一击。"<<endl;
                }

                break;
            }
            else ;
        }
    }
    if(mov==5)
    {
        if(poi-5<0) ;
        else{
            if(Map[id][poi-5]==0) {Map[id][poi]=0;poi=poi-5;Map[id][poi]=5;}
            else if(Map[id][poi-5]==1) {Map[id][poi]=0;id=(id+1)%2;poi=0;Map[id][poi]=5;}
            else if(Map[id][poi-5]==2) {
                ///武道馆
                system("cls");
                cout<<"欢迎来到武道馆，你的潜力值已经全部转化为武力值"<<endl;
                wu+=qianli;qianli=0;
                cout<<"目前武力值为："<<wu<<endl;
                cout<<"请输入任意数字，确认！"<<endl;
                cin>>x;
            }
            else if(Map[id][poi-5]==3) {
                ///智力学校
                system("cls");
                cout<<"欢迎来到智力学校，你的潜力值已经全部转化为智力值"<<endl;
                zhi+=qianli;qianli=0;
                cout<<"目前智力值为："<<zhi<<endl;
                cout<<"请输入任意数字，确认！"<<endl;
                cin>>x;
            }
            else if(Map[id][poi-5]==4) {
                ///魅力街区
                system("cls");
                cout<<"Hi~小靓妹，欢迎来到休闲街区，你的潜力值已经全部转化为魅力值"<<endl;
                mei+=qianli;qianli=0;
                cout<<"目前魅力值为："<<mei<<endl;
                cout<<"请输入任意数字，确认！"<<endl;
                cin>>x;
            }
            else if(Map[id][poi-5]==6) {
                ///存档点
                if(wu>99) wu=99;
                if(zhi>99) zhi=99;
                if(mei>99) mei=99;
                cout<<"请牢记你的回忆码："<<poi<<id<<wu<<zhi<<mei<<endl;
                cout<<"请输入任意数字，确认！"<<endl;
                cin>>x;
            }
            else if(Map[id][poi-5]==7) {
                ///怪
                system("cls");
                if(wu<qianli) cout<<"你被怪击败了"<<endl;
                else {cout<<"你获得了1点潜力值"<<endl;qianli++;cout<<"目前潜力值为："<<qianli<<endl;}
                cout<<"请输入任意数字，确认！"<<endl;
                cin>>x;
            }
            else if(Map[id][poi-5]==10&&flag) {
                ///终点
                system("cls");
                cout<<"究极BOSS                           你"<<endl;
                cout<<"1000                               100"<<endl;
                cout<<"请使用你的绝技对付它"<<endl;
                cout<<"1.武力绝技        2.智力绝技       3.魅力绝技"<<endl;
                cin>>x;
                while(x!=1&&x!=2&&x!=3)
                {
                    cin>>x;
                }
                if(x==1)
                {
                    cout<<"你使用了武力绝技，究极BOSS受到了伤害，同时BOSS也对你进行了猛烈的进攻"<<endl;
                    cout<<"我太懒了，不想写了，你赢了，BOSS被你打败了。"<<endl;
                }
                if(x==2||x==3)
                {
                    cout<<"你赢了，BOSS不堪一击。"<<endl;
                }

                break;


            }
            else ;
        }
    }
    if(mov==2)
    {
        if(poi+5>24) ;
        ///By:Hire or Fire
        else{
            if(Map[id][poi+5]==0) {Map[id][poi]=0;poi=poi+5;Map[id][poi]=5;}
            else if(Map[id][poi+5]==1) {Map[id][poi]=0;id=(id+1)%2;poi=0;Map[id][poi]=5;}
            else if(Map[id][poi+5]==2) {
                ///武道馆
                system("cls");
                cout<<"欢迎来到武道馆，你的潜力值已经全部转化为武力值"<<endl;
                wu+=qianli;qianli=0;
                cout<<"目前武力值为："<<wu<<endl;
                cout<<"请输入任意数字，确认！"<<endl;
                cin>>x;
            }
            else if(Map[id][poi+5]==3) {
                ///智力学校
                system("cls");
                cout<<"欢迎来到智力学校，你的潜力值已经全部转化为智力值"<<endl;
                zhi+=qianli;qianli=0;
                cout<<"目前智力值为："<<zhi<<endl;
                cout<<"请输入任意数字，确认！"<<endl;
                cin>>x;
            }
            else if(Map[id][poi+5]==4) {
                ///魅力街区
                system("cls");
                cout<<"Hi~小靓妹，欢迎来到休闲街区，你的潜力值已经全部转化为魅力值"<<endl;
                mei+=qianli;qianli=0;
                cout<<"目前魅力值为："<<mei<<endl;
                cout<<"请输入任意数字，确认！"<<endl;
                cin>>x;
            }
            else if(Map[id][poi+5]==6) {
                ///存档点
                if(wu>99) wu=99;
                if(zhi>99) zhi=99;
                if(mei>99) mei=99;
                cout<<"请牢记你的回忆码："<<poi<<id<<wu<<zhi<<mei<<endl;
                cout<<"请输入任意数字，确认！"<<endl;
                cin>>x;
            }
            else if(Map[id][poi+5]==7) {
                ///怪
                system("cls");
                if(wu<qianli) cout<<"你被怪击败了"<<endl;
                else {cout<<"你获得了1点潜力值"<<endl;qianli++;cout<<"目前潜力值为："<<qianli<<endl;}
                cout<<"请输入任意数字，确认！"<<endl;
                cin>>x;
            }
            else if(Map[id][poi+5]==10&&flag) {
                ///终点
                system("cls");
                cout<<"究极BOSS                           你"<<endl;
                cout<<"1000                               100"<<endl;
                cout<<"请使用你的绝技对付它"<<endl;
                cout<<"1.武力绝技        2.智力绝技       3.魅力绝技"<<endl;
                cin>>x;
                while(x!=1&&x!=2&&x!=3)
                {
                    cin>>x;
                }
                if(x==1)
                {
                    cout<<"你使用了武力绝技，究极BOSS受到了伤害，同时BOSS也对你进行了猛烈的进攻"<<endl;
                    cout<<"我太懒了，不想写了，你赢了，BOSS被你打败了。"<<endl;
                }
                if(x==2)
                {
                    cout<<"你赢了，BOSS不堪一击。"<<endl;
                }
                if(x==3)
                {
                    cout<<"                                                                                                  "<<endl<<"                                                                                                             "<<"相玖红是这个世界上最美丽的女神，不接受反驳！！！"<<"相玖红是这个世界上最美丽的女神，不接受反驳！！！"<<"相玖红是这个世界上最美丽的女神，不接受反驳！！！"<<endl<<"相玖红是这个世界上最美丽的女神，不接受反驳！！！"<<"相玖红是这个世界上最美丽的女神，不接受反驳！！！"<<"相玖红是这个世界上最美丽的女神，不接受反驳！！！"<<endl<<"相玖红是这个世界上最美丽的女神，不接受反驳！！！"<<"相玖红是这个世界上最美丽的女神，不接受反驳！！！"<<"相玖红是这个世界上最美丽的女神，不接受反驳！！！"<<endl;
                }

                break;
            }
            else ;
        }
    }
    system("cls");}

}
int main()
{
    int start,start0;
    cout<<"欢迎来到未来世界，请输入数字 1 OR 2选择模式。"<<endl;
    cout<<"1.新的故事"<<"2.旧的回忆"<<endl;
    cin>>start;
    while(start!=1&&start!=2)
    {
        cin>>start;
    }
    if(start==2)
    {
        cout<<"请输入回忆码："<<endl;
        cin>>start0;
        mei=start0%100;
        start0=start0/100;
        zhi=start0%100;
        start0=start0/100;
        wu=start0%100;
        start0=start0/100;
        poi=start0%100;
        start0=start0/100;
        id=start0;
        while(id>1||id<0||poi>24||poi<0)
        {
            cout<<"请输入正确的回忆码："<<endl;
        cin>>start0;
        mei=start0%100;
        start0=start0/100;
        zhi=start0%100;
        start0=start0/100;
        wu=start0%100;
        start0=start0/100;
        poi=start0%100;
        start0=start0/100;
        id=start0;
        }

    }
    system("cls");
    move0();
    return 0;
}
