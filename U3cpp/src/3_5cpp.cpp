/* 5．编写一个程序，要求用户输入全球当前的人口和美国当前的人口（或其他国家的人口）。将这些信息存储在long long变量中，并让程
序显示美国（或其他国家）的人口占全球人口的百分比。该程序的输出应与下面类似： */

#include<iostream>
using namespace std;
int main()
{
    long long w,u;
    cout<<"Enter the world's population:";
    cin>>w;
    cout<<"Enter the population of the US:";
    cin>>u;
    cout<<"The population of the US is "<<(100.0*u)/w<<"% of the world population."<<endl;
    return 0;
}