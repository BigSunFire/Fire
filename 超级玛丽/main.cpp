#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
int map[7][11]= {1,1,1,1,1,1,1,1,1,1,1,
                 1,0,0,0,0,0,0,0,0,0,1,
                 1,0,0,0,0,0,0,2,0,0,1,
                 1,0,5,0,0,0,8,2,0,0,1,
                 1,0,3,0,0,0,0,2,0,0,1,
                 1,0,0,0,0,4,0,2,0,6,1,
                 1,1,1,1,1,1,1,1,1,1,1
                };
int flag=0;
///By:Hire or Fire
void AC()
{
    for(int i=0; i<7; i++)
        for(int j=0; j<11; j++)
        {
            if(map[i][j]==1)
                printf("墙");
            if(map[i][j]==2||map[i][j]==8)
                printf("旗");
            if(map[i][j]==3)
                printf("砖");
            if(map[i][j]==4)
                printf("怪");
            if(map[i][j]==5)
                printf("我");
            if(map[i][j]==6)
                printf("门");
            if(map[i][j]==0)
                printf("  ");
            if(map[i][j]==9)
                printf("花");
            if(j==10)
                printf("\n");
        }
}
///By:Hire or Fire                                                                                                                                                                                                                                           ///By:Hire or Fire
void move(int cnt)
{

    for(int i=0; i<7; i++)
        for(int j=0; j<11; j++)
        {
            if(map[i][j]==5)
            {
                if(map[i+1][j]==0)
                {
                    map[i+1][j]=5;
                    map[i][j]=0;

                }
                if(map[i][j+2]==6)
                    flag=1;
            }
            if(map[i][j]==4)
            {
                if(map[i-1][j]==5||map[i+1][j]==5||map[i][j+1]==5||map[i][j-1]==5)
                    flag=-1;
                else if(map[i][j-1]==0)
                {
                    map[i][j-1]=4;
                    map[i][j]=0;
                }
                else if(map[i][j-1]==1)
                    map[i][j]=0;
                else ;
            }
            if(map[i][j]==8)
            {
                if(map[i-1][j]==5&&map[i+1][j]!=1)
                {
                    map[i+1][j]=8;
                    map[i][j]=0;
                }
            }
            if(map[i][j]==9)
            {
                if(map[i-1][j]==5||map[i+1][j]==5||map[i][j+1]==5||map[i][j-1]==5)
                {
                    map[i][j]=0;
                    flag=2;
                }
                else if(map[i+1][j]==0)
                {
                    map[i+1][j]=9;
                    map[i][j]=0;
                }
                else if(map[i+1][j]!=0&&map[i][j+1]==0)
                {
                    map[i][j+1]=9;
                    map[i][j]=0;
                }
                else ;
            }

        }
    int x=cnt/5000000;
    if(x>5)  ;
}
void move0()
{
    long x,y,mx,my,cnt=0;
    char c;

    for( ; ; )
    {
        cnt++;

        int x=cnt/5000000;
        if(x<=5&&cnt%5000000==0)
        {
            AC();
            for(int i=0; i<30000000; i++) ;
            system("cls");
            move(cnt);
            AC();
            for(int i=0; i<30000000; i++) ;
            system("cls");
        }
        else if(cnt%5000000==0)
        {
            if(x==6)
            {
                map[3][2]=0;
                map[3][3]=5;
            }
            if(x==7)
            {
                map[3][3]=0;
                map[4][3]=5;
            }
            if(x==8)
            {
                map[4][3]=0;
                map[5][3]=5;
            }
            if(x==9)
            {
                map[5][3]=0;
                map[5][2]=5;
            }
            if(x==10)
            {
                map[5][2]=0;
                map[5][1]=5;
            }
            if(x==11)
            {
                map[5][1]=0;
                map[4][1]=5;
            }
            if(x==12)
            {
                map[4][1]=0;
                map[5][1]=5;
            }
            if(x==13)
            {
                map[5][1]=0;
                map[5][2]=5;
            }
            if(x==14)
            {
                map[3][2]=9;
            }
            if(x==15)
            {
                map[3][2]=0;
                map[3][3]=9;
                map[5][3]=5;
                map[5][2]=0;
            }
            if(x==16)
            {
                map[3][3]=0;
                map[4][3]=9;
            }
            if(x==17)
            {
                map[4][3]=0;
            }
            if(x==18)
            {
                map[5][3]=0;
                map[4][3]=5;
                map[5][2]=0;
            }
            if(x==19)
            {
                map[4][3]=0;
                map[3][3]=3;
                map[5][3]=5;
            }
            if(x==20)
            {
                map[5][4]=5;
                map[5][3]=0;
                map[5][2]=0;
            }
            if(x==21)
            {
                map[5][4]=0;
                map[5][5]=5;
                map[5][2]=0;
            }
            if(x==22)
            {
                map[5][5]=0;
                map[4][5]=5;
                map[3][5]=3;
            }
            if(x==23)
            {
                map[5][5]=5;
                map[4][5]=0;
                map[5][2]=0;
            }
            if(x==24)
            {
                map[5][4]=5;
                map[5][5]=0;
                map[5][2]=0;
            }
            if(x==25)
            {
                map[5][4]=0;
                map[4][4]=5;
                map[3][4]=3;
            }
            if(x==26)
            {
                map[5][4]=5;
                map[4][4]=0;
                map[5][2]=0;
            }
            if(x==27)
            {
                map[5][3]=5;
                map[5][4]=0;
                map[5][2]=0;
            }
            if(x==28)
            {
                map[5][2]=5;
                map[5][3]=0;
            }
            if(x==29)
            {
                map[5][1]=5;
                map[5][2]=0;
                map[5][2]=0;
            }
            if(x==30)
            {
                map[4][1]=5;
                map[5][1]=0;
                map[5][2]=0;
            }
            if(x==31)
            {
                map[3][1]=5;
                map[4][1]=0;
                map[5][2]=0;
            }
            if(x==32)
            {
                map[3][2]=5;
                map[3][1]=0;
                map[5][2]=0;
            }
            if(x==33)
            {
                map[2][2]=5;
                map[3][2]=0;
                map[5][2]=0;
            }
            if(x==34)
            {
                map[2][3]=5;
                map[2][2]=0;
                map[5][2]=0;
            }
            if(x==35)
            {
                map[2][4]=5;
                map[2][3]=0;
                map[5][2]=0;
            }
            if(x==36)
            {
                map[2][5]=5;
                map[2][4]=0;
                map[5][2]=0;
            }
            if(x==37)
            {
                map[2][6]=5;
                map[2][5]=0;
                map[5][2]=0;
            }
            if(x==38)
            {
                map[2][6]=0;
                map[3][6]=5;
                map[4][6]=8;
            }
            if(x==39)
            {
                map[2][6]=0;
                map[3][6]=0;
                map[4][6]=5;
                map[5][6]=8;
            }
            if(x==41)
            {
                map[4][7]=5;
                map[4][6]=0;
                map[5][2]=0;
            }
            if(x==42)
            {
                map[5][7]=5;
                map[4][7]=2;
                map[5][2]=0;

            }
            if(x==43)
            {
                map[5][8]=5;
                map[5][7]=2;
                map[5][2]=0;
            }
            if(x==44)
            {
                map[5][8]=0;
                map[4][7]=2;
                map[5][2]=0;
            }
            if(x==45)
            {
                break;
            }


            AC();
            for(int i=0; i<30000000; i++) ;

            system("cls");

        }
        else ;
    }
}



int main()
{
    printf("特别简易版超级玛丽\n");
     Sleep(1000);
     printf("准备\n");
      Sleep(1000);
     printf("3\n");
      Sleep(1000);
     printf("2\n");
      Sleep(1000);
     printf("1\n");
     Sleep(1000);
     printf("开始\n");



    move0();
    printf("-----------------------------\n                        win                   \n------------------------------------\n");
    return 0;
}

