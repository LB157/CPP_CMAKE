/* 4．编写一个程序，要求用户以整数方式输入秒数（使用long或longlong变量存储），然后以天、小时、分钟和秒的方式显示这段时间。使
用符号常量来表示每天有多少小时、每小时有多少分钟以及每分钟有多少秒。该程序的输出应与下面类似： */

#include<iostream>
using namespace std;
const int day =24;
const int hour=60;
const int minutes=60;
int main()
{
    long long sec;
    cout<<"Enter the number of seconds:";
    cin>>sec;
    int a,b,c,d,dasec,husec;
    dasec=day*hour*minutes;
    husec=hour*minutes;
    a=sec/dasec;
    b=sec%dasec/husec;
    c=sec%dasec%husec/minutes;
    d=sec%dasec%husec%minutes;
    cout<<sec<<" seconds ="<<a<<" days,"<<b<<" hours,"<<c<<" minutes,"<<d<<" seconds."<<endl;
    return 0;
}