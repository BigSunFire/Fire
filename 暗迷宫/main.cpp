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
int wupin[3]= {0}; //��Ʒ��
int markx,marky;
int flag=0;
int main()
{
    cout<<"��ӭ�������Թ�����Ϸ����"<<endl;
    for(long long int i=0; i<1000000000; i++) ;
    cout<<"�����İ�������һ���Թ������������޷�������Χ�����ֻ��ƾ���������ʾ�����Լ��Ĵ��������߳��Թ���"<<endl;
    for(long long int i=0; i<1000000000; i++) ;
    cout<<"׼��������"<<endl;
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
        cout<<"������w a s d"<<endl;
        cin>>c;
        if(c=='w')
        {
            x=x-1;
            if(map0[x][y]==0)
            {
                cout<<"ǰ���Ǽ�Ӳ����ʯ���޷�ͨ��"<<endl;
            }
            else if(map0[x][y]==2)
            {
                cout<<"ǰ�����������ʯ������Ҫһ�����²���ͨ��"<<endl;
            }
            else if(map0[x][y]==3)
            {
                if(wupin[2]==0) cout<<"ǰ���Ǻ���������Ҫľ������ͨ��"<<endl;
                else
                {
                    markx=x;
                    marky=y;
                    food=food-1;
                }
            }
            else if(map0[x][y]==4)
            {
                if(wupin[0]==0) cout<<"ǰ���й��ޣ�����Ҫһ��С�����ܴ�ܹ���ͨ��"<<endl;
                else
                {
                    markx=x;
                    marky=y;
                    food=food-1;
                    wupin[0]-=1;
                    cout<<"��ʧȥ��һ��С��"<<endl;
                }
            }
            else if(map0[x][y]==5)
            {
                markx=x;
                marky=y;
                food=food-1;
                wupin[2]+=1;
                cout<<"��õ���ľ��"<<endl;
            }
            else if(map0[x][y]==6)
            {
                markx=x;
                marky=y;
                food=food-1;
                wupin[1]+=1;
                cout<<"��õ���Կ��"<<endl;
            }
            else if(map0[x][y]==7)
            {
                markx=x;
                marky=y;
                cout<<"you are good luck"<<endl;
            }
            else if(map0[x][y]==8)
            {
                if(wupin[1]==0) cout<<"ǰ���������ˣ�����ҪԿ�ײſ���ͨ��"<<endl;
                else
                {
                    markx=x;
                    marky=y;
                    food=food-1;
                    wupin[1]-=1;
                    cout<<"��ʹ����һ��Կ��"<<endl;
                }
            }
            else if(map0[x][y]==9)
            {
                markx=x;
                marky=y;
                food=food-1;
                wupin[0]+=1;
                cout<<"��õ���һ��С��"<<endl;
            }
            else if(map0[x][y]==11)
            {
                cout<<"�������Ա���߽��񣬽����㣬�����ܣ�������ԪǮ"<<endl;
            }
            else
            {
                markx=x;
                marky=y;
                food=food-1;
                cout<<"����������һ����ͬʱ������һ��ʳ���Ŀǰ��ʣ��"<<food<<"ʳ��"<<endl;
            }
            x=markx;
            y=marky;
        }
        else if(c=='a')
        {
            y=y-1;
            if(map0[x][y]==0)
            {
                cout<<"ǰ���Ǽ�Ӳ����ʯ���޷�ͨ��"<<endl;
            }
            else if(map0[x][y]==2)
            {
                cout<<"ǰ�����������ʯ������Ҫһ�����²���ͨ��"<<endl;
            }
            else if(map0[x][y]==3)
            {
                if(wupin[2]==0) cout<<"ǰ���Ǻ���������Ҫľ������ͨ��"<<endl;
                else
                {
                    markx=x;
                    marky=y;
                    food=food-1;
                }
            }
            else if(map0[x][y]==4)
            {
                if(wupin[0]==0) cout<<"ǰ���й��ޣ�����Ҫһ��С�����ܴ�ܹ���ͨ��"<<endl;
                else
                {
                    markx=x;
                    marky=y;
                    food=food-1;
                    wupin[0]-=1;
                    cout<<"��ʧȥ��һ��С��"<<endl;
                }
            }
            else if(map0[x][y]==5)
            {
                markx=x;
                marky=y;
                food=food-1;
                wupin[2]+=1;
                cout<<"��õ���ľ��"<<endl;
            }
            else if(map0[x][y]==6)
            {
                markx=x;
                marky=y;
                food=food-1;
                wupin[1]+=1;
                cout<<"��õ���Կ��"<<endl;
            }
            else if(map0[x][y]==7)
            {
                markx=x;
                marky=y;
                cout<<"you are good luck"<<endl;
            }
            else if(map0[x][y]==8)
            {
                if(wupin[1]==0) cout<<"ǰ���������ˣ�����ҪԿ�ײſ���ͨ��"<<endl;
                else
                {
                    markx=x;
                    marky=y;
                    food=food-1;
                    wupin[1]-=1;
                    cout<<"��ʹ����һ��Կ��"<<endl;
                }
            }
            else if(map0[x][y]==9)
            {
                markx=x;
                marky=y;
                food=food-1;
                wupin[0]+=1;
                cout<<"��õ���һ��С��"<<endl;
            }
            else if(map0[x][y]==11)
            {
                cout<<"�������Ա���߽��񣬽����㣬�����ܣ�������ԪǮ"<<endl;
            }
            else
            {
                markx=x;
                marky=y;
                food=food-1;
                cout<<"����������һ����ͬʱ������һ��ʳ���Ŀǰ��ʣ��"<<food<<"ʳ��"<<endl;
            }
            x=markx;
            y=marky;
        }
        else if(c=='s')
        {
            x=x+1;
            if(map0[x][y]==0)
            {
                cout<<"ǰ���Ǽ�Ӳ����ʯ���޷�ͨ��"<<endl;
            }
            else if(map0[x][y]==2)
            {
                cout<<"ǰ�����������ʯ������Ҫһ�����²���ͨ��"<<endl;
            }
            else if(map0[x][y]==3)
            {
                if(wupin[2]==0) cout<<"ǰ���Ǻ���������Ҫľ������ͨ��"<<endl;
                else
                {
                    markx=x;
                    marky=y;
                    food=food-1;
                }
            }
            else if(map0[x][y]==4)
            {
                if(wupin[0]==0) cout<<"ǰ���й��ޣ�����Ҫһ��С�����ܴ�ܹ���ͨ��"<<endl;
                else
                {
                    markx=x;
                    marky=y;
                    food=food-1;
                    wupin[0]-=1;
                    cout<<"��ʧȥ��һ��С��"<<endl;
                }
            }
            else if(map0[x][y]==5)
            {
                markx=x;
                marky=y;
                food=food-1;
                wupin[2]+=1;
                cout<<"��õ���ľ��"<<endl;
            }
            else if(map0[x][y]==6)
            {
                markx=x;
                marky=y;
                food=food-1;
                wupin[1]+=1;
                cout<<"��õ���Կ��"<<endl;
            }
            else if(map0[x][y]==7)
            {
                markx=x;
                marky=y;
                cout<<"you are good luck"<<endl;
            }
            else if(map0[x][y]==8)
            {
                if(wupin[1]==0) cout<<"ǰ���������ˣ�����ҪԿ�ײſ���ͨ��"<<endl;
                else
                {
                    markx=x;
                    marky=y;
                    food=food-1;
                    wupin[1]-=1;
                    cout<<"��ʹ����һ��Կ��"<<endl;
                }
            }
            else if(map0[x][y]==9)
            {
                markx=x;
                marky=y;
                food=food-1;
                wupin[0]+=1;
                cout<<"��õ���һ��С��"<<endl;
            }
            else if(map0[x][y]==11)
            {
                cout<<"�������Ա���߽��񣬽����㣬�����ܣ�������ԪǮ"<<endl;
            }
            else
            {
                markx=x;
                marky=y;
                food=food-1;
                cout<<"����������һ����ͬʱ������һ��ʳ���Ŀǰ��ʣ��"<<food<<"ʳ��"<<endl;
            }
            x=markx;
            y=marky;
        }
        else if(c=='d')
        {
            y+=1;
            if(map0[x][y]==0)
            {
                cout<<"ǰ���Ǽ�Ӳ����ʯ���޷�ͨ��"<<endl;
            }
            else if(map0[x][y]==2)
            {
                cout<<"ǰ�����������ʯ������Ҫһ�����²���ͨ��"<<endl;
            }
            else if(map0[x][y]==3)
            {
                if(wupin[2]==0) cout<<"ǰ���Ǻ���������Ҫľ������ͨ��"<<endl;
                else
                {
                    markx=x;
                    marky=y;
                    food=food-1;
                }
            }
            else if(map0[x][y]==4)
            {
                if(wupin[0]==0) cout<<"ǰ���й��ޣ�����Ҫһ��С�����ܴ�ܹ���ͨ��"<<endl;
                else
                {
                    markx=x;
                    marky=y;
                    food=food-1;
                    wupin[0]-=1;
                    cout<<"��ʧȥ��һ��С��"<<endl;
                }
            }
            else if(map0[x][y]==5)
            {
                markx=x;
                marky=y;
                food=food-1;
                wupin[2]+=1;
                cout<<"��õ���ľ��"<<endl;
            }
            else if(map0[x][y]==6)
            {
                markx=x;
                marky=y;
                food=food-1;
                wupin[1]+=1;
                cout<<"��õ���Կ��"<<endl;
            }
            else if(map0[x][y]==7)
            {
                markx=x;
                marky=y;
                cout<<"you are good luck"<<endl;
            }
            else if(map0[x][y]==8)
            {
                if(wupin[1]==0) cout<<"ǰ���������ˣ�����ҪԿ�ײſ���ͨ��"<<endl;
                else
                {
                    markx=x;
                    marky=y;
                    food=food-1;
                    wupin[1]-=1;
                    cout<<"��ʹ����һ��Կ��"<<endl;
                }
            }
            else if(map0[x][y]==9)
            {
                markx=x;
                marky=y;
                food=food-1;
                wupin[0]+=1;
                cout<<"��õ���һ��С��"<<endl;
            }
            else if(map0[x][y]==11)
            {
                cout<<"�������Ա���߽��񣬽����㣬�����ܣ�������ԪǮ"<<endl;
            }
            else
            {
                markx=x;
                marky=y;
                food=food-1;
                cout<<"����������һ����ͬʱ������һ��ʳ���Ŀǰ��ʣ��"<<food<<"ʳ��"<<endl;
            }
            x=markx;
            y=marky;
        }
        else
        {
            cout<<"��������ȷ���ַ�(Сдw a s d)"<<endl;
        }
        if(!food) cout<<"��ʧ���ˣ�û���߳����Թ�"<<endl;
        if(map0[x][y]==7) break;
    }
    cout<<"��ϲ�㣬�ɹ��߳��˰��Թ�"<<endl<<"�����㷢�ֳ����Ժ���İ��˲����ˣ����Ƿ������½��밵�Թ����һ��Լ��İ����أ�"<<endl<<"��Ļ������� 521 ����������Լ�һ�����뿪�������Լ��İ��ˣ���ô���������һ�����֡�"<<endl;
    cout<<"������һ�����֣�"<<endl;
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
            cout<<"������w a s d"<<endl;
            cin>>c;
            if(c=='w')
            {
                x=x-1;
                if(map1[x][y]==0)
                {
                    cout<<"ǰ���Ǽ�Ӳ����ʯ���޷�ͨ��"<<endl;
                }
                else if(map1[x][y]==2)
                {
                    cout<<"ǰ�����������ʯ������Ҫһ�����²���ͨ��"<<endl;
                }
                else if(map1[x][y]==3)
                {
                    if(wupin[2]==0) cout<<"ǰ���Ǻ���������Ҫľ������ͨ��"<<endl;
                    else
                    {
                        markx=x;
                        marky=y;
                        food=food-1;
                    }
                }
                else if(map1[x][y]==4)
                {
                    if(wupin[0]==0) cout<<"ǰ���й��ޣ�����Ҫһ��С�����ܴ�ܹ���ͨ��"<<endl;
                    else
                    {
                        markx=x;
                        marky=y;
                        food=food-1;
                        wupin[0]-=1;
                        cout<<"��ʧȥ��һ��С��"<<endl;
                    }
                }
                else if(map1[x][y]==5)
                {
                    markx=x;
                    marky=y;
                    food=food-1;
                    wupin[2]+=1;
                    cout<<"��õ���ľ��"<<endl;
                }
                else if(map1[x][y]==6)
                {
                    markx=x;
                    marky=y;
                    food=food-1;
                    wupin[1]+=1;
                    cout<<"��õ���Կ��"<<endl;
                }
                else if(map1[x][y]==7)
                {
                    markx=x;
                    marky=y;
                    cout<<"you are good luck"<<endl;
                }
                else if(map1[x][y]==8)
                {
                    if(wupin[1]==0) cout<<"ǰ���������ˣ�����ҪԿ�ײſ���ͨ��"<<endl;
                    else
                    {
                        markx=x;
                        marky=y;
                        food=food-1;
                        wupin[1]-=1;
                        cout<<"��ʹ����һ��Կ��"<<endl;
                    }
                }
                else if(map1[x][y]==9)
                {
                    markx=x;
                    marky=y;
                    food=food-1;
                    wupin[0]+=1;
                    cout<<"��õ���һ��С��"<<endl;
                }
                else if(map1[x][y]==11)
                {
                    cout<<"�����İ������Ҳ���������"<<endl;
                }
                else
                {
                    markx=x;
                    marky=y;
                    food=food-1;
                    cout<<"����������һ����ͬʱ������һ��ʳ���Ŀǰ��ʣ��"<<food<<"ʳ��"<<endl;
                }
                x=markx;
                y=marky;
            }
            else if(c=='a')
            {
                y=y-1;
                if(map1[x][y]==0)
                {
                    cout<<"ǰ���Ǽ�Ӳ����ʯ���޷�ͨ��"<<endl;
                }
                else if(map1[x][y]==2)
                {
                    cout<<"ǰ�����������ʯ������Ҫһ�����²���ͨ��"<<endl;
                }
                else if(map1[x][y]==3)
                {
                    if(wupin[2]==0) cout<<"ǰ���Ǻ���������Ҫľ������ͨ��"<<endl;
                    else
                    {
                        markx=x;
                        marky=y;
                        food=food-1;
                    }
                }
                else if(map1[x][y]==4)
                {
                    if(wupin[0]==0) cout<<"ǰ���й��ޣ�����Ҫһ��С�����ܴ�ܹ���ͨ��"<<endl;
                    else
                    {
                        markx=x;
                        marky=y;
                        food=food-1;
                        wupin[0]-=1;
                        cout<<"��ʧȥ��һ��С��"<<endl;
                    }
                }
                else if(map1[x][y]==5)
                {
                    markx=x;
                    marky=y;
                    food=food-1;
                    wupin[2]+=1;
                    cout<<"��õ���ľ��"<<endl;
                }
                else if(map1[x][y]==6)
                {
                    markx=x;
                    marky=y;
                    food=food-1;
                    wupin[1]+=1;
                    cout<<"��õ���Կ��"<<endl;
                }
                else if(map1[x][y]==7)
                {
                    markx=x;
                    marky=y;
                    cout<<"you are good luck"<<endl;
                }
                else if(map1[x][y]==8)
                {
                    if(wupin[1]==0) cout<<"ǰ���������ˣ�����ҪԿ�ײſ���ͨ��"<<endl;
                    else
                    {
                        markx=x;
                        marky=y;
                        food=food-1;
                        wupin[1]-=1;
                        cout<<"��ʹ����һ��Կ��"<<endl;
                    }
                }
                else if(map1[x][y]==9)
                {
                    markx=x;
                    marky=y;
                    food=food-1;
                    wupin[0]+=1;
                    cout<<"��õ���һ��С��"<<endl;
                }
                else if(map1[x][y]==11)
                {
                    cout<<"�����İ������Ҳ���������"<<endl;
                }
                else
                {
                    markx=x;
                    marky=y;
                    food=food-1;
                    cout<<"����������һ����ͬʱ������һ��ʳ���Ŀǰ��ʣ��"<<food<<"ʳ��"<<endl;
                }
                x=markx;
                y=marky;
            }
            else if(c=='s')
            {
                x=x+1;
                if(map1[x][y]==0)
                {
                    cout<<"ǰ���Ǽ�Ӳ����ʯ���޷�ͨ��"<<endl;
                }
                else if(map1[x][y]==2)
                {
                    cout<<"ǰ�����������ʯ������Ҫһ�����²���ͨ��"<<endl;
                }
                else if(map1[x][y]==3)
                {
                    if(wupin[2]==0) cout<<"ǰ���Ǻ���������Ҫľ������ͨ��"<<endl;
                    else
                    {
                        markx=x;
                        marky=y;
                        food=food-1;
                    }
                }
                else if(map1[x][y]==4)
                {
                    if(wupin[0]==0) cout<<"ǰ���й��ޣ�����Ҫһ��С�����ܴ�ܹ���ͨ��"<<endl;
                    else
                    {
                        markx=x;
                        marky=y;
                        food=food-1;
                        wupin[0]-=1;
                        cout<<"��ʧȥ��һ��С��"<<endl;
                    }
                }
                else if(map1[x][y]==5)
                {
                    markx=x;
                    marky=y;
                    food=food-1;
                    wupin[2]+=1;
                    cout<<"��õ���ľ��"<<endl;
                }
                else if(map1[x][y]==6)
                {
                    markx=x;
                    marky=y;
                    food=food-1;
                    wupin[1]+=1;
                    cout<<"��õ���Կ��"<<endl;
                }
                else if(map1[x][y]==7)
                {
                    markx=x;
                    marky=y;
                    cout<<"you are good luck"<<endl;
                }
                else if(map1[x][y]==8)
                {
                    if(wupin[1]==0) cout<<"ǰ���������ˣ�����ҪԿ�ײſ���ͨ��"<<endl;
                    else
                    {
                        markx=x;
                        marky=y;
                        food=food-1;
                        wupin[1]-=1;
                        cout<<"��ʹ����һ��Կ��"<<endl;
                    }
                }
                else if(map1[x][y]==9)
                {
                    markx=x;
                    marky=y;
                    food=food-1;
                    wupin[0]+=1;
                    cout<<"��õ���һ��С��"<<endl;
                }
                else if(map1[x][y]==11)
                {
                    cout<<"������ɽ����ɽ���Կ�ƽ������ʲôʱ�����Ƕ����������Լ��İ��ˡ�"<<endl;
                }
                else
                {
                    markx=x;
                    marky=y;
                    food=food-1;
                    cout<<"����������һ����ͬʱ������һ��ʳ���Ŀǰ��ʣ��"<<food<<"ʳ��"<<endl;
                }
                x=markx;
                y=marky;
            }
            else if(c=='d')
            {
                y+=1;
                if(map1[x][y]==0)
                {
                    cout<<"ǰ���Ǽ�Ӳ����ʯ���޷�ͨ��"<<endl;
                }
                else if(map1[x][y]==2)
                {
                    cout<<"ǰ�����������ʯ������Ҫһ�����²���ͨ��"<<endl;
                }
                else if(map1[x][y]==3)
                {
                    if(wupin[2]==0) cout<<"ǰ���Ǻ���������Ҫľ������ͨ��"<<endl;
                    else
                    {
                        markx=x;
                        marky=y;
                        food=food-1;
                    }
                }
                else if(map1[x][y]==4)
                {
                    if(wupin[0]==0) cout<<"ǰ���й��ޣ�����Ҫһ��С�����ܴ�ܹ���ͨ��"<<endl;
                    else
                    {
                        markx=x;
                        marky=y;
                        food=food-1;
                        wupin[0]-=1;
                        cout<<"��ʧȥ��һ��С��"<<endl;
                    }
                }
                else if(map1[x][y]==5)
                {
                    markx=x;
                    marky=y;
                    food=food-1;
                    wupin[2]+=1;
                    cout<<"��õ���ľ��"<<endl;
                }
                else if(map1[x][y]==6)
                {
                    markx=x;
                    marky=y;
                    food=food-1;
                    wupin[1]+=1;
                    cout<<"��õ���Կ��"<<endl;
                }
                else if(map1[x][y]==7)
                {
                    markx=x;
                    marky=y;
                    cout<<"you are good luck"<<endl;
                }
                else if(map1[x][y]==8)
                {
                    if(wupin[1]==0) cout<<"ǰ���������ˣ�����ҪԿ�ײſ���ͨ��"<<endl;
                    else
                    {
                        markx=x;
                        marky=y;
                        food=food-1;
                        wupin[1]-=1;
                        cout<<"��ʹ����һ��Կ��"<<endl;
                    }
                }
                else if(map1[x][y]==9)
                {
                    markx=x;
                    marky=y;
                    food=food-1;
                    wupin[0]+=1;
                    cout<<"��õ���һ��С��"<<endl;
                }
                else if(map1[x][y]==11)
                {
                    cout<<"������ɽ����ɽ���Կ�ƽ������ʲôʱ�����Ƕ����������Լ��İ��ˡ�"<<endl;
                }
                else
                {
                    markx=x;
                    marky=y;
                    food=food-1;
                    cout<<"����������һ����ͬʱ������һ��ʳ���Ŀǰ��ʣ��"<<food<<"ʳ��"<<endl;
                }
                x=markx;
                y=marky;
            }
            else
            {
                cout<<"��������ȷ���ַ�(Сдw a s d)"<<endl;
            }
            if(!food) cout<<"��ʧ���ˣ�û�ܾȳ���İ���"<<endl;
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
        cout<<"��ϲ�㣬�ɹ��ȳ�����İ��ˡ�"<<endl;
        for(long long int i=0; i<1000000000; i++) ;
        cout<<"ϣ����������������Ժ������ܹ��˴˸����మ��"<<endl;
        for(long long int i=0; i<1000000000; i++) ;
        cout<<"ף�����������ճɾ�������"<<endl;
    }
    return 0;
}
