#include <iostream>
using namespace std;
int map0[10][10]= {0,0,0,0,0,0,0,0,0,0,
                   0,2,6,2,10,10,10,8,7,0,
                   0,3,3,3,10,2,10,10,8,0,
                   0,10,1,3,10,10,10,2,10,0,
                   0,10,2,10,10,4,2,2,3,0,
                   0,10,2,10,2,2,10,2,10,0,
                   0,10,2,10,10,10,10,2,10,0,
                   0,5,2,2,2,2,10,2,10,0,
                   0,4,10,10,11,2,10,10,9,0,
                   0,0,0,0,0,0,0,0,0,0
                  };
int map1[10][10]= {0,0,0,0,0,0,0,0,0,0,
                   0,6,10,10,10,10,10,10,11,0,
                   0,2,10,10,2,2,2,10,10,0,
                   0,10,10,2,2,10,2,3,10,0,
                   0,10,8,3,10,10,2,3,10,0,
                   0,10,10,1,2,9,2,3,10,0,
                   0,10,2,10,2,2,2,3,10,0,
                   0,10,10,10,2,10,10,10,10,0,
                   0,3,10,10,4,10,5,3,10,0,
                   0,0,0,0,7,0,0,0,0,0
                  };
int wupin[3]= {0}; //物品栏
int markx,marky;
int flag=0;
int main()
{
    cout<<"欢迎来到暗迷宫的游戏世界"<<endl;
    for(long long int i=0; i<1000000000; i++) ;
    cout<<"你和你的爱人来到一处迷宫，在这里你无法看清周围的事物，只能凭借给出的提示，靠自己的聪明才智走出迷宫。"<<endl;
    for(long long int i=0; i<1000000000; i++) ;
    cout<<"准备好了吗？"<<endl;
    for(long long int i=0; i<1000000000; i++) ;
    cout<<"now  b   be  begin!!!"<<endl;
    for(long long int i=0; i<1000000000; i++) ;
    int food=1000;
    int x,y;
    char c;
    for(int i=0; i<10; i++)
        for(int j=0; j<10; j++)
        {
            if(map0[i][j]==1)
            {
                markx=i;
                marky=j;
                break;
            }
        }
    x=markx;
    y=marky;
    for(; ;)
    {
        cout<<"请输入w a s d"<<endl;
        cin>>c;
        if(c=='w')
        {
            x=x-1;
            if(map0[x][y]==0)
            {
                cout<<"前面是坚硬的岩石，无法通过"<<endl;
            }
            else if(map0[x][y]==2)
            {
                cout<<"前面是松软的岩石，你需要一把铁锹才能通过"<<endl;
            }
            else if(map0[x][y]==3)
            {
                if(wupin[2]==0) cout<<"前面是河流，你需要木筏才能通过"<<endl;
                else
                {
                    markx=x;
                    marky=y;
                    food=food-1;
                }
            }
            else if(map0[x][y]==4)
            {
                if(wupin[0]==0) cout<<"前面有怪兽，你需要一把小刀才能打败怪兽通过"<<endl;
                else
                {
                    markx=x;
                    marky=y;
                    food=food-1;
                    wupin[0]-=1;
                    cout<<"你失去了一把小刀"<<endl;
                }
            }
            else if(map0[x][y]==5)
            {
                markx=x;
                marky=y;
                food=food-1;
                wupin[2]+=1;
                cout<<"你得到了木筏"<<endl;
            }
            else if(map0[x][y]==6)
            {
                markx=x;
                marky=y;
                food=food-1;
                wupin[1]+=1;
                cout<<"你得到了钥匙"<<endl;
            }
            else if(map0[x][y]==7)
            {
                markx=x;
                marky=y;
                cout<<"you are good luck"<<endl;
            }
            else if(map0[x][y]==8)
            {
                if(wupin[1]==0) cout<<"前面门上锁了，你需要钥匙才可以通过"<<endl;
                else
                {
                    markx=x;
                    marky=y;
                    food=food-1;
                    wupin[1]-=1;
                    cout<<"你使用了一把钥匙"<<endl;
                }
            }
            else if(map0[x][y]==9)
            {
                markx=x;
                marky=y;
                food=food-1;
                wupin[0]+=1;
                cout<<"你得到了一把小刀"<<endl;
            }
            else if(map0[x][y]==11)
            {
                cout<<"创作组成员：高金玉，金龙鱼，张信哲，雨神，六元钱"<<endl;
            }
            else
            {
                markx=x;
                marky=y;
                food=food-1;
                cout<<"你向上走了一步，同时消耗了一点食物，你目前还剩余"<<food<<"食物"<<endl;
            }
            x=markx;
            y=marky;
        }
        else if(c=='a')
        {
            y=y-1;
            if(map0[x][y]==0)
            {
                cout<<"前面是坚硬的岩石，无法通过"<<endl;
            }
            else if(map0[x][y]==2)
            {
                cout<<"前面是松软的岩石，你需要一把铁锹才能通过"<<endl;
            }
            else if(map0[x][y]==3)
            {
                if(wupin[2]==0) cout<<"前面是河流，你需要木筏才能通过"<<endl;
                else
                {
                    markx=x;
                    marky=y;
                    food=food-1;
                }
            }
            else if(map0[x][y]==4)
            {
                if(wupin[0]==0) cout<<"前面有怪兽，你需要一把小刀才能打败怪兽通过"<<endl;
                else
                {
                    markx=x;
                    marky=y;
                    food=food-1;
                    wupin[0]-=1;
                    cout<<"你失去了一把小刀"<<endl;
                }
            }
            else if(map0[x][y]==5)
            {
                markx=x;
                marky=y;
                food=food-1;
                wupin[2]+=1;
                cout<<"你得到了木筏"<<endl;
            }
            else if(map0[x][y]==6)
            {
                markx=x;
                marky=y;
                food=food-1;
                wupin[1]+=1;
                cout<<"你得到了钥匙"<<endl;
            }
            else if(map0[x][y]==7)
            {
                markx=x;
                marky=y;
                cout<<"you are good luck"<<endl;
            }
            else if(map0[x][y]==8)
            {
                if(wupin[1]==0) cout<<"前面门上锁了，你需要钥匙才可以通过"<<endl;
                else
                {
                    markx=x;
                    marky=y;
                    food=food-1;
                    wupin[1]-=1;
                    cout<<"你使用了一把钥匙"<<endl;
                }
            }
            else if(map0[x][y]==9)
            {
                markx=x;
                marky=y;
                food=food-1;
                wupin[0]+=1;
                cout<<"你得到了一把小刀"<<endl;
            }
            else if(map0[x][y]==11)
            {
                cout<<"创作组成员：高金玉，金龙鱼，张信哲，雨神，六元钱"<<endl;
            }
            else
            {
                markx=x;
                marky=y;
                food=food-1;
                cout<<"你向左走了一步，同时消耗了一点食物，你目前还剩余"<<food<<"食物"<<endl;
            }
            x=markx;
            y=marky;
        }
        else if(c=='s')
        {
            x=x+1;
            if(map0[x][y]==0)
            {
                cout<<"前面是坚硬的岩石，无法通过"<<endl;
            }
            else if(map0[x][y]==2)
            {
                cout<<"前面是松软的岩石，你需要一把铁锹才能通过"<<endl;
            }
            else if(map0[x][y]==3)
            {
                if(wupin[2]==0) cout<<"前面是河流，你需要木筏才能通过"<<endl;
                else
                {
                    markx=x;
                    marky=y;
                    food=food-1;
                }
            }
            else if(map0[x][y]==4)
            {
                if(wupin[0]==0) cout<<"前面有怪兽，你需要一把小刀才能打败怪兽通过"<<endl;
                else
                {
                    markx=x;
                    marky=y;
                    food=food-1;
                    wupin[0]-=1;
                    cout<<"你失去了一把小刀"<<endl;
                }
            }
            else if(map0[x][y]==5)
            {
                markx=x;
                marky=y;
                food=food-1;
                wupin[2]+=1;
                cout<<"你得到了木筏"<<endl;
            }
            else if(map0[x][y]==6)
            {
                markx=x;
                marky=y;
                food=food-1;
                wupin[1]+=1;
                cout<<"你得到了钥匙"<<endl;
            }
            else if(map0[x][y]==7)
            {
                markx=x;
                marky=y;
                cout<<"you are good luck"<<endl;
            }
            else if(map0[x][y]==8)
            {
                if(wupin[1]==0) cout<<"前面门上锁了，你需要钥匙才可以通过"<<endl;
                else
                {
                    markx=x;
                    marky=y;
                    food=food-1;
                    wupin[1]-=1;
                    cout<<"你使用了一把钥匙"<<endl;
                }
            }
            else if(map0[x][y]==9)
            {
                markx=x;
                marky=y;
                food=food-1;
                wupin[0]+=1;
                cout<<"你得到了一把小刀"<<endl;
            }
            else if(map0[x][y]==11)
            {
                cout<<"创作组成员：高金玉，金龙鱼，张信哲，雨神，六元钱"<<endl;
            }
            else
            {
                markx=x;
                marky=y;
                food=food-1;
                cout<<"你向下走了一步，同时消耗了一点食物，你目前还剩余"<<food<<"食物"<<endl;
            }
            x=markx;
            y=marky;
        }
        else if(c=='d')
        {
            y+=1;
            if(map0[x][y]==0)
            {
                cout<<"前面是坚硬的岩石，无法通过"<<endl;
            }
            else if(map0[x][y]==2)
            {
                cout<<"前面是松软的岩石，你需要一把铁锹才能通过"<<endl;
            }
            else if(map0[x][y]==3)
            {
                if(wupin[2]==0) cout<<"前面是河流，你需要木筏才能通过"<<endl;
                else
                {
                    markx=x;
                    marky=y;
                    food=food-1;
                }
            }
            else if(map0[x][y]==4)
            {
                if(wupin[0]==0) cout<<"前面有怪兽，你需要一把小刀才能打败怪兽通过"<<endl;
                else
                {
                    markx=x;
                    marky=y;
                    food=food-1;
                    wupin[0]-=1;
                    cout<<"你失去了一把小刀"<<endl;
                }
            }
            else if(map0[x][y]==5)
            {
                markx=x;
                marky=y;
                food=food-1;
                wupin[2]+=1;
                cout<<"你得到了木筏"<<endl;
            }
            else if(map0[x][y]==6)
            {
                markx=x;
                marky=y;
                food=food-1;
                wupin[1]+=1;
                cout<<"你得到了钥匙"<<endl;
            }
            else if(map0[x][y]==7)
            {
                markx=x;
                marky=y;
                cout<<"you are good luck"<<endl;
            }
            else if(map0[x][y]==8)
            {
                if(wupin[1]==0) cout<<"前面门上锁了，你需要钥匙才可以通过"<<endl;
                else
                {
                    markx=x;
                    marky=y;
                    food=food-1;
                    wupin[1]-=1;
                    cout<<"你使用了一把钥匙"<<endl;
                }
            }
            else if(map0[x][y]==9)
            {
                markx=x;
                marky=y;
                food=food-1;
                wupin[0]+=1;
                cout<<"你得到了一把小刀"<<endl;
            }
            else if(map0[x][y]==11)
            {
                cout<<"创作组成员：高金玉，金龙鱼，张信哲，雨神，六元钱"<<endl;
            }
            else
            {
                markx=x;
                marky=y;
                food=food-1;
                cout<<"你向右走了一步，同时消耗了一点食物，你目前还剩余"<<food<<"食物"<<endl;
            }
            x=markx;
            y=marky;
        }
        else
        {
            cout<<"请输入正确的字符(小写w a s d)"<<endl;
        }
        if(!food) cout<<"你失败了，没能走出暗迷宫"<<endl;
        if(map0[x][y]==7) break;
    }
    cout<<"恭喜你，成功走出了暗迷宫"<<endl<<"但是你发现出来以后你的爱人不见了，你是否想重新进入暗迷宫，找回自己的爱人呢？"<<endl<<"想的话请输入 521 ，如果你想自己一个人离开，抛弃自己的爱人，那么请随便输入一个数字。"<<endl;
    cout<<"请输入一个数字："<<endl;
    int niuniu;
    cin>>niuniu;
    food=1000;
    wupin[0]=0;
    wupin[1]=0;
    wupin[2]=0;
    if(niuniu==521)
    {
        for(int i=0; i<10; i++)
            for(int j=0; j<10; j++)
            {
                if(map1[i][j]==1)
                {
                    markx=i;
                    marky=j;
                    break;
                }
            }
        x=markx;
        y=marky;
        for(; ;)
        {
            cout<<"请输入w a s d"<<endl;
            cin>>c;
            if(c=='w')
            {
                x=x-1;
                if(map1[x][y]==0)
                {
                    cout<<"前面是坚硬的岩石，无法通过"<<endl;
                }
                else if(map1[x][y]==2)
                {
                    cout<<"前面是松软的岩石，你需要一把铁锹才能通过"<<endl;
                }
                else if(map1[x][y]==3)
                {
                    if(wupin[2]==0) cout<<"前面是河流，你需要木筏才能通过"<<endl;
                    else
                    {
                        markx=x;
                        marky=y;
                        food=food-1;
                    }
                }
                else if(map1[x][y]==4)
                {
                    if(wupin[0]==0) cout<<"前面有怪兽，你需要一把小刀才能打败怪兽通过"<<endl;
                    else
                    {
                        markx=x;
                        marky=y;
                        food=food-1;
                        wupin[0]-=1;
                        cout<<"你失去了一把小刀"<<endl;
                    }
                }
                else if(map1[x][y]==5)
                {
                    markx=x;
                    marky=y;
                    food=food-1;
                    wupin[2]+=1;
                    cout<<"你得到了木筏"<<endl;
                }
                else if(map1[x][y]==6)
                {
                    markx=x;
                    marky=y;
                    food=food-1;
                    wupin[1]+=1;
                    cout<<"你得到了钥匙"<<endl;
                }
                else if(map1[x][y]==7)
                {
                    markx=x;
                    marky=y;
                    cout<<"you are good luck"<<endl;
                }
                else if(map1[x][y]==8)
                {
                    if(wupin[1]==0) cout<<"前面门上锁了，你需要钥匙才可以通过"<<endl;
                    else
                    {
                        markx=x;
                        marky=y;
                        food=food-1;
                        wupin[1]-=1;
                        cout<<"你使用了一把钥匙"<<endl;
                    }
                }
                else if(map1[x][y]==9)
                {
                    markx=x;
                    marky=y;
                    food=food-1;
                    wupin[0]+=1;
                    cout<<"你得到了一把小刀"<<endl;
                }
                else if(map1[x][y]==11)
                {
                    cout<<"天下文榜自有我才名！！！"<<endl;
                }
                else
                {
                    markx=x;
                    marky=y;
                    food=food-1;
                    cout<<"你向上走了一步，同时消耗了一点食物，你目前还剩余"<<food<<"食物"<<endl;
                }
                x=markx;
                y=marky;
            }
            else if(c=='a')
            {
                y=y-1;
                if(map1[x][y]==0)
                {
                    cout<<"前面是坚硬的岩石，无法通过"<<endl;
                }
                else if(map1[x][y]==2)
                {
                    cout<<"前面是松软的岩石，你需要一把铁锹才能通过"<<endl;
                }
                else if(map1[x][y]==3)
                {
                    if(wupin[2]==0) cout<<"前面是河流，你需要木筏才能通过"<<endl;
                    else
                    {
                        markx=x;
                        marky=y;
                        food=food-1;
                    }
                }
                else if(map1[x][y]==4)
                {
                    if(wupin[0]==0) cout<<"前面有怪兽，你需要一把小刀才能打败怪兽通过"<<endl;
                    else
                    {
                        markx=x;
                        marky=y;
                        food=food-1;
                        wupin[0]-=1;
                        cout<<"你失去了一把小刀"<<endl;
                    }
                }
                else if(map1[x][y]==5)
                {
                    markx=x;
                    marky=y;
                    food=food-1;
                    wupin[2]+=1;
                    cout<<"你得到了木筏"<<endl;
                }
                else if(map1[x][y]==6)
                {
                    markx=x;
                    marky=y;
                    food=food-1;
                    wupin[1]+=1;
                    cout<<"你得到了钥匙"<<endl;
                }
                else if(map1[x][y]==7)
                {
                    markx=x;
                    marky=y;
                    cout<<"you are good luck"<<endl;
                }
                else if(map1[x][y]==8)
                {
                    if(wupin[1]==0) cout<<"前面门上锁了，你需要钥匙才可以通过"<<endl;
                    else
                    {
                        markx=x;
                        marky=y;
                        food=food-1;
                        wupin[1]-=1;
                        cout<<"你使用了一把钥匙"<<endl;
                    }
                }
                else if(map1[x][y]==9)
                {
                    markx=x;
                    marky=y;
                    food=food-1;
                    wupin[0]+=1;
                    cout<<"你得到了一把小刀"<<endl;
                }
                else if(map1[x][y]==11)
                {
                    cout<<"天下文榜自有我才名！！！"<<endl;
                }
                else
                {
                    markx=x;
                    marky=y;
                    food=food-1;
                    cout<<"你向左走了一步，同时消耗了一点食物，你目前还剩余"<<food<<"食物"<<endl;
                }
                x=markx;
                y=marky;
            }
            else if(c=='s')
            {
                x=x+1;
                if(map1[x][y]==0)
                {
                    cout<<"前面是坚硬的岩石，无法通过"<<endl;
                }
                else if(map1[x][y]==2)
                {
                    cout<<"前面是松软的岩石，你需要一把铁锹才能通过"<<endl;
                }
                else if(map1[x][y]==3)
                {
                    if(wupin[2]==0) cout<<"前面是河流，你需要木筏才能通过"<<endl;
                    else
                    {
                        markx=x;
                        marky=y;
                        food=food-1;
                    }
                }
                else if(map1[x][y]==4)
                {
                    if(wupin[0]==0) cout<<"前面有怪兽，你需要一把小刀才能打败怪兽通过"<<endl;
                    else
                    {
                        markx=x;
                        marky=y;
                        food=food-1;
                        wupin[0]-=1;
                        cout<<"你失去了一把小刀"<<endl;
                    }
                }
                else if(map1[x][y]==5)
                {
                    markx=x;
                    marky=y;
                    food=food-1;
                    wupin[2]+=1;
                    cout<<"你得到了木筏"<<endl;
                }
                else if(map1[x][y]==6)
                {
                    markx=x;
                    marky=y;
                    food=food-1;
                    wupin[1]+=1;
                    cout<<"你得到了钥匙"<<endl;
                }
                else if(map1[x][y]==7)
                {
                    markx=x;
                    marky=y;
                    cout<<"you are good luck"<<endl;
                }
                else if(map1[x][y]==8)
                {
                    if(wupin[1]==0) cout<<"前面门上锁了，你需要钥匙才可以通过"<<endl;
                    else
                    {
                        markx=x;
                        marky=y;
                        food=food-1;
                        wupin[1]-=1;
                        cout<<"你使用了一把钥匙"<<endl;
                    }
                }
                else if(map1[x][y]==9)
                {
                    markx=x;
                    marky=y;
                    food=food-1;
                    wupin[0]+=1;
                    cout<<"你得到了一把小刀"<<endl;
                }
                else if(map1[x][y]==11)
                {
                    cout<<"所爱隔山海，山海皆可平。无论什么时候我们都不能抛弃自己的爱人。"<<endl;
                }
                else
                {
                    markx=x;
                    marky=y;
                    food=food-1;
                    cout<<"你向下走了一步，同时消耗了一点食物，你目前还剩余"<<food<<"食物"<<endl;
                }
                x=markx;
                y=marky;
            }
            else if(c=='d')
            {
                y+=1;
                if(map1[x][y]==0)
                {
                    cout<<"前面是坚硬的岩石，无法通过"<<endl;
                }
                else if(map1[x][y]==2)
                {
                    cout<<"前面是松软的岩石，你需要一把铁锹才能通过"<<endl;
                }
                else if(map1[x][y]==3)
                {
                    if(wupin[2]==0) cout<<"前面是河流，你需要木筏才能通过"<<endl;
                    else
                    {
                        markx=x;
                        marky=y;
                        food=food-1;
                    }
                }
                else if(map1[x][y]==4)
                {
                    if(wupin[0]==0) cout<<"前面有怪兽，你需要一把小刀才能打败怪兽通过"<<endl;
                    else
                    {
                        markx=x;
                        marky=y;
                        food=food-1;
                        wupin[0]-=1;
                        cout<<"你失去了一把小刀"<<endl;
                    }
                }
                else if(map1[x][y]==5)
                {
                    markx=x;
                    marky=y;
                    food=food-1;
                    wupin[2]+=1;
                    cout<<"你得到了木筏"<<endl;
                }
                else if(map1[x][y]==6)
                {
                    markx=x;
                    marky=y;
                    food=food-1;
                    wupin[1]+=1;
                    cout<<"你得到了钥匙"<<endl;
                }
                else if(map1[x][y]==7)
                {
                    markx=x;
                    marky=y;
                    cout<<"you are good luck"<<endl;
                }
                else if(map1[x][y]==8)
                {
                    if(wupin[1]==0) cout<<"前面门上锁了，你需要钥匙才可以通过"<<endl;
                    else
                    {
                        markx=x;
                        marky=y;
                        food=food-1;
                        wupin[1]-=1;
                        cout<<"你使用了一把钥匙"<<endl;
                    }
                }
                else if(map1[x][y]==9)
                {
                    markx=x;
                    marky=y;
                    food=food-1;
                    wupin[0]+=1;
                    cout<<"你得到了一把小刀"<<endl;
                }
                else if(map1[x][y]==11)
                {
                    cout<<"所爱隔山海，山海皆可平。无论什么时候我们都不能抛弃自己的爱人。"<<endl;
                }
                else
                {
                    markx=x;
                    marky=y;
                    food=food-1;
                    cout<<"你向右走了一步，同时消耗了一点食物，你目前还剩余"<<food<<"食物"<<endl;
                }
                x=markx;
                y=marky;
            }
            else
            {
                cout<<"请输入正确的字符(小写w a s d)"<<endl;
            }
            if(!food) cout<<"你失败了，没能救出你的爱人"<<endl;
            if(map1[x][y]==7)
            {
                flag=1;
                break;
            }
        }
    }
    else ;
    if(flag)
    {
        cout<<"恭喜你，成功救出了你的爱人。"<<endl;
        for(long long int i=0; i<1000000000; i++) ;
        cout<<"希望经历过这件事情以后，你们能够彼此更加相爱。"<<endl;
        for(long long int i=0; i<1000000000; i++) ;
        cout<<"祝天下有情人终成眷属！！"<<endl;
    }
    return 0;
}
