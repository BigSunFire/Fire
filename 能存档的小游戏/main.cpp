#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
int Map[2][25]={
0,0,0,0,1,0,2,0,3,0,0,0,0,0,0,0,4,0,6,0,0,0,10,0,0,
0,0,0,0,0,0,7,0,7,0,0,0,0,0,0,0,7,0,7,0,1,0,6,0,0///�浵���poi��������λ����
};
int wu=10,zhi=10,mei=10,poi=0,id=0;
int flag=0;
int qianli=0,x,ID;
void AC()
{
    for(int i=0;i<=24;i++)
    {
        if(Map[id][i]==0) cout<<"��";
        if(Map[id][i]==1) cout<<"��";
        if(Map[id][i]==2) cout<<"��";
        if(Map[id][i]==3) cout<<"��";
        if(Map[id][i]==4) cout<<"��";
        if(Map[id][i]==5) cout<<"��";
        if(Map[id][i]==6) cout<<"��";
        if(Map[id][i]==7) cout<<"��";
        if(Map[id][i]==10&&!flag) cout<<"��";
        if(Map[id][i]==10&&flag) cout<<"��";
        if((i+1)%5==0) cout<<endl;
    }
}
void move0()
{
    Map[id][poi]=5;///�涨��ʼλ��
    while(1){
    if(wu>15||zhi>15||mei>15) flag=1;
    AC();
    int mov;
    cout<<"����1��2��3��5���Ʒ���";
    cin>>mov;
      if(mov!=2&&mov!=5&&mov!=1&&mov!=1&&mov!=3) cout<<"�����룺2��1��3��5";
    if(mov==3)
    {
        if(poi+1>24) ;
        else{
            if(Map[id][poi+1]==0) {Map[id][poi]=0;poi=poi+1;Map[id][poi]=5;}
            else if(Map[id][poi+1]==1) {Map[id][poi]=0;id=(id+1)%2;poi=0;Map[id][poi]=5;}
            else if(Map[id][poi+1]==2) {
                ///�����
                system("cls");
                cout<<"��ӭ��������ݣ����Ǳ��ֵ�Ѿ�ȫ��ת��Ϊ����ֵ"<<endl;
                wu+=qianli;qianli=0;
                cout<<"Ŀǰ����ֵΪ��"<<wu<<endl;
                cout<<"�������������֣�ȷ�ϣ�"<<endl;
                cin>>x;
            }
            else if(Map[id][poi+1]==3) {
                ///����ѧУ
                system("cls");
                cout<<"��ӭ��������ѧУ�����Ǳ��ֵ�Ѿ�ȫ��ת��Ϊ����ֵ"<<endl;
                zhi+=qianli;qianli=0;
                cout<<"Ŀǰ����ֵΪ��"<<zhi<<endl;
                cout<<"�������������֣�ȷ�ϣ�"<<endl;
                cin>>x;
            }
            else if(Map[id][poi+1]==4) {
                ///��������
                system("cls");
                cout<<"Hi~С���ã���ӭ�������н��������Ǳ��ֵ�Ѿ�ȫ��ת��Ϊ����ֵ"<<endl;
                mei+=qianli;qianli=0;
                cout<<"Ŀǰ����ֵΪ��"<<mei<<endl;
                cout<<"�������������֣�ȷ�ϣ�"<<endl;
                cin>>x;
            }
            else if(Map[id][poi+1]==6) {
                ///�浵��
                if(wu>99) wu=99;
                if(zhi>99) zhi=99;
                if(mei>99) mei=99;
                cout<<"���μ���Ļ����룺"<<poi<<id<<wu<<zhi<<mei<<endl;
                cout<<"�������������֣�ȷ�ϣ�"<<endl;
                cin>>x;
            }
            else if(Map[id][poi+1]==7) {
                ///��
                system("cls");
                if(wu<qianli) cout<<"�㱻�ֻ�����"<<endl;
                else {cout<<"������1��Ǳ��ֵ"<<endl;qianli++;cout<<"ĿǰǱ��ֵΪ��"<<qianli<<endl;}
                cout<<"�������������֣�ȷ�ϣ�"<<endl;
                cin>>x;
            }
            else if(Map[id][poi+1]==10&&flag) {
                ///�յ�
                system("cls");
                cout<<"����BOSS                           ��"<<endl;
                cout<<"1000                               100"<<endl;
                cout<<"��ʹ����ľ����Ը���"<<endl;
                cout<<"1.��������        2.��������       3.��������"<<endl;
                cin>>x;
                while(x!=1&&x!=2&&x!=3)
                {
                    cin>>x;
                }
                if(x==1)
                {
                    cout<<"��ʹ������������������BOSS�ܵ����˺���ͬʱBOSSҲ������������ҵĽ���"<<endl;
                    cout<<"��̫���ˣ�����д�ˣ���Ӯ�ˣ�BOSS�������ˡ�"<<endl;
                }
                if(x==2||x==3)
                {
                    cout<<"��Ӯ�ˣ�BOSS����һ����"<<endl;
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
                ///�����
                system("cls");
                cout<<"��ӭ��������ݣ����Ǳ��ֵ�Ѿ�ȫ��ת��Ϊ����ֵ"<<endl;
                wu+=qianli;qianli=0;
                cout<<"Ŀǰ����ֵΪ��"<<wu<<endl;
                cout<<"�������������֣�ȷ�ϣ�"<<endl;
                cin>>x;
            }
            else if(Map[id][poi-1]==3) {
                ///����ѧУ
                system("cls");
                cout<<"��ӭ��������ѧУ�����Ǳ��ֵ�Ѿ�ȫ��ת��Ϊ����ֵ"<<endl;
                zhi+=qianli;qianli=0;
                cout<<"Ŀǰ����ֵΪ��"<<zhi<<endl;
                cout<<"�������������֣�ȷ�ϣ�"<<endl;
                cin>>x;
            }
            else if(Map[id][poi-1]==4) {
                ///��������
                system("cls");
                cout<<"Hi~С���ã���ӭ�������н��������Ǳ��ֵ�Ѿ�ȫ��ת��Ϊ����ֵ"<<endl;
                mei+=qianli;qianli=0;
                cout<<"Ŀǰ����ֵΪ��"<<mei<<endl;
                cout<<"�������������֣�ȷ�ϣ�"<<endl;
                cin>>x;
            }
            else if(Map[id][poi-1]==6) {
                ///�浵��
                if(wu>99) wu=99;
                if(zhi>99) zhi=99;
                if(mei>99) mei=99;
                cout<<"���μ���Ļ����룺"<<poi<<id<<wu<<zhi<<mei<<endl;
                cout<<"�������������֣�ȷ�ϣ�"<<endl;
                cin>>x;
            }
            else if(Map[id][poi-1]==7) {
                ///��
                system("cls");
                if(wu<qianli) cout<<"�㱻�ֻ�����"<<endl;
                else {cout<<"������1��Ǳ��ֵ"<<endl;qianli++;cout<<"ĿǰǱ��ֵΪ��"<<qianli<<endl;}
                cout<<"�������������֣�ȷ�ϣ�"<<endl;
                cin>>x;
            }
            else if(Map[id][poi-1]==10&&flag) {
                ///�յ�
                system("cls");
                cout<<"����BOSS                           ��"<<endl;
                cout<<"1000                               100"<<endl;
                cout<<"��ʹ����ľ����Ը���"<<endl;
                cout<<"1.��������        2.��������       3.��������"<<endl;
                cin>>x;
                while(x!=1&&x!=2&&x!=3)
                {
                    cin>>x;
                }
                if(x==1)
                {
                    cout<<"��ʹ������������������BOSS�ܵ����˺���ͬʱBOSSҲ������������ҵĽ���"<<endl;
                    cout<<"��̫���ˣ�����д�ˣ���Ӯ�ˣ�BOSS�������ˡ�"<<endl;
                }
                if(x==2||x==3)
                {
                    cout<<"��Ӯ�ˣ�BOSS����һ����"<<endl;
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
                ///�����
                system("cls");
                cout<<"��ӭ��������ݣ����Ǳ��ֵ�Ѿ�ȫ��ת��Ϊ����ֵ"<<endl;
                wu+=qianli;qianli=0;
                cout<<"Ŀǰ����ֵΪ��"<<wu<<endl;
                cout<<"�������������֣�ȷ�ϣ�"<<endl;
                cin>>x;
            }
            else if(Map[id][poi-5]==3) {
                ///����ѧУ
                system("cls");
                cout<<"��ӭ��������ѧУ�����Ǳ��ֵ�Ѿ�ȫ��ת��Ϊ����ֵ"<<endl;
                zhi+=qianli;qianli=0;
                cout<<"Ŀǰ����ֵΪ��"<<zhi<<endl;
                cout<<"�������������֣�ȷ�ϣ�"<<endl;
                cin>>x;
            }
            else if(Map[id][poi-5]==4) {
                ///��������
                system("cls");
                cout<<"Hi~С���ã���ӭ�������н��������Ǳ��ֵ�Ѿ�ȫ��ת��Ϊ����ֵ"<<endl;
                mei+=qianli;qianli=0;
                cout<<"Ŀǰ����ֵΪ��"<<mei<<endl;
                cout<<"�������������֣�ȷ�ϣ�"<<endl;
                cin>>x;
            }
            else if(Map[id][poi-5]==6) {
                ///�浵��
                if(wu>99) wu=99;
                if(zhi>99) zhi=99;
                if(mei>99) mei=99;
                cout<<"���μ���Ļ����룺"<<poi<<id<<wu<<zhi<<mei<<endl;
                cout<<"�������������֣�ȷ�ϣ�"<<endl;
                cin>>x;
            }
            else if(Map[id][poi-5]==7) {
                ///��
                system("cls");
                if(wu<qianli) cout<<"�㱻�ֻ�����"<<endl;
                else {cout<<"������1��Ǳ��ֵ"<<endl;qianli++;cout<<"ĿǰǱ��ֵΪ��"<<qianli<<endl;}
                cout<<"�������������֣�ȷ�ϣ�"<<endl;
                cin>>x;
            }
            else if(Map[id][poi-5]==10&&flag) {
                ///�յ�
                system("cls");
                cout<<"����BOSS                           ��"<<endl;
                cout<<"1000                               100"<<endl;
                cout<<"��ʹ����ľ����Ը���"<<endl;
                cout<<"1.��������        2.��������       3.��������"<<endl;
                cin>>x;
                while(x!=1&&x!=2&&x!=3)
                {
                    cin>>x;
                }
                if(x==1)
                {
                    cout<<"��ʹ������������������BOSS�ܵ����˺���ͬʱBOSSҲ������������ҵĽ���"<<endl;
                    cout<<"��̫���ˣ�����д�ˣ���Ӯ�ˣ�BOSS�������ˡ�"<<endl;
                }
                if(x==2||x==3)
                {
                    cout<<"��Ӯ�ˣ�BOSS����һ����"<<endl;
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
                ///�����
                system("cls");
                cout<<"��ӭ��������ݣ����Ǳ��ֵ�Ѿ�ȫ��ת��Ϊ����ֵ"<<endl;
                wu+=qianli;qianli=0;
                cout<<"Ŀǰ����ֵΪ��"<<wu<<endl;
                cout<<"�������������֣�ȷ�ϣ�"<<endl;
                cin>>x;
            }
            else if(Map[id][poi+5]==3) {
                ///����ѧУ
                system("cls");
                cout<<"��ӭ��������ѧУ�����Ǳ��ֵ�Ѿ�ȫ��ת��Ϊ����ֵ"<<endl;
                zhi+=qianli;qianli=0;
                cout<<"Ŀǰ����ֵΪ��"<<zhi<<endl;
                cout<<"�������������֣�ȷ�ϣ�"<<endl;
                cin>>x;
            }
            else if(Map[id][poi+5]==4) {
                ///��������
                system("cls");
                cout<<"Hi~С���ã���ӭ�������н��������Ǳ��ֵ�Ѿ�ȫ��ת��Ϊ����ֵ"<<endl;
                mei+=qianli;qianli=0;
                cout<<"Ŀǰ����ֵΪ��"<<mei<<endl;
                cout<<"�������������֣�ȷ�ϣ�"<<endl;
                cin>>x;
            }
            else if(Map[id][poi+5]==6) {
                ///�浵��
                if(wu>99) wu=99;
                if(zhi>99) zhi=99;
                if(mei>99) mei=99;
                cout<<"���μ���Ļ����룺"<<poi<<id<<wu<<zhi<<mei<<endl;
                cout<<"�������������֣�ȷ�ϣ�"<<endl;
                cin>>x;
            }
            else if(Map[id][poi+5]==7) {
                ///��
                system("cls");
                if(wu<qianli) cout<<"�㱻�ֻ�����"<<endl;
                else {cout<<"������1��Ǳ��ֵ"<<endl;qianli++;cout<<"ĿǰǱ��ֵΪ��"<<qianli<<endl;}
                cout<<"�������������֣�ȷ�ϣ�"<<endl;
                cin>>x;
            }
            else if(Map[id][poi+5]==10&&flag) {
                ///�յ�
                system("cls");
                cout<<"����BOSS                           ��"<<endl;
                cout<<"1000                               100"<<endl;
                cout<<"��ʹ����ľ����Ը���"<<endl;
                cout<<"1.��������        2.��������       3.��������"<<endl;
                cin>>x;
                while(x!=1&&x!=2&&x!=3)
                {
                    cin>>x;
                }
                if(x==1)
                {
                    cout<<"��ʹ������������������BOSS�ܵ����˺���ͬʱBOSSҲ������������ҵĽ���"<<endl;
                    cout<<"��̫���ˣ�����д�ˣ���Ӯ�ˣ�BOSS�������ˡ�"<<endl;
                }
                if(x==2)
                {
                    cout<<"��Ӯ�ˣ�BOSS����һ����"<<endl;
                }
                if(x==3)
                {
                    cout<<"                                                                                                  "<<endl<<"                                                                                                             "<<"������������������������Ů�񣬲����ܷ���������"<<"������������������������Ů�񣬲����ܷ���������"<<"������������������������Ů�񣬲����ܷ���������"<<endl<<"������������������������Ů�񣬲����ܷ���������"<<"������������������������Ů�񣬲����ܷ���������"<<"������������������������Ů�񣬲����ܷ���������"<<endl<<"������������������������Ů�񣬲����ܷ���������"<<"������������������������Ů�񣬲����ܷ���������"<<"������������������������Ů�񣬲����ܷ���������"<<endl;
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
    cout<<"��ӭ����δ�����磬���������� 1 OR 2ѡ��ģʽ��"<<endl;
    cout<<"1.�µĹ���"<<"2.�ɵĻ���"<<endl;
    cin>>start;
    while(start!=1&&start!=2)
    {
        cin>>start;
    }
    if(start==2)
    {
        cout<<"����������룺"<<endl;
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
            cout<<"��������ȷ�Ļ����룺"<<endl;
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
